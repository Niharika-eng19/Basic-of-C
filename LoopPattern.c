#include<stdio.h>
int main(){

    //-------------- RANDOM STAR PATTERN ------------

    // for(int i=0; i<5; i++){
    //     for(int j=i; j<5; j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // for(int i=1; i<=5; i++){
    //     for(int j=1; j<=i; j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // //-----------------------------

    // for(int i=4; i>=0; i--){
    //     for(int j=i;j>=0; j--){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // //-----------------------------
   
    // for(int i=1; i<=5; i++){
    //     for(int j=1; j<=i; j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // for(int i=0; i<5; i++){
    //     for(int j=i; j<5; j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // //----------------------------
    // for(int i=1; i<=5; i++){
    //     for(int j=1; j<=i; j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // for(int i=0; i<5; i++){
    //     for(int j=i; j<5; j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    //--------------------------       ----------------------------------------

    // for(int i=0; i<5; i++){
    //     for(int j=i; j<5; j++){
    //         printf("");
    //     }
    //     printf("\n");
    // }
    
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    for(int i=0; i<=num; i++){
        printf("%d ",i*i);
    }
    return 0;

}