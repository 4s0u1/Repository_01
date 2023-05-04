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

void AddHead(int value){
    node temp = CreateNode(value);
    if (head == NULL){
        head = temp;
        tail = temp; 
    }else{
        temp -> next = head;
        head -> back = temp;
        head = temp;
    }
}
   
void AddTail(int value){
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
        temp->back = p;
        p->next=temp;
        temp -> back = temp -> next -> back;
        temp -> next -> back = temp;
    }
}

void DeleteHead(){
    if (head == NULL){
        printf("EMPTY\n");
    }
    else{
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

void DeleteTail(){
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
void DeleteAt(int locate){
    if (locate == 1){
        DeleteHead();
    }
    else{
        node p = head;
        for (int i = 1;i < locate-1;i++){
            p = p->next;
        } 
        p->next = p->next->next;
        p->next->back = p;
    }
}
void Traverser(){
    if (head==NULL){
        printf("EMPTY\n");
    }
    else{
        printf("Các phần tử được duyệt từ đầu đi là: \n");
        for(node p = head; p != NULL; p = p->next)
            printf("%d ", p->data);
    }
}
void TraverserReverse(){
    if (tail==NULL){
        printf("EMPTY\n");
    }
    else{
        printf("Các phần tử được duyệt từ cuối đi là: \n");
        for(node p = tail; p != NULL; p = p->back)
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
            AddHead(y);
            break;
        case 2:
            printf("Nhập giá trị: ");
            scanf("%d",&y);
            AddTail(y);
            break;
        case 3:
            printf("Nhập vị trí: ");
            scanf("%d",&locate);
            printf("Nhập giá trị: ");
            scanf("%d",&y);
            AddAt(locate,y);
            break;
        case 4:
            DeleteHead();
            break;
        case 5:
            DeleteTail();
            break;
        case 6:
            printf("Nhập vị trí: ");
            scanf("%d",&locate);
            DeleteAt(locate);
            break;
        case 7:
            Traverser();
            break;
        case 8:
            TraverserReverse();
            break;
        }
    } while ((x > 0) && (x < 9) );
}

int main(){
    SetConsoleOutputCP(CP_UTF8);
    printf("Bảng câu lệnh:\n");
    printf("1.AddHead\n");
    printf("2.AddTail\n");
    printf("3.AddAt\n");
    printf("4.DeleteHead\n");
    printf("5.DeleteTail\n");
    printf("6.DeleteAt\n");
    printf("7.Traveser\n");
    printf("8.TraverserReverse\n");
    printf("Else:Exit\n");
    nhapxuat();
    return 0;
}