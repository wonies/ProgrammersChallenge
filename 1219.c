/* 프로그래머스 챌린지  | 오른쪽 괄호 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *base_two(size_t num)
{
    char two[100000] = {0, };
    int cnt = 0;
    int base = 0;
    int i = 0;
    while (1)
    {
        two[i] = num % 2;
        num /= 2;
        cnt++;

        if (num == 0)
            break ;
    }
    int j = 0;
    while (j <= cnt)
    {
        int temp;
        temp = two[j];
        two[j] = two[cnt];
        two[cnt] = two[j];
        j++;
        cnt--; 
    }
    return two;
}

int* solution(const char* s) {
    int* ans = (int*)calloc(2, sizeof(int));
    int len = strlen(s);
    char to_base[len + 1];
    int i = 0;
    int delete_zero;
    int cnt_left = 0, cnt_right = 0;
    char *binary = strdup(s);
    printf("binary : %s", binary);
    while (len >= 1)
    {
        delete_zero = 0;
        for (int i=0; i<len; i++)
        {
            if (binary[i] == '0')
            {
                delete_zero++;
                cnt_right++;
            }
        }
        len -= delete_zero;
        binary = base_two(len);
        cnt_left++;
    }
    ans[0] = cnt_left;
    ans[1] = cnt_right;

    return ans;
}
int main()
{
    char s1[100] = "110010101001";
    int *s = solution(s1);
    for(int i = 0; i < 2 ; i++)
        printf("%d", s[i]);
}