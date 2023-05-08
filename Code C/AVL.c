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

void hight (node position){
    while (position->parent != NULL && position->parent->height < position->height+1)
    {
        position->parent->height = position->height+1;
        position = position->parent;
    }
}

void FindLeaf(node position){
    if(position->left==NULL&&position->right==NULL)
    {
        printf("%d \n", position ->data);
        hight(position); 
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

void rotateRIGHT(node position){
    node newP = position -> right;
    if (position == Origin)
    {
        Origin = newP;
        newP -> parent = NULL;
    }
    else
    {   
        newP->parent = position->parent;
        int i = 0;
        if (position = position->parent->right) 
            i++;
        if (i == 0)
            position->parent->left=newP;
        else
            position->parent->right=newP;
        position->parent = newP;
    }
    position->right = newP->left;
    newP->left = position;
    resetH(Origin);
    FindLeaf(Origin);
}

void rotateLEFT(node position){
    node newP = position -> left;
    if (position == Origin)
    {
        Origin = newP;
        newP -> parent = NULL;
    }
    else
    {   
        newP->parent = position->parent;
        int i = 0;
        if (position = position->parent->right) 
            i++;
        if (i == 0)
            position->parent->left=newP;
        else
            position->parent->right=newP;
        position->parent = newP;
    }
    position->left = newP->right;
    newP->right = position;
    resetH(Origin);
    FindLeaf(Origin);
}

void scale (node position){
    int x = -1, y = -1;
    if (position -> left != NULL)
        x = position -> left -> height;
    if (position -> right != NULL)
        y = position -> right -> height;
    int delta = x - y;
    if (delta < -1)
        rotateRIGHT(position);
    if (delta > 1)
        rotateLEFT(position);
}

void up (node position){
    while (position != NULL)
    {
        scale(position);
        position = position->parent;
    }
}

void Add(int value, node position){
    int add = 0;
    if (Origin == NULL)
    {
        Origin = CreateNode(value);
        printf("%d\n",Origin->data);
        up(Origin);
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
                hight(p);
                up(p);
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
                hight(p);
                up(p);
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
    if (Origin != NULL)
    {
        resetH(Origin);
        FindLeaf(Origin);
    }
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