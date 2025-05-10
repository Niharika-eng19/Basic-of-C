#include<stdio.h>
int main(){
    printf( "Enter your marks out of 100:\n");
    int science;
    printf("Enter Science score:");
    scanf("%d",&science);

    int maths;
    printf("Enter Maths score:");
    scanf("%d",&maths);

    int english;
    printf("Enter English score:");
    scanf("%d",&english);

    int it;
    printf("Enter Information Technology score:");
    scanf("%d",&it);

    int cs;
    printf("Enter Computer Science score:");
    scanf("%d",&cs);

    int avg = (science + maths + english + it + cs)/5;

    if(avg< 50){
        printf("Fail");
    } 
    else if(avg<=60 && avg>=50){
        printf("grade C");
    }
    else if(avg<=70 && avg>60){
        printf(" grade B");
    }
    else if(avg>70 && avg<80){
        printf("grade A");
    }
    else if(avg>=80){
        printf("Great!!\n");
    }

    printf("Total percentage :%d %%",avg);
    return 0;
}