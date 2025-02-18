/*************************************************************************
	> File Name: 1.test-ifelse.c
	> Author: chenjianyu
	> Mail: 1975546640@qq.com
	> Created Time: Wed 05 Feb 2025 11:00:36 AM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int n = 0;
    printf("Please scanf n:");
    scanf("%d", &n);
    if (n == 0){
        printf("HEHE\n");
    } else if (n < 60){
        printf("FAIL\n");
    } else if (n < 75){
        printf("MEDIUM\n");
    } else if (n <= 100){
        printf("GOOD\n");
    }
    return 0;
}
