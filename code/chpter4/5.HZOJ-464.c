/*************************************************************************
	> File Name: 5.HZOJ-464.c
	> Author: chenjianyu
	> Mail: 1975546640@qq.com
	> Created Time: Sat 08 Feb 2025 11:54:40 AM CST
 ************************************************************************/

#include<stdio.h>

int sum;

void sum_year(int a, int b){
    if(a > b)return;
    sum += (((!(b % 4)) && b % 100) || !(b % 400));
    return sum_year(a, b-1);
}


int main(){
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    sum_year(a, b);
    printf("%d\n", sum);
    return 0;

}
