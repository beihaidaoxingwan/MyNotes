/*************************************************************************
	> File Name: 5.link.c
	> Author: chenjianyu
	> Mail: 1975546640@qq.com
	> Created Time: Mon 17 Feb 2025 02:56:16 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node *getNewNode(int val){
    Node *p = (Node *)malloc(sizeof(Node));
    p->data = val;
    p->next = NULL;
    return p;
}

Node *insertNewNode(Node *head, int pos, int val){
    #ifdef DEBUG
    printf("come into insert!\n");
    #endif
    if (pos == 0){
        Node *p = getNewNode(val);
        p->next = head;
        return p;
    }
    Node *p = head;
    #ifdef DEBUG
    printf("cycle ready\n");
    #endif
    for(int i = 0; i < pos - 1; i++){
        p = p->next;
    }
    Node *tmp = getNewNode(val);
    tmp->next = p->next;
    p->next = tmp;
    return head;
}    

void clear(Node *head){
    if (head == NULL) return;
    for (Node *p = head, *q; p; p = q){
        q = p->next;
        free(p);
    }
    return ;
}

void output_linklist(Node *head){
    #ifdef DEBUG
    printf("come into output_linklist!\n");
    #endif
    int len = 0;
    for(Node *p = head; p; p = p->next) len += 1;
    #ifdef DEBUG
    printf("come out from cal len!\n");
    #endif
    for(int i = 0; i < len; i++){
        printf("%3d", i);
        printf("  ");
    }
    printf("\n");
    #ifdef DEBUG
    printf("come out from printf pos!\n");
    #endif
    for(Node *p = head; p; p = p->next){
       printf("%3d", p->data);
       if(p -> next)printf("->"); 
    }
    printf("\n\n\n");
    return ;
}

int main(){
    srand(time(0));
    #define MAX_OP 7
    Node *head = NULL;
    for (int i = 0; i < MAX_OP; i++){
        int pos = rand() % (i + 1), val = rand() % 100;
        printf("insert %d at %d to linklist\n", val, pos);
        head = insertNewNode(head, pos, val);
        #ifdef DEBUG
        printf("come out from insert node!\n");
        #endif
        output_linklist(head);
    }
    clear(head);
}
