#include <stdio.h>

int main(){
    int num, first, last;
    printf("Enter The Number: ");
    scanf("%d", &num);
    
    last = num % 10;  
    
    if(num < 10){
        printf("Sum is %d\n", num); 
    }
    else{
        while(num >= 10){   
            num = num / 10; 
        }
        first = num;  
        printf("Sum is: %d\n", first + last);
    }
    
    return 0;
}
