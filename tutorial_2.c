
#include <stdio.h>

int add(int a , int b);
int subtract(int a , int b);
int multiply(int a , int b );
int divide(int a , int b);
int main() {
    
    // Write C code here
    int a = 10 ; 
    int b = 5 ;
    
    int c = add(a,b);
    printf("%d\n",c);
    
    int d = subtract(a,b) ;
    printf("%d\n",d);
    
    int e = multiply(a,b) ;
    printf("%d\n",e);
    
    int f = divide(a,b);
    printf("%d\n",f);

    return 0;
}

int add(int a , int b){
    return a + b ;
}
int subtract(int a , int b){
    return a - b;
}
int multiply(int a , int b){
    return a * b;
}
int divide(int a , int b){
    return a / b ;
}