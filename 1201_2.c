/* 프로그래머스 챌린지  |  최소직사각형 */
#include <stdio.h>
#include <string.h>

long long solution(int price, int money, int count)
{
    long long answer = 0;
    int total = price;

    for(int i=0; i<count; i++)
    {
        answer += total;
        total += price;
    }
    return answer - money > 0 ? answer - money : 0;
}