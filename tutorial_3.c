
// Online C compiler to run C program online
#include <stdio.h>

int add(int a , int b);
int subtract(int a , int b);
int multiply(int a , int b );
int divide(int a , int b);
int main() {
    
    // Write C code here
    
    FILE *filePointer ; 
    
    filePointer = fopen("calculation.txt","w");
    if (filePointer == NULL){
        printf("no file exists!!");
        exit(1);
    }
    
    int a = 10 ; 
    int b = 5 ;
    
    int c = add(a,b);
    
    fprintf(filePointer,"%d",c);
    
    int d = subtract(a,b) ;
    
    fprintf(filePointer,"%d",d);
    
    int e = multiply(a,b) ;
    fprintf(filePointer,"%d",e);
    
    int f = divide(a,b);
    fprintf(filePointer,"%d",f);

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