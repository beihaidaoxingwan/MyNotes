/*************************************************************************
	> File Name: 19.HZOJ-101.c
	> Author: chenjianyu
	> Mail: 1975546640@qq.com
	> Created Time: Sun 26 Jan 2025 08:52:19 AM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    char s[10] = "\0";
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    scanf("%s", s);
    sscanf(s, "%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e);
    a += b + c + d + e;
    printf("%d\n", a);
    return 0;
}
