#include <stdio.h>

int main(){
	
	char symbol;
	int num1, num2, count;
	printf("Enter Number 1: ");
	scanf("%d", &num1);
	printf("Enter The Symbol (*) or (/): ");
	scanf(" %c", &symbol);
	printf("Enter Number 2: ");
	scanf("%d", &num2);
	
	if(symbol == '*'){
		
		int sum = 0;
		int i;
		
		for(i=0;i<num2;i++){
			
			sum = sum + num1;
			
		
		} 
		printf("The answer is: %d", sum);
	}
	else{
		
		count = 0;

		if (num2 == 0)
		{
			printf("Runtime Error");
		}
		else
		{
			while (num1 >= num2)
			{
				num1 = num1 - num2;
				count = count + 1;
			}
			printf("The answer of Quotient is: %d\n", count);
			
		}

	} 
	
			
	
	
	return 0;
}