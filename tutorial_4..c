
// Online C compiler to run C program online
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
    
    
    int d = subtract(a,b) ;
    
    
    int e = multiply(a,b) ;
    
    int f = divide(a,b);
    
    if (c < d){
        printf("c is less than d");
        
    }
    if (c > d){
        printf("c is greater than d");
    }
    if(e < f){
        printf("e is less than f");
    }
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