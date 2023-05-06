#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

struct LinkedList{ 
    int data;   
    struct LinkedList *parent;
    struct LinkedList *left;
    struct LinkedList *right;  
};                           

typedef struct LinkedList *node; 

node Origin = NULL;

node CreateNode(int value){
    node temp;
    temp = (node)malloc(4*sizeof(node)); 
    temp->data = value;   
    temp->parent = NULL;
    temp->left = NULL;
    temp->right = NULL;                  
    return temp;                        
}                        

void Add(int value, node position){
    int add = 0;
    if (Origin == NULL)
    {
        Origin = CreateNode(value);
        printf("%d\n",Origin->data);
    }
    else
    while (add == 0)
    {
        if (value < position->data)
        {
            printf("Left");
            if (position->left == NULL)
            {
                node p = CreateNode(value);
                position -> left = p;
                p -> parent = position;
                printf("%d\n",value);
                add++;
            }
            else 
                position = position->left;
        }
        else
        {
            printf("Right");
            if (position->right == NULL)
            {
                node p = CreateNode(value);
                position -> right = p;
                p -> parent = position;
                printf("%d\n",value);
                add++;
            }
            else
                position = position->right;
        }
    }    
}

void DelNode(node position){
    node p = position->left;
    if (position->right != NULL)
    {
        p = position->right;
        while (p->left!=NULL)
            p = p->left;
        if (p->parent!=position)
        {
            p->parent->left=p->right;
            p->right->parent=p->parent;
            p->right=position->right;
            p->right->parent=p;
        }
        
        p->left=position->left;
        if (p->left!=NULL)
            p->left->parent=p;
    }
    if (position != Origin){
        int i=0;
        if (position->parent->right==position)
            i++;
        if (i==0)
            position->parent->left=p;
        else
            position->parent->right=p;
        if (p!=NULL)
            p->parent=position->parent;
    }
    else
    {
        if (p != NULL)
        {
            Origin = p;
            p->parent=NULL;
        }
        else
            Origin = NULL;
    }
    free(position);
}

void FindNode(int value, node position){
    while (value != position->data)
    {
        if (value < position->data)
            position = position->left;
        else
            position = position->right;
    }   
    DelNode(position);
}

void PrintTree(node position){
    if (position == NULL){
            return;
    }
    printf(" %d ",position->data);
    if (position->left != position->right){
        if (position -> left != NULL)
        {
            printf("(");
            PrintTree(position->left);
        }
        else
            printf("|");
        if (position -> right != NULL)
        {
            PrintTree(position->right);
            printf(")");
        }
        else 
            printf("|");
    }
}

void Menu(){
    int x,y; 
    printf("Bảng câu lệnh:\n");
    printf("1.Add\n");
    printf("2.Del\n");
    printf("3.Print\n");
    printf("Else:Exit\n");
    do{ 
        printf("\nChọn câu lệnh: ");
        scanf("%d",&x);
        switch (x){
        case 1:
            printf("Nhập giá trị: ");
            scanf("%d",&y);
            Add(y,Origin);
            break;
        case 2:
            printf("Nhập giá trị: ");
            scanf("%d",&y);
            FindNode(y,Origin);
            break;
        case 3:
            PrintTree(Origin);
            break;
        }
    } while ((x > 0) && (x < 4) );
}

int main(){
    SetConsoleOutputCP(CP_UTF8);
    Menu();
    return 0;
}