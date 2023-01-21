/* 프로그래머스 챌린지  |   하샤드 수 */

#include <stdio.h>
#include <stdbool.h>

bool solution(int x) {
    bool answer = true;
    int sum = 0;
    int n = x;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    if (x % sum == 0)
        return answer;
    return answer * 0;
}
