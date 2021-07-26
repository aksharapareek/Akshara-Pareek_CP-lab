#include <stdio.h>
int main(){
	int fact=1,i,number;
	printf("enter a number: ");
	scanf("%d",&number);
	
	for(i=1; i<=number; i++){
		fact = fact*i;
		
	}
	printf("Factotial of %d is: %d",number,fact);
	return 0;
}
