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

void Push(int value){
    node temp = CreateNode(value);
    if (tail == NULL){
        head = temp;
        tail = temp;
    }else{
        tail->next=temp;
        temp->back=tail;
        tail = temp;
    }
    
}               

void Pop(){
    node temp;
    if (tail == NULL){
        printf("EMPTY\n");
    }else{
        printf("Phan tu duoc dua ra:");
        printf("%d\n",tail->data);
        if (tail->back == NULL){
            head = NULL;
            tail = NULL;
        }
        else{
            tail=tail->back;
            tail->next=NULL;
        }
    }
}

void Traverser(){
    if (head == NULL){
        printf("EMPTY\n");
    }
    else{
        for(node p = head; p != NULL; p = p->next){
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
        Push(y);
        break;
    case 2:
        Pop();
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
    printf("Push = 1; Pop = 2\n");
    nhapxuat();
    printf("Cac phan tu co trong Stack luc nay la: \n");
    Traverser();
    return 0;
}
