/*************************************************************************
	> File Name: 6.HZOJ-235.c
	> Author: chenjianyu
	> Mail: 1975546640@qq.com
	> Created Time: Mon 10 Feb 2025 09:36:52 AM CST
 ************************************************************************/

#include<stdio.h>

int num[10];

void printf_one_result(int i){
    for(int position = 0; position <= i; position++){
        if(position)printf(" ");
        printf("%d", num[position]);
    }
    printf("\n");
}

void f(int i, int j, int n){
    if(j > n) return;
    for(int k = j; k <= n; k++){
        num[i] = k;
        printf_one_result(i);
        f(i + 1, k + 1, n);
    }
}

int main(int argc, char *argv[], char **env){
    int n;
    scanf("%d", &n);
    f(0, 1, n);
    return 0;
}
