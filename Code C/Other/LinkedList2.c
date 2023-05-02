#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

struct LinkedList2{
    int data;
    struct LinkedList2 *next;
    struct LinkedList2 *back;
};

typedef struct LinkedList2 *node;

node head = NULL;
node tail = NULL;

node Create(int value){
    node temp;
    temp = (node)malloc(3*sizeof(node));
    temp->next = NULL;
    temp->back = NULL;
    temp->data = value;
    return temp;
}

void addHead(int data){
    node temp;
    temp = Create(data);
    if(head==NULL){
        head = temp;
        tail = temp;
    }
    else{
        temp->next = head;
        head->back = temp;
        head = temp;
    }
}

void addTail(int data){
    node temp;
    temp = Create(data);
    if(tail==NULL){
        head = temp;
        tail = temp;
    }
    else{
        temp->back = tail;
        tail->next = temp;
        tail = temp; 
    }
}

void addAt(int data, int index){
    node temp, p;
    p = head;
    temp = Create(data);
    if(index == 1){
        addHead(data);
    }
    else{
        for(int i=1; i<=index-2; i++){
            p = p->next;
        }
        temp->next = p->next;
        p->next = temp;
        temp->back=p;
        temp->next->back=temp;
    }

}

void delHead(){
    head = head->next;
    head->back = NULL;
}

void delTail(){
    tail = tail->back;
    tail->next = NULL;
}

void delAT(int index){
    node p = head;
    if(index==1){
        delHead();
    }
    else{
    for(int i=1; i<index; i++){
        p = p->next;
    }
    (p->back)->next = p->next;
    }
}

void output1(){
    if(head==NULL){
        printf("List trống!");
    }
    else{
        for(node p = head; p!=NULL; p=p->next){
            printf("%d=>", p->data);
        }
        printf("NULL\n");
    }
}

void output2(){
    if(tail==NULL){
        printf("List trong!");
    }
    else{
        for(node p = tail; p!=NULL; p=p->back){
            printf("%d=>", p->data);
        }
        printf("NULL\n");
    }
}

void nhap() {
    int x, y, z, d;
    printf("Chọn câu lệnh: ");
    scanf("%d", &x);
    while (x > 0 && x < 8) {
        switch (x) {
            case 1:
                printf("Nhập giá trị: ");
                scanf("%d", &y);
                addHead(y);
                break;
            case 2:
                printf("Nhập giá trị: ");
                scanf("%d", &z);
                addTail(z);
                break;
            case 3:
                printf("Nhập giá trị: ");
                scanf("%d", &y);
                printf("Nhập giá trị: ");
                scanf("%d", &d);
                addAt(y, d);
                break;
            case 4:
                delHead();
                break;
            case 5:
                delTail();
                break;
            case 6:
                printf("Nhập giá trị: ");
                int index;
                scanf("%d", &index);
                delAT(index);
                break;
            case 7:
                output1();
                break;
        }
        printf("\nChọn câu lệnh: ");
        scanf("%d", &x);
    }
}


int main(){
    SetConsoleOutputCP(CP_UTF8);
    printf("1.Add head\n2.Add tail\n3.Add at\n4.Delete head\n5.Delete tail\n6.Detale at\n7.Output\n8.Exit\n");
    nhap();
    return 0;
}
