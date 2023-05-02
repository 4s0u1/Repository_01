#include<stdio.h>
#include<stdlib.h>

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
    node temp = CreateNode(value);
    if (tail == NULL){
        head = temp;
        tail = temp;
    }else{
        tail->next = temp;
        tail = temp;
    }
    
}               

void Dequeue(){
    node temp;
    if (head == NULL){
        printf("EMPTY\n");
    }else{
        printf("Phan tu duoc dua ra:");
        printf("%d\n",head->data);
        if (head->next == NULL){
            
            head = NULL;
            tail = NULL;
        }
        else{
            head = head->next;
            head->back = NULL;
        }
    }
}

void Traverser(){
    if (head == NULL){
        printf("EMPTY\n");
    }
    else{
        for(node p = tail; p != NULL; p = p->back){
            printf("%d ", p->data);
        }
    }
}

void nhapxuat(){
    int x,y,d; 
    
    printf("Chon cau lenh: ");
    scanf("%d",&x);
    switch (x)
    {
    case 1:
        printf("Nhap gia tri: ");
        scanf("%d",&y);
        Enqueue(y);
        break;
    case 2:
        Dequeue();
        break;
    }
    printf ("Ban co muon tiep tuc? (y/n): ");
    char c;
    fflush(stdin);
    scanf("%c",&c);
    if (c == 'y')
        nhapxuat();
}

int main(){
    printf("Enqueue = 1; Dequeue = 2\n");
    nhapxuat();
    printf("Cac phan tu co trong Stack luc nay la: \n");
    Traverser();
    return 0;
}
