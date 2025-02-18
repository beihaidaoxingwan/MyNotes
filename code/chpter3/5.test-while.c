/*************************************************************************
	> File Name: 5.test-while.c
	> Author: chenjianyu
	> Mail: 1975546640@qq.com
	> Created Time: Wed 05 Feb 2025 02:58:51 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int x = 0;
    printf("Please input x:");
    while(scanf("%d", &x) != EOF){
        printf("%d\n", x * 2);
        printf("Please input x:");
    }
    return 0;
}
