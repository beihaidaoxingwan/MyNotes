/*************************************************************************
	> File Name: 9.HZOJ-239.c
	> Author: chenjianyu
	> Mail: 1975546640@qq.com
	> Created Time: Mon 10 Feb 2025 02:30:18 PM CST
 ************************************************************************/

#include<stdio.h>
#include"/usr/include/math.h"
#include<stdlib.h>
#define S(a) ((a) * (a))

void f(int N, long S, long *x, long *y){
    if(N == 1){
        if(S == 1){
            *x = 0;
            *y = 0;
        } else if(S == 2){
            *x = 0;
            *y = 1;
        } else if(S == 3){
            *x = 1;
            *y = 1;
        } else {
            *x = 1;
            *y = 0;
        }
    } else {
        long L = 1L << (N - 1);
        long block = L * L;
        long xx, yy;
        if(S <= block){
            f(N - 1, S, &xx, &yy);
            *x = yy;
            *y = xx;
        } else if(S <= 2 * block){
            f(N - 1, S - block, &xx, &yy);
            *x = xx;
            *y = L + yy;
        } else if(S <= 3 * block){
            f(N - 1, S - 2 * block, &xx, &yy);
            *x = L + xx;
            *y = L + yy;
        } else if(S <= 4 * block){
            f(N - 1, S - 3 * block, &xx, &yy);
            *x = 2 * L - yy - 1;
            *y = L - xx - 1;
        }
    }
}

int main(int argc, char *argv[], char **env){
    int T = 0, N = 0;
    long S = 0, D = 0, x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    scanf("%d", &T);
    for(int i = 0; i < T; i++){
        scanf("%d %ld %ld", &N, &S, &D);
        f(N, S, &x1, &y1);
        f(N, D, &x2, &y2);
        double result = sqrt(S(x1 - x2) + S(y1 - y2));
        printf("%ld\n",(long)(10 * result + 0.5));
    }
}

