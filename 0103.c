/* 프로그래머스 챌린지  | 연속 부분 수열 합의 개수 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int solution(int elements[], size_t elements_len) {
    int ans = 0;
    int arr[100000]={0, };
    int overlap[1000000] = {0, };
    int without[1000000] = {0, };
    int i;
    int k = 0;
    for(i=0; i<elements_len; i++)
    {
        k = i;
        arr[i] = elements[i];
        arr[i+elements_len] = elements[i];
        overlap[i] = arr[i];
    }
    k++;
    int order = 2;
    for(int i=1; i<elements_len; i++)
    {
        for(int j=0; j <elements_len; j++)
        {
            int temp = order;
            int mu= 0;
            while (temp)
            {
                overlap[k] += arr[j+mu];
                temp--;
                mu++;
            }
            k++;
        }
         order++;
    }
    for (int i=0; i<k; i++)
        without[overlap[i]]++;
    
    for(int i=0; i<1000000; i++)
    {
        if (without[i]>= 1 && without[i]!=0)
            ans++;
    }
    return ans;
}