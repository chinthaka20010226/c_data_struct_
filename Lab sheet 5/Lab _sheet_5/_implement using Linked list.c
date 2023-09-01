#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node{
    double data;
    struct node *next;
}node;

node *front = NULL;
node *rear = NULL;

double rand_range(double min, double max){
    srand(time(NULL));
    // Generate random value between 1 and 100
    double random = ((double)rand()) / 2147453647;
    // 0.... (min - max)
    double range = (max - min) * random;
    // min ..... max
    double number = min + range;
    return number;
}

void enqueue(){
    double callTime = rand_range(0,10) * 10000;
    node *temp = malloc(sizeof(node *));
    temp->data = callTime;
    temp->next = NULL;
    if(front==NULL && rear==NULL){
        front = temp;
        rear = temp;
    }
    else{
        rear->next = temp;
        rear = temp;
    }
}

double dequeue(){
    if(front==NULL){
        printf("Queue is empty.\n");
        return 0;
    }
    node *temp = front;
    double data = temp->data;

    if(front==rear){
        front = rear = NULL;
    }
    else{
        front = front->next;
    }

    free(temp);
    return data;
}

int isFull(){
    return 0; //Linked list implement does not have limit
}

int isEmpty(){
    if(front==NULL && rear==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

void display(){
    if(front==NULL){
        printf("Queue is empty.\n");
    }
    else{
        node *temp = malloc(sizeof(node *));
        temp = front;
        printf("Queue callTimes are: ");
        while(temp != NULL){
            printf("%.3f ",temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}


int main(){
    int choice;
    double callTime;

    while(1){
        printf("\nCALL CENTER\n");
        printf("1. Add a customer call to the queue\n");
        printf("2. Remove the customer call from the queue\n");
        printf("3. Display all the customer calls in the queue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                enqueue();
                printf("Customer call add is successful.\n");
                break;
            case 2:
                callTime = dequeue();
                if(callTime != 0){
                    printf("Customer call remove is successful.\n");
                    printf("Remove call time is: %.3f\n",callTime);
                }
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice. please try again.\n");
        }
    }

    return 0;
}

