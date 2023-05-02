#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

struct LinkedList{ 
    int data;   
    struct LinkedList *next;  
};                           

typedef struct LinkedList *node; 

node head = NULL;   

node CreateNode(int value){
    node temp;
    temp = (node)malloc(sizeof(node)); 
    temp->data = value;                
    temp->next = NULL;                  
    return temp;                        
}                                       

void AddHead(int value){
    node temp = CreateNode(value);
    if (head == NULL){
        head = temp; 
    }else{
        temp->next = head;
        head = temp;
    }
}
   
void AddTail(int value){
    node temp,p;
    temp = CreateNode(value);
    if (head == NULL){
        head = temp;     
    }
    else{
        p = head;
        while(p->next != NULL){
            p = p->next;
        }
        p->next = temp;
    }
}
void AddAt(int locate, int value){
    
    if (locate == 1){
        AddHead(value);
    }
    else{
        node temp,p = head;
        temp = CreateNode(value);
        for (int i=1;i<locate-1;i++){
            p = p->next;
        } 
        temp->next = p->next;
        p->next = temp;
    }
}

void DeleteHead(){
    if (head != NULL){
        if (head -> next = NULL) {
            head = NULL;
        }
        else{
            head= head->next;
        }
    }
    else{
        printf("EMPTY\n");
    }
}

void DeleteTail(){
    node temp=head;
    if (head == NULL){
        printf("EMPTY\n");
    }
    else{
        if (head -> next ==NULL){
            head = NULL;
        }
        else{
            while (temp->next->next!=NULL){
                temp=temp->next;
            }
            free(temp->next);
            temp->next=NULL;
        }
    }
}
void Traverser(){
    if (head==NULL){
        printf("EMPTY\n");
    }
    else{
        printf("Các phần tử có trong linked list lúc này là: \n");
        for(node p = head; p != NULL; p = p->next){
            printf("%d ", p->data);
        }
    }
}

void nhapxuat(){
    int x,y,d; 
    
    printf("Chọn câu lệnh: ");
    scanf("%d",&x);
    switch (x)
    {
    case 1:
        printf("Nhập giá trị: ");
        scanf("%d",&y);
        AddHead(y);
        break;
    case 2:
        printf("Nhập giá trị: ");
        scanf("%d",&y);
        AddTail(y);
        break;
    case 3:
        printf("Nhập giá trị: ");
        scanf("%d",&d);
        printf("Nhập giá trị: ");
        scanf("%d",&y);
        AddAt(d,y);
        break;
    case 4:
        DeleteHead();
        break;
    case 5:
        DeleteTail();
        break;
    }
    printf ("Bạn có muốn tiếp tục? (y/n): ");
    char c;
    fflush(stdin);
    scanf("%c",&c);
    if (c == 'y')
        nhapxuat();
}

int main(){
    SetConsoleOutputCP(CP_UTF8);
    printf("AddHead = 1; AddTail = 2; AddAt = 3; DeleteHead = 4; DeleteTail = 5\n");
    nhapxuat();
    Traverser();
    return 0;
}