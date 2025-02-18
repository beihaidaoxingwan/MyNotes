/*************************************************************************
	> File Name: 4.HZOJ-113.c
	> Author: chenjianyu
	> Mail: 1975546640@qq.com
	> Created Time: Wed 05 Feb 2025 11:46:04 AM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int tmp, year, month;
    printf("Please input yeari and month:");
    scanf("%d %d", &year, &month);
    tmp = month % 7;
    if(month == 2){
        if ((!(year % 4) && year % 100) || !(year % 400)){
            printf("29\n");
        } else {
            printf("28\n");
        }
    } else if (tmp == 0){
        printf("31\n");
    } else {
        printf("%d\n", 30 + (tmp % 2));
    }

    return 0;
}
