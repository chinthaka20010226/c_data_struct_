// #include <stdio.h>
// #include <stdlib.h>

// struct Node{
//     int value;
//     struct Node *next;  // same to the recursion
// };

// int main(){
//     struct Node *head = NULL;
//     struct Node *one = NULL;
//     struct Node *two = NULL;

//     // dynamicaly memory allocation & type casting(bacause malloc return the void pointetr)
//     head = (struct Node *)malloc(sizeof(struct Node));
//     one = (struct Node *)malloc(sizeof(struct Node));
//     two = (struct Node *)malloc(sizeof(struct Node));

//     head -> value = 0;
//     head -> next = one;

//     one -> vakue = 1;
//     one -> next = two;

//     two -> value = 2;
//     two -> next = NULL;

//     // printf("%d %d %d", head -> value,one -> value,two -> value);
//     // printf("%p %p %p", head -> next,one -> next,two -> value);

//     struct Node *head_ref = head; // head reference

//     // traversal
//     while(head_ref != NULL){
//         printf("%d ", head_ref -> value);
//         head_ref = head_ref -> next;
//     }


//     return 0;
// } 



// ---------------------------------------------------------------------------


// #include <stdio.h>
// #include <stdlib.h>

// struct Node{
//     int value;
//     struct Node *next;
// };

// void printList(struct Node *n){
//     while(n != NULL){
//         printf("%d ", n -> value);
//         n = n -> next;
//     }
//     printf("\n");
// }

// void insertAtEnnd(struct Node **head_ref, int new_value){
//     struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

//     new_node -> value = new_value;
//     new_node -> next = NULL;

//     if(*head_ref == NULL){
//         *head_ref = new_node;
//         return;
//     }
        
//     struct Node *tail = *head_ref;
//     while(tail -> next != NULL){
//         tail = tail -> next;
//     }

//     tail -> next = new_node;

// }

// void insertAtFornt(struct Node **head_ref,int new_value){
//     struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

//     new_node -> value = new_value;
//     new_node -> next = NULL;

//     if(*head_ref == NULL){
//         *head_ref = new_node;
//         return;
//     }
//     new_node -> value = new_value;
//     new_node -> next = *head_ref;
//     *head_ref = new_node;

// }

// int main(){
//     struct Node *head;
//     int n,value;

//     head = NULL;

//     printf("enter the no.of elements: ");
//     scanf("%d", &n);

//     for(int i = 0;i < n;i++){
//         printf("input value: ");
//         scanf("%d", &value);

//         insertAtEnnd(&head,value);

//     }

//     for(int i = 0;i < n;i++){
//         printf("input value: ");
//         scanf("%d", &value);

//         insertAtFornt(&head,value);

//     }

//     printList(head);


//     return 0;
// }

// -------------------------------------------------------------------------
// sorting



// #include <stdio.h>

// void swap(int *x,int *y){
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }

// void insertionSort(int arr[],int n){
//     for(int i = 0;i < n -1;i++){          // 12 7 3 7 2
//         for(int j = i + 1;j > 0;j--){
//             if(arr[i] > arr[j]){
//                 swap(&arr[j-1],&arr[j]);
//             }
//         }
//     }
// }

// void printArray(int arr[],int n){
//     for(int i = 0;i < n;i++){
//         printf("%d ", arr[i]);
//     }
// }

// int main(){
//     int arr[5];

//     for(int i = 0;i < 5;i++){
//         printf("input elemet %d: ", (i+1));
//         scanf("%d", &arr[i]);
//     }

//     printArray(arr,5);
//     insertionSort(arr,5);
//     printArray(arr,5);

//     return 0;
// }



struct struct_name{
    char name[50];
    int city_no;
    float salary;
};

int main(){
    struct struct_name N1,N2,N3[20];

    N1.name = "chinthaka";
    N1.city_no = 01;
    N1.salary = 10000;

    printf("%s %d %f", N1.name,N1.city_no,N1.salary);
}


