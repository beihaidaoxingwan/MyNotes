/*************************************************************************
	> File Name: 18.HZOJ-97.c
	> Author: chenjianyu
	> Mail: 1975546640@qq.com
	> Created Time: Sun 26 Jan 2025 08:47:36 AM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    long long n = 0;
    scanf("%lld", &n);
    printf("%lld\n", n * (1 + n) / 2);
    return 0;
}
