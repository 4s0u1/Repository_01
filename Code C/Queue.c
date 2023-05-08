#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

struct LinkedList{ 
    int data;   
    struct LinkedList *next;
    struct LinkedList *back;  
};                           

typedef struct LinkedList *node; 

node head = NULL; 
node tail = NULL;  

node CreateNode(int value){
    node temp;
    temp = (node)malloc(3*sizeof(node)); 
    temp->data = value;                
    temp->next = NULL;
    temp->back = NULL;                  
    return temp;                        
}                                       

void Enqueue(int value){
    node temp,p;
    temp = CreateNode(value);
    if (tail == NULL){
        head = temp;
        tail = temp;     
    }
    else{
        temp -> back = tail;
        tail -> next = temp;
        tail = temp;
    }
}

void Dequeue(){
    if (head == NULL){
        printf("EMPTY\n");
    }
    else{
        printf("Phần tử được đưa ra khỏi queue: %d\n",head->data);
        if (head -> next == NULL) {
            head = NULL;
            tail = NULL;
        }
        else{
            head = head->next;
            head -> back = NULL;
        }
    }
}

void Traverser(){
    if (head==NULL){
        printf("EMPTY\n");
    }
    else{
        printf("Các phần tử trong Queue xếp theo thứ tự thêm vào là: \n");
        for(node p = head; p != NULL; p = p->next)
            printf("%d ", p->data);
    }
}

void Menu(){
    int x,y; 
    printf("Bảng câu lệnh:\n");
    printf("1.Enqueue\n");
    printf("2.Dequeue\n");
    printf("3.Traveser\n");
    printf("Else:Exit\n");
    do{ 
        printf("\nChọn câu lệnh: ");
        scanf("%d",&x);
        switch (x){
        case 1:
            printf("Nhập giá trị: ");
            scanf("%d",&y);
            Enqueue(y);
            break;
        case 2:
            Dequeue();
            break;
        case 3:
            Traverser();
            break;
        }
    } while ((x > 0) && (x < 4) );
}

int main(){
    SetConsoleOutputCP(CP_UTF8);
    Menu();
    return 0;
}