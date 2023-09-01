#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main(){
    struct node *new_node ,*tail ,*temp;
    char ch;

    tail = NULL;

    do{
        new_node = (struct node *)malloc(sizeof(struct node));

        printf("enter value: ");
        scanf("%d ", &new_node -> data);

        new_node -> next = NULL;

        if(tail == NULL){
            tail = new_node;
            tail -> next = new_node;
        }
        else{
            new_node -> next = tail;
            tail -> next = new_node;
            tail = new_node;
        }

        printf("do you want to add value again(yes -> 'y' & no -> 'n'): ");
        scanf(" %c", &ch);

    }while(ch == 'y' || ch == 'Y');

    //display value
    temp = tail -> next;
    while(temp != tail){
        printf("%d ", temp -> data);
        temp = temp -> next;
    }





}