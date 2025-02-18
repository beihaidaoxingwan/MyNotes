/*************************************************************************
	> File Name: 5.test-IP.c
	> Author: chenjianyu
	> Mail: 1975546640@qq.com
	> Created Time: Wed 12 Feb 2025 11:00:40 AM CST
 ************************************************************************/

#include<stdio.h>

int main (int argc, int *argv, int **env){
    int a, b, c, d;
    scanf("%d.%d.%d.%d", &a, &b, &c, &d);
    int n = 0;
    char *p = (char *)&n;
    p[3] = a;  
    p[2] = b;  
    p[1] = c;  
    p[0] = d;
    printf("%u\n", n);
    printf("p[0] = %x\n", p[0]);
    printf("p[1] = %x\n", p[1]);
    printf("p[2] = %x\n", p[2]);
    printf("p[3] = %x\n", p[3]);
}
