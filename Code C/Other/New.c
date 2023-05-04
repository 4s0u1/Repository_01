#include<windows.h>
#include<stdio.h>

int main(){
    FILE *f1,*f2;
    f1 = fopen("D:\\Documents\\Git\\Repository_01\\Code C\\Other\\File\\input.txt","r");
    f2 = fopen("D:\\Documents\\Git\\Repository_01\\Code C\\Other\\File\\output.txt","w");
    char string[10];
    fgets(string,100,f1);
    fprintf(f2,"%s",string);
    fclose(f1);
    fclose(f2);
    return 0;
}