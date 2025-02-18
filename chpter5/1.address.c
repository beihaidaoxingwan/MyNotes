/*************************************************************************
	> File Name: 1.address.c
	> Author: chenjianyu
	> Mail: 1975546640@qq.com
	> Created Time: Tue 11 Feb 2025 08:55:20 AM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main(){
    int a = 123, len1 = 0, len2 = 0;
    char str[] = "\0\0\0\0\0";
    printf("strlen of str = %ld,size of str = %lu\n", strlen(str), sizeof(str));
    printf("&a = %p\n", &a);
    printf("sizeof(&a) = %ld\n", sizeof(&a));
    len1 = printf("%d\n", 123);
    len2 = printf("123 = %d\n", 123);
    printf("len1 = %d, len2 = %d\n", len1, len2);
    return 0;
}
