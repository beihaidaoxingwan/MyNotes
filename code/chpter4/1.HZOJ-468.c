/*************************************************************************
	> File Name: 1.HZOJ-468.c
	> Author: chenjianyu
	> Mail: 1975546640@qq.com
	> Created Time: Sat 08 Feb 2025 10:25:59 AM CST
 ************************************************************************/

#include<stdio.h>


int gcd(int a, int b){
    if (b == 0) return a;
    return gcd(b, a % b);

}

int main(){
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    printf("%d\n", gcd(a, b));
}
