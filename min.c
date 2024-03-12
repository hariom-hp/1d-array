#include<stdio.h>
int main(){
    int arr[4]={-10,-3,-300,-18};
    int min=arr[0];
    for (int i = 0; i <=3; i++)
    {
        if (min>arr[i])
        {
            min=arr[i];
        }
        
    }
    printf("%d",min);
    return 0;
}