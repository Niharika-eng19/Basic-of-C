#include<stdio.h>
int main(){
    int n1;
    int n2;

    printf("enter first number:");
    scanf("%d",&n1);

    printf("enter second number:");
    scanf("%d",&n2);

    printf("logical And %d\n",(n1==n2)&&(n1>n2));
    printf("logical And %d\n",(n1==n2)&&(n1<n2));
    printf("logical And %d\n",(n1==n2)&&(n1>=n2));
    printf("logical And %d\n",(n1==n2)&&(n1<=n2));
    printf("logical And %d\n",(n1==n2)&&(n1!=n2));
    printf("logical And %d\n",(n1==n2)&&(n1>n2));



    return 0;

}
