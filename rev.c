#include<stdio.h>
int main(){
    int arry[4];
    for (int i = 0; i <=4; i++)
    {
        printf("enter the element %d\n",i+1);
        scanf("%d",&arry[i]);
    }
    for (int i = 4; i >=0; i--)
    {
        printf("%d",arry[i]);
    }
    return  0;
}