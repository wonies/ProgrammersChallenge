/* 프로그래머스 챌린지  |   평균 구하기 */

#include <stdio.h>

double solution(int arr[], size_t arr_len) {
    double answer = 0;
    for (size_t i=0; i<arr_len; i++)
        answer += arr[i];
    answer /= arr_len;
    return answer;
}
