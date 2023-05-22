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

void high (node position){
    while (position->parent != NULL && position->parent->height < position->height+1)
    {
        position->parent->height = position->height+1;
        position = position->parent;
    }
}

void FindLeaf(node position){
    if(position->left==NULL&&position->right==NULL)
        high(position); 
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

void rotateLEFT(node position){
    node newP = position -> left;
    int x = -1, y = -1;
    if (newP -> left != NULL)
        x = newP -> left -> height;
    if (newP -> right != NULL)
        y = newP -> right -> height;
    if (y > x)
    {
        newP = newP -> right;
        newP -> parent -> right = newP ->left;
        if (newP -> left != NULL)
            newP -> left -> parent = newP -> parent;
        newP -> parent -> parent = newP;
        newP -> left = newP -> parent; 
    }
    newP -> parent = position -> parent; 
    if (position == Origin)
        Origin = newP;
    else    
        if (position == position->parent->left)
            position->parent->left = newP;
        else
            position->parent->right = newP;
    position -> parent = newP;
    position -> left = newP -> right; 
    if (newP -> right!=NULL)
        newP -> right -> parent = position;
    newP -> right = position;
    resetH(Origin);
    FindLeaf(Origin);
}

void rotateRIGHT(node position){
    node newP = position -> right;
    int x = -1, y = -1;
    if (newP -> left != NULL)
        x = newP -> left -> height;
    if (newP -> right != NULL)
        y = newP -> right -> height;
    if (x > y)
    {
        newP = newP -> left;
        newP -> parent -> left = newP ->right;
        if (newP -> right != NULL)
            newP -> right -> parent = newP -> parent;
        newP -> parent -> parent = newP;
        newP -> right = newP -> parent; 
    }
    newP -> parent = position -> parent; 
    if (position == Origin)
        Origin = newP;
    else    
        if (position == position->parent->left)
            position->parent->left = newP;
        else
            position->parent->right = newP;
    position -> parent = newP;
    position -> right = newP -> left; 
    if (newP -> left!=NULL)
        newP -> left -> parent = position;
    newP -> left = position;
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
    if (delta > 1)
        rotateLEFT(position);
    if (delta < -1)
        rotateRIGHT(position);  
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
                high(p);
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
                high(p);
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
    up(position->parent);
    free(position);
    if (Origin != NULL)
    {
        resetH(Origin);
        FindLeaf(Origin);
    }
}

node FindNode(int value, node position){
    while (position != NULL)
    {
        if (value == position->data)
            break;
        else
            if (value < position->data)
                position = position->left;
            else
                position = position->right;
    }   
    return position;
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
    node p;
    do{ 
        printf("\nChọn câu lệnh: ");
        scanf("%d",&x);
        switch (x){
        case 1:
            printf("Nhập giá trị: ");
            scanf("%d",&y);
            p = FindNode(y,Origin);
            if (p == NULL)
                Add(y,Origin);
            else 
                printf("%d",p->data);
            break;
        case 2:
            printf("Nhập giá trị: ");
            scanf("%d",&y);
            p = FindNode(y,Origin);
            DelNode(p);
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