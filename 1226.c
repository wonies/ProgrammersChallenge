#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int* solution(int fees[], size_t fees_len, const char* records[], size_t records_len) {
    int numbers = 0;
    int cnt = 0;
    int time;
    int outtime;
    int endtime = (23 * 60) + 59;
    int carintime[10001] ={0, };
    int carouttime[10001] = {0, };
    for (int i=0; i<10000; i++)
        carintime[i] = -1;

    int i = 0;
    while (i < records_len)
    {
        time = atoi(&records[i][0]) * 60 + atoi(&records[i][3]);
        numbers = atoi(&records[i][6]);

        if (records[i][11] == 'I')
        {
            if (carintime[numbers] == -1)
                cnt+=1;
            carintime[numbers] = time;
        }
        else if (records[i][11] == 'O')
        {
            outtime = time - carintime[numbers];
            carouttime[numbers] += outtime;
            carintime[numbers] = -42;
        }
        i++;
    }
    
    for (int j=0; j<10000; j++)
    {
        if (carintime[j] != -1 && carintime[j] != -42)
            carouttime[j] += endtime - carintime[j];
    }     
    
    int* ans = (int*)calloc(cnt, sizeof(int));

    int j = 0;
    int fee = 0;
    for(int i=0; i<10000; i++)
    {
        if (carouttime[i] != 0)
        {
            if (carouttime[i] > fees[0])
                ans[j++] = fees[1] + (ceil((float)(carouttime[i]-fees[0]) / (float)fees[2]) *fees[3]);  
            else
                ans[j++] = fees[1];
        }
    }
    return ans;
}