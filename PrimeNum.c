#include<stdio.h>
int main(){
    int n=5;
    int counter=0;
    for(int i =1; i<=n; i++){
        if(n%i==0){
            counter++;
        }
    }
    if(counter==2){
        printf("%d,is a prime number",n);
    }else{
        printf("%d,is not a prime number\n",n);
    }

    return 0;
}