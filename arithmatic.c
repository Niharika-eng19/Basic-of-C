//program to perform arithmatic operations by user:

// #include <stdio.h>
// int main(){
//     int n1;
//     int n2;

//     printf("enter first number:");
//     scanf("%d",&n1);

//     printf("enter the second number:");
//     scanf("%d",&n2);

//     printf("first number:%d\n",n1);
//     printf("second number:%d\n",n2);


//printf("sun of %d and %d is : %d",n1,n2,n1+n2);
   
//     printf("subtraction:%d\n",n1-n2);

//     printf("multiplication:%d\n",n1*n2);

//     printf("division:%d\n",n1%n2);
//     return 0;
// }

#include<stdio.h>
int main(){
   
   int option;
  
    int n;
    printf("1: addition\n");
    printf("2:Subtraction\n");
    printf("3:Multiplication\n");
    printf("4:Division\n");
    printf("5:Modulus\n");

    printf("enter the option:");
    scanf("%d",&n);

    switch(n){
        case 1:
        printf("Addition:%d",3+3);
            //,n1+n2);
        break;

        case 2:
        printf("Subtraction:%d",3-3);
            //,n1-n2);
        break;

        case 3:
        printf("Multiplication:%d",3*3);
           // ,n1*n2);
        break;

        case 4:
        printf("Division:%d",3/3);
            //,n1/n2);
        break;

        case 5:
        printf("modulus:%d",3%3);
            //,n1%n2);
        break;

        default:
        printf("invalid");
        break;

    }
    
    return 0;

}

