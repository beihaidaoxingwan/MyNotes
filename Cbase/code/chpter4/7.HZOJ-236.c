/*************************************************************************
	> File Name: 7.HZOJ-236.c
	> Author: chenjianyu
	> Mail: 1975546640@qq.com
	> Created Time: Mon 10 Feb 2025 10:28:20 AM CST
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


void f(int i, int j, int n, int m, int sum){
    if(j > n)return;
    for(int k = j; k <= n; k++){
        num[i] = k;
        if(sum == m)printf_one_result(i);
        f(i + 1, k + 1, n, m, sum + 1);
    }
}
int main(int argc, char *argv[], char **env){
    int n = 0, m = 0;
    scanf("%d %d", &n, &m);
    f(0, 1, n, m, 1);
    return 0;
}
