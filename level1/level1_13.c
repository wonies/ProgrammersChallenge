/* 프로그래머스 챌린지  |   소수 만들기 */

#include <stdio.h>
#include <stdlib.h>

int is_prime(int n)
{
    for(int i=2; i<n/2; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int solution(int nums[], size_t nums_len)
{
    int ans = 0;
    for(int i=0; i<nums_len-2; i++)
    {
        for(int j=i+1; j< nums_len-1; j++)
        {
            for(int k=j+1; k<nums_len; k++)
            {
                int temp = nums[i]+nums[j]+nums[k];
                if (is_prime(temp))
                    ans++;
            }
        }
    }
    return ans;
}
