/*************************************************************************
	> File Name: 6.memory.c
	> Author: chenjianyu
	> Mail: 1975546640@qq.com
	> Created Time: Wed 12 Feb 2025 01:42:55 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand((unsigned)time(NULL));
    int *arr = (int *)malloc(sizeof(int) * 10);
    for(int i = 0; i < 10; i++){
        arr[i] = rand() % 100;
    }
    for(int i = 0; i < 10; i++){
        printf("%d\n", arr[i]);
    }    
    return 0;
}
