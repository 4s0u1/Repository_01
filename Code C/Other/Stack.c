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

void Push(int value){
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

void Pop(){
    node temp=head;
    if (tail == NULL){
        printf("EMPTY\n");
    }
    else{
        if (tail -> back == NULL){
            head = NULL;
            tail = NULL;
        }
        else{
            tail = tail -> back;
            tail -> next = NULL;
        }
    }
}

void Traverser(){
    if (head==NULL){
        printf("EMPTY\n");
    }
    else{
        printf("Các phần tử được xếp thứ tự từ dưới lên trên trong stack là: \n");
        for(node p = head; p != NULL; p = p->next)
            printf("%d ", p->data);
    }
}

void nhapxuat(){
    int x,y,locate; 
    do{ 
        printf("\nChọn câu lệnh: ");
        scanf("%d",&x);
        switch (x){
        case 1:
            printf("Nhập giá trị: ");
            scanf("%d",&y);
            Push(y);
            break;
        case 2:
            Pop();
            break;
        case 3:
            Traverser();
            break;
        }
    } while ((x > 0) && (x < 4) );
}

int main(){
    SetConsoleOutputCP(CP_UTF8);
    printf("Bảng câu lệnh:\n");
    printf("1.Push\n");
    printf("2.Pop\n");
    printf("3.Traveser\n");
    printf("Else:Exit\n");
    nhapxuat();
    return 0;
}