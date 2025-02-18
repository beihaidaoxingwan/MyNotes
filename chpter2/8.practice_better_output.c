/*************************************************************************
	> File Name: 8.practice_better_output.c
	> Author: 
	> Mail: 
	> Created Time: Fri 24 Jan 2025 06:29:41 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    char s[100] = "/0", t[100] = "/0";
    int n = 0;
    scanf("%[^\n]", s);
    printf("%s\n", s);
    n = sprintf(t, "|%s|", s);
    for(int i = 0; i < n; i++){
        printf("-");
    }
    printf("\n");
    printf("%s\n", t);
    for(int i = 0; i < n; i++){
        printf("-");
    }
    printf("\n");

    return 0;
}
