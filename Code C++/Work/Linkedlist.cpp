#include <iostream>
using namespace std;

struct LinkedList{
    int data;
    struct LinkedList *next;
};

typedef struct LinkedList *node;

node head=NULL;

node CreateNode(int value){
    node temp;
    temp = new LinkedList;
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
    if(head == NULL){
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
        cout <<"EMPTY\n";
    }
}

void DeleteTail(){
    node temp=head;
    if (head == NULL){
        cout <<"EMPTY\n";
    }
    else{
        if (head -> next ==NULL){
            head = NULL;
        }
        else{
            while (temp->next->next!=NULL){
                temp=temp->next;
            }
            temp->next=NULL;
        }
    }
}

void Traverser(){
    if (head==NULL){
        cout <<"EMPTY\n";
    }
    else{
        for(node p = head; p != NULL; p = p->next){
            cout << p->data <<" ";
        }
    }
}

void nhapxuat(){
    int x,y,d; 
    
    cout << "Chon cau lenh: ";
    cin >> x;
    switch (x)
    {
    case 1:
        cout << "Nhap gia tri: ";
        cin >> y;
        AddHead(y);
        break;
    case 2:
        cout << "Nhap gia tri: ";
        cin >> y;
        AddTail(y);
        break;
    case 3:
        cout << "Nhap vi tri: ";
        cin >> d;
        printf("Nhap gia tri: ");
        cin >> y;
        AddAt(d,y);
        break;
    case 4:
        DeleteHead();
        break;
    case 5:
        DeleteTail();
        break;
    }
    printf ("Ban co muon tiep tuc? (y/n): ");
    char c;
    cin >> c;
    if (c == 'y')
        nhapxuat();
}

int main(){
    printf("AddHead = 1; AddTail = 2; AddAt = 3; DeleteHead = 4; DeleteTail = 5\n");
    nhapxuat();
    printf("Cac phan tu co trong linkedlist luc nay la: \n");
    Traverser();
    return 0;
}