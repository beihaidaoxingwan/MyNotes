/*************************************************************************
	> File Name: 4.HZOJ-881.c
	> Author: chenjianyu
	> Mail: 1975546640@qq.com
	> Created Time: Tue 11 Feb 2025 04:55:34 PM CST
 ************************************************************************/

#include<stdio.h>

void swap(int *a, int *b){
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}
