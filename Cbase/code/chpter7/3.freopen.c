/*************************************************************************
	> File Name: 3.freopen.c
	> Author: chenjianyu
	> Mail: 1975546640@qq.com
	> Created Time: Tue 18 Feb 2025 10:34:02 AM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    freopen("output.txt", "w", stdout);
    freopen("input.txt", "r", stdin);
    printf("hello freopen\n");
    char s[1000];
    while(scanf("%[^\n]", s) != EOF){
        getchar();
        printf("%s | hello world\n", s);
    }
    return 0;
}
