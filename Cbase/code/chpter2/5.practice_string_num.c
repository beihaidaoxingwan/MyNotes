/*************************************************************************
	> File Name: 5.practice_string_num.c
	> Author: 
	> Mail: 
	> Created Time: Fri 24 Jan 2025 04:08:00 PM CST
 ************************************************************************/

//读入一个字符串，输出这个字符串中字符的数量
#include<stdio.h>

int main(){
    char s[100] = "hello world!";
    int length = 0;
    printf("Please input string:");
    scanf("%s", s);
    length = printf("%s", s);
    printf(" has %d char\n", length);
    getchar();
    scanf("%[a-z]", s);
    length = printf("%%[a-z]:%s", s);
    printf(" has %d char\n", length);
    getchar();
    printf("Please input string again:");
    scanf("%[^\n]", s);
    length = printf("%s", s);
    printf(" has %d char\n", length);

    return 0;
}
