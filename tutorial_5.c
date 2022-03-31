// Online C compiler to run C program online
#include <stdio.h>

int main() {

    for (int i = 0 ; i <= 10 ; i++){
        printf("%d\n",i);
    }    
    for (int i = 0 ; i <= 10 ;i++){
        
        printf("%d\n",i * i);
    }
    for(int i = 0 ; i <= 10 ; i++){
        printf("%d\n", i + i);
    }
    for (int i = 0 ; i <= 10 ; i++){
        printf("%d\n", i - i);
    }
    int sum = 0 ;
    for (int i = 0 ; i <= 10 ; i++){
        sum = sum + i ;
        printf("%d\n",sum);
    }
    int multiply = 1 ;
    for (int i = 1 ; i <= 10 ; i++){
        multiply = multiply * i;
        printf("%d\n",multiply);
    }

    return 0;
}