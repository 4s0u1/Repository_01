#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

struct LinkedList{ 
    int data;   
    struct LinkedList *left;
    struct LinkedList *right;  
};                           

typedef struct LinkedList *node; 

node Origin = NULL;

node CreateNode(int value){
    node temp;
    temp = (node)malloc(3*sizeof(node)); 
    temp->data = value;                
    temp->left = NULL;
    temp->right = NULL;                  
    return temp;                        
}                        
void replace(int x,int y){
    int z = x;
        x = y;
        y = z; 
}

void Add(int value, node position){
    if (Origin == NULL){
        Origin = CreateNode(value);
        printf("%d\n",Origin->data);
    }
    else{
        if (value < (position -> data)){
            if (position -> left  == NULL)
                position -> left = CreateNode(value);
            else 
                Add(value,position->left);
        }
        else{
            if (position -> right == NULL)
                position -> right = CreateNode(value); 
            else
                Add(value,position->right);
        }
    }
}

int main(){
    SetConsoleOutputCP(CP_UTF8);
    Add(10,Origin);
    Add(17,Origin);
    Add(8,Origin);
    Add(20,Origin);
    Add(15,Origin);
    return 0;
}