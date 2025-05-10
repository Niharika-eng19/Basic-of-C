#include<stdio.h>
int main(){

//1D array by dynamic values
    int a[5];
    printf("enter elements of the array");
    for(int i=0; i<5; i++){
        scanf("%d", &a[i]);
    }

    printf("elements are:\n");
    for(int i=0; i<5; i++){
        printf("%d\n",a[i]);
    }
    
    return 0;
}
