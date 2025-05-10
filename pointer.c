// defines on which memory location the variable or the array is stored
# include<stdio.h>
int main(){
    int n = 10;
    int *p = &n;
    printf("value of n %d\n",n);
    printf("address of var n %d\n",&n);
    printf("address of var n %d\n",p);
    printf("address of pointer p which is a different addr from n %d\n",&p);
    printf("pointer value of var n %d\n ",*p);

    int a = 20;
    int *pa = &a;
    printf("value of a %d\n",a);
    printf("address of var a %d\n",&a);
    printf("address of var a %d\n",pa);
    printf("address of pointer p which is a different addr from a %d\n",&pa);
    printf("pointer value of var a %d\n ",*pa);

    int b = 30;
    int *pb =&b;
    printf("value of b %d\n",b);
    printf("address of var b %d\n",&b);
    printf("address of var b %d\n",pb);
    printf("address of pointer p which is a different addr from b %d\n",&pb);
    printf("pointer value of var b %d\n ",*pb); 

    int c = 40;
    int *pc = &c;
    printf("value of c %d\n",c);
    printf("address of var c %d\n",&c);
    printf("address of var c %d\n",pc);
    printf("address of pointer p which is a different addr from c %d\n",&pc);
    printf("pointer value of var c %d\n ",*pc);

    int d = 50;
    int *pd = &d;
    printf("value of d %d\n",d);
    printf("address of var d %d\n",&d);
    printf("address of var d %d\n",pd);
    printf("address of pointer p which is a different addr from d %d\n",&pd);
    printf("pointer value of var d %d\n ",*pd);
    
    return 0;
}