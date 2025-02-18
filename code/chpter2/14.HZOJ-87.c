/*************************************************************************
	> File Name: 14.HZOJ-87.c
	> Author: chenjianyu
	> Mail: 1975546640@qq.com
	> Created Time: Sat 25 Jan 2025 04:44:22 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    double width, length;
    scanf("%lf %lf", &length, &width);
    printf("%.2lf\n%.2lf\n", 2 * (length + width), length*width);
    return 0;
}
