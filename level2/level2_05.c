/* 프로그래머스 챌린지  | N개의 최소공배수 */

#include <stdio.h>

int solution(int arr[], size_t arr_len)
{
    int ans = 1;
    int max = arr[0];
    int gcd = 1;
    for(int i=0; i<arr_len;i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    int i = 1;
    int flag = 0;
    for (i=1; i<=max; i++)
    {
        flag = 0;
        for(int j=0; j<arr_len; j++)
        {
            if(arr[j] % i == 0)
                flag++;
        }
        if (flag > 1)
        {
            gcd *= i;
            for(int k=0; k<arr_len; k++)
            {
                if (arr[k] % i == 0)
                    arr[k] = arr[k] / i;
            }
            i = 1;
        }
    }
     for (int j=0; j<arr_len; j++)
        ans *= arr[j];
    
    return ans *gcd;
}