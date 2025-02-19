/*************************************************************************
	> File Name: 2.HZOJ-149.c
	> Author: chenjianyu
	> Mail: 1975546640@qq.com
	> Created Time: Tue 11 Feb 2025 02:19:59 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[], char **env){
    int len = 0;
    char str[55];
    while(scanf("%s", str) != EOF){
        len = strlen(str);
    }
    printf("%d\n", len);
    return 0;
}
