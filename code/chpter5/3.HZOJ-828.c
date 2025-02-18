/*************************************************************************
	> File Name: 3.HZOJ-828.c
	> Author: chenjianyu
	> Mail: 1975546640@qq.com
	> Created Time: Tue 11 Feb 2025 03:25:46 PM CST
 ************************************************************************/

#include<stdio.h>

void rotate(int *nums, int start, int end){
    for(; start < end;start++, end--){
        nums[start] ^= nums[end];
        nums[end] ^= nums[start];
        nums[start] ^= nums[end];
    }
}

void rotate_array(int *nums, int n, int p){
    //TODO
    rotate(nums, 0, p - 1);
    rotate(nums, p, n - 1);
    rotate(nums, 0, n - 1);
    return ;
}

int main(int argc, char *argv, char **env){
    int n, k;
    scanf("%d%d", &n, &k);
    int arr[n + 5];
    for(int i = 0; i < n; i++){
        scanf("%d", arr + i);
    }
    rotate_array(arr, n, k);
    for(int i = 0; i < n; i++){
        if(i != 0)printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}
