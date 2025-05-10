//real life example is increasing likes on instagram 
#include<stdio.h>
    int main(){

    int n1;
    int n2;
    printf("enter first number:");
    scanf("%d",&n1);

    printf("enter second number:");
    scanf("%d",&n2);

    printf("add and assign %d\n",n1+=n2);
    printf("subtract and assign %d\n",n1-=n2);
    printf("multiply and assign %d\n",n1*=n2);
    printf("divide and assign %d\n",n1/=n2);

    return 0;
}

