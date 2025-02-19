/*************************************************************************
	> File Name: 2.test-switch.c
	> Author: chenjianyu
	> Mail: 1975546640@qq.com
	> Created Time: Wed 05 Feb 2025 11:28:49 AM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int n;
    printf("Please input n:");
    scanf("%d", &n);
    switch(n){
        case 1: printf("one\n");break;
        case 2: printf("two\n");break;
        case 3: printf("three\n");break;
        default: printf("error\n");break;
    }
    return 0;
}
