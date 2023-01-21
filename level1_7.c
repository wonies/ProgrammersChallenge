/* 프로그래머스 챌린지  |  약수의 개수와 덧셈 */
#include <stdio.h>

int prime_cnt(int num)
{
    int cnt = 0;
    
    for (int i=1; i<=num; i++)
    {
        if (num % i == 0)
            cnt++;
    }
    return cnt;
}

int solution(int left, int right) 
{
    int answer = 0;

    for(int i=left; i<=right; i++)
    {
        if (prime_cnt(i) % 2 == 0)
            answer += i;
        else
            answer -= i;
    }
    return answer;
}
