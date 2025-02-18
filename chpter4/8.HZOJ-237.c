/*************************************************************************
	> File Name: 8.HZOJ-237.c
	> Author: chenjianyu
	> Mail: 1975546640@qq.com
	> Created Time: Mon 10 Feb 2025 11:31:11 AM CST
 ************************************************************************/

#include<stdio.h>

int num[8];

void printf_one_result(int i){
    for(int position = 0; position <= i; position++){
        if(position)printf(" ");
        printf("%d", num[position]);
    }
    printf("\n");
}

int judge(int i, int k){
    for(int position = 0; position < i; position++){
        if(num[position] == k)return 1;
    }
    return 0;
}

void f(int i, int n){
    if(i >= n)return;
    for(int k = 1; k <= n; k++){
        if(judge(i, k))continue;
        num[i] = k;
        if(i == n - 1)printf_one_result(i);
        f(i + 1,  n);
    }
}



int main(int argc, char *argv[], char **env){
    int n;
    scanf("%d", &n);
    f(0, n);
    return 0;
}
