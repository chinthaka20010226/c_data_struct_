#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 10

double queue[n];
int front=-1, rear=-1;

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
    if(isFull()){
        printf("Queue is full.\n");
    }
    else if(isEmpty()){
        front++;
        rear++;
        queue[rear] = callTime;
    }
    else{
        rear++;
        queue[rear] = callTime;
    }
}

double dequeue(){
    double data;
    if(isEmpty()){
        printf("Queue is empty.\n");
        return 0;
    }
    else if(front==rear){
        data = queue[front];
        front = rear = -1;
    }
    else{
        data = queue[front];
        front++;
    }
    return data;
}

int isEmpty(){
    if(front==-1 && rear==-1){
        return 1;
    }
    return 0;
}

int isFull(){
    if(rear==n-1){
        return 1;
    }
    return 0;
}

void display(){
    if(isEmpty()){
        printf("Queue is empty.\n");
    }
    else{
        printf("Queue callTimes are: ");
        for(int i=front; i<=rear; i++){
            printf("%.3f ",queue[i]);
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



