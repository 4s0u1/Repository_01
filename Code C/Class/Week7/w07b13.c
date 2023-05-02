#include <stdio.h>
#include <math.h>

int main() {
    for(int x=1; x<=100; x++)
        for (int y=1;y<=100;y++)
                if (x*5+y*3+(100-x-y)/3==100 && (100-x-y)%3==0) 
                {
                    printf("%d %d %d\n",x,y,100-x-y);
                }
}