/* 프로그래머스 챌린지  | 방문 길이 */

#include <stdio.h>
#include <string.h>

int check[11][11][4];

int solution(const char* dirs) {
    int ans = 0;
    int len = strlen(dirs);
    int cnt = 0;
    int x = 5;
    int y = 5;
    int chx = 5;
    int chy = 5;
    int prior = 0;
    int subsequ = 0;
    
    
    for (int i=0; i<len; i++)
    {
        if (dirs[i] == 'U')
        {
            if (y + 1 < 11)
            {

                y++;
                prior = 0;
                subsequ = 1;
            }
            else
                continue;
        }
        else if (dirs[i] == 'D')
        {
            if (y - 1 >= 0)
          {
                y--;
                prior = 1;
                subsequ = 0;
          }
            else
                continue;
        }
        else if (dirs[i] == 'L')
        {
            if (x - 1 >= 0)
          {
             x--;
             prior = 3;
             subsequ = 2;
          }
            else
                continue;
        }
        else if (dirs[i] == 'R')
        {
            if (x + 1 < 11)
          {
              x++;
              prior = 2;
              subsequ = 3; 
          }
            else
                continue;
        }
        else
            continue;
        if (check[chy][chx][prior] == 0)
        {
            check[chy][chx][prior] = 1;
            check[y][x][subsequ] = 1;
            cnt++;
        }
        chy = y;
        chx = x;
    }
    return cnt;
}
