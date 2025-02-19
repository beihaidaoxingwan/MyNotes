/*************************************************************************
	> File Name: 11.practice_digit.c
	> Author: 
	> Mail: 
	> Created Time: Sat 25 Jan 2025 10:12:30 AM CST
 ************************************************************************/

#include<stdio.h>

int check_digit(int a){
    for (int i = 0; i < 32; i++){
        if ((1 << i) & a){
            return (1 << i);
        }
    }
    return -1;
}

int better_check(int a){
    int b = ~a + 1;
    a &= b;
    return a;
}

int main(){
    int a, flag = 0, flag_better = 0;
    printf("Please input number:");
    scanf("%d", &a);
    flag = check_digit(a);
    flag_better = better_check(a);
    printf("First power is %d\nbetter check is %d\n", flag, flag_better);
    return 0;
}
