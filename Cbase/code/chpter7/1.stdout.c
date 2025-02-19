/*************************************************************************
	> File Name: 1.stdout.c
	> Author: chenjianyu
	> Mail: 1975546640@qq.com
	> Created Time: Tue 18 Feb 2025 10:13:29 AM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    printf("test for stdout!");
    fflush(stdout);
    *((int *)(0)) = 5;
    return 0;
}
