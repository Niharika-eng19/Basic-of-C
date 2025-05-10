#include <stdio.h>

int pin(int num){
    //printf("Enter the pin number:");
   // scanf("%d",&num);

    if(num==1000){
        printf("access granted!");
    }
    else{
        printf("access denied");
    }
    return 0;
}
int main(){
    pin(1000);
   
    return 0;
}