#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

struct LinkedList{ 
    int data;
    int height;
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
    temp->height = 0;
    temp->parent = NULL;
    temp->left = NULL;
    temp->right = NULL;                  
    return temp;                        
}             

void Hight (node position){
    while (position->parent != NULL && position->parent->height < position->height+1)
    {
        position->parent->height = position->height+1;
        position = position->parent;
    }
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
            printf("Left ");
            if (position->left == NULL)
            {
                node p = CreateNode(value);
                position -> left = p;
                p -> parent = position;
                Hight(p);
                printf("%d\n",value);
                add++;
            }
            else 
                position = position->left;
        }
        else
        {
            printf("Right ");
            if (position->right == NULL)
            {
                node p = CreateNode(value);
                position -> right = p;
                p -> parent = position;
                Hight(p);
                printf("%d \n",value);
                add++;
            }
            else
                position = position->right;
        }
    }    
}


void FindLeaf(node position){
    if(position->left==NULL&&position->right==NULL)
    {
        Hight(position);
        printf("%d",position->data);
    }
    if(position->left!=NULL)
        FindLeaf(position->left);
    if(position->right!=NULL)
        FindLeaf(position->right);
}

void resetH(node position)
{
    position->height = 0;
    if (position-> left != NULL)
        resetH(position->left);
    if (position-> right != NULL)
        resetH(position->right);
}

void DelNode(node position){
    node p = position->left;
    if (position->right != NULL)
    {
        p = position->right;
        while (p->left!=NULL)
            p = p->left;
        node q = p->right;
        if (p->parent!=position)
        {
            p->parent->left=q;
            p->right=p->parent;
        }
        p->left=position->left;
        if (position->left!=NULL)
            position->left->parent=p;
    }
    if (position != Origin){
        int i=0;
        if (position->parent->right==position)
            i++;
        if (i==0)
            position->parent->left=p;
        else
            position->parent->right=p;
        p->parent=position->parent;
    }
    else
        Origin=p;
    free(position);
    resetH(Origin);
    FindLeaf(Origin);
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
    printf(" %d ",position->height);
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
    printf("2.FindNode\n");
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