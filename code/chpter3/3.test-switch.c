/*************************************************************************
	> File Name: 3.test-switch.c
	> Author: chenjianyu
	> Mail: 1975546640@qq.com
	> Created Time: Wed 05 Feb 2025 11:35:45 AM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int n = 0;
    printf("Please input n:");
    scanf("%d", &n);
    switch(n){
        case 1: printf("one ");
        case 2: printf("two ");
        case 3: printf("three ");break;
        default: printf("error");break;
    }
    printf("\n");
    return 0;
}
