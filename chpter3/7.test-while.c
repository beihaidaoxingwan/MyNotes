/*************************************************************************
	> File Name: 7.test-while.c
	> Author: chenjianyu
	> Mail: 1975546640@qq.com
	> Created Time: Wed 05 Feb 2025 04:36:47 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int f0 = 0, f1 = 1;
    for (int i = 0; i < 20; i++){
        printf("%d ", f0);
        f1 += f0;
        f0 = f1 - f0;
    }
    printf("\n");
    return 0;
}
