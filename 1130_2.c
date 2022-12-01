/* 프로그래머스 챌린지  |  최소직사각형 */
#include <stdio.h>
#include <string.h>

#define SWAP(a, b) {int temp=a; a=b; b=temp;}

int solution(int** sizes, size_t sizes_rows, size_t sizes_cols) {
    int answer = 0;
    int width=0;
    int height=0;
    
    for(int i=0; i< sizes_rows; i++)
    {
        if (sizes[i][0] < sizes[i][1])
            SWAP(sizes[i][0], sizes[i][1]);
        if (width < sizes[i][0]) width = sizes[i][0];
        if (height < sizes[i][1]) height = sizes[i][1];
    }
    answer = width * height;
    return answer;
}