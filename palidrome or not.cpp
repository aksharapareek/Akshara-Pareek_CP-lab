#include <stdio.h>
int main(){
	int n,reversedN, remainder , originalN;
	printf("enter an integer: ");
	scanf("%d",&n);
	originalN=n;
	
	//reversed integer is stored in reversedN
	while(n!=0){
		remainder=n%10;
		reversedN=reversedN*10+remainder;
		n/=10;
		
	}
	//palidrome if originalN and reversedN are equal
	if(originalN== reversedN)
	
	printf("%d is a palidrome",originalN);
	else
	printf("%d is not a palidrome",originalN);

	return 0;
	
}
