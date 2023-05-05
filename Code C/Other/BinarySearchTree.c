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

void Cutoff(node position){
    int i = 0;
    if (position == position->parent->right)
        i = 1;
    if (position->right==NULL)
    {
        if (i==0)
            position->parent->left=position->left;
        else
            position->parent->right=position->left;
        free(position);
    }
    else
    {   
        node p = position->right;
        while (p->left!=NULL)
            p = p->left;
        if (position->left!=NULL)
        {
            p->left=position->left;
            p->left->parent=p;
        }
        p->parent=position->parent;  
        if (i == 0)
            p->parent->left=p;
        else
            p->parent->right=p;
    }
}

void Del(int value, node position){
    while (value != position->data)
    {
        if (value < position->data)
            position = position->left;
        else
            position = position->right;
    }   
    Cutoff(position);
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
            Del(y,Origin);
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