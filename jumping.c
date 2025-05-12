
//special property which is used to control the flow of the program or 
//tranfer one part of program into another part
// their are 4 types of jumping statement : 
//return : it is used only in the func 
//break and continue  :it is used only in loops
//goto: it is used anywhere 

#include<stdio.h>
void func(){
    printf("this is a test function. before return keyword\n");
    return;
    printf("this is a test function. after return keyword\n");
    
}
void func1(){
    printf("this is a continue example\n");
    for(int i=0; i<10; i++){
        if(i==6){
            continue;
            //stop loop when i=6
        }
        printf("reading page: %d\n",i);
    }
    

 printf("this is a break example\n");
 for(int i=1; i<10; i++){
    if(i==6){
        break;
        // stop loop when i=6
    }
    printf("reading page: %d\n",i);
}
}


int main(){

    int a=5000;
    int wa;
    func:
    printf("welcome to atm machine!");
    printf("your current balance is %d\n");
    scanf("%d",&wa);

    if(wa<0){
        printf("invalid amt pls enter valid amount\n");
        goto func;
    }
    if(wa>a){
        printf("insufficient balance\n");
    }
    else{
        a=a-wa;
        printf("amt withdraw successfully!\n");
        printf("your current balanceis %d\n",a);
    }
    char ch;
    printf("do you want to continue(y/n)\n");
    scanf("%c",&ch);
    if(ch=='y'){
        goto func;
    }
    else{
        printf("thank you for using atm machine\n");
    }
    func();
    func1();
    return 0;
}

