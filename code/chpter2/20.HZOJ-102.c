/*************************************************************************
	> File Name: 20.HZOJ-102.c
	> Author: chenjianyu
	> Mail: 1975546640@qq.com
	> Created Time: Sun 26 Jan 2025 09:08:59 AM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int a, b, c, t;
    scanf("%d %d %d %d", &a, &b, &c, &t);
    printf("%.2lf\n", (1.0 - (((1.0 / a) + (1.0 / b)) * t)) / (1.0 / a + 1.0 /  b -  1.0 / c) + t);
    return 0;
}
