 #include <stdio.h>
 int main(){

 
 // 2D array by dynamic values
 int a[3][3];
 printf("enter elements:\n");
 for(int i=0; i<3; i++){
     for(int j=0;j<3; j++){
     scanf("%d",&a[i][j]);
 }
}
 printf("elements are:\n");
 for(int i=0; i<3; i++){
     for(int j=0;j<3; j++){
     printf("%d",a[i][j]);
 }
}
return 0;
 }
