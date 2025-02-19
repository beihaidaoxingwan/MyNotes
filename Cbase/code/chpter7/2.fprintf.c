/*************************************************************************
	> File Name: 2.fprintf.c
	> Author: chenjianyu
	> Mail: 1975546640@qq.com
	> Created Time: Tue 18 Feb 2025 10:28:49 AM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    fprintf(stdout, "hello world\n");
    int n;
    fscanf(stdin, "%d", &n);
    fprintf(stderr, "n = %d\n", n);
    return 0;
}
