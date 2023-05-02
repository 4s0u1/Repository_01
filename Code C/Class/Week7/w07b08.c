#include<stdio.h>
#include<string.h>
int main()
{
    int n,value;
    char choice[10];
    scanf("%d",&n);
    printf("moi nhap chan hay le:");
    scanf("%s",&choice);
    value =0;
    if (strcmp(choice, "chan")==0)
    {
        for (int i=2;i<=n;i+=2)
            value+=i;
    }
    if (strcmp(choice, "chan")!=0)
    {
        for (int i=1;i<=n;i+=2)
            value+=i;
    }
    printf("%d",value);
    return 0;
}