#include <stdio.h>
int main (){
	int age;
	printf("enter your age: \n");
	scanf("%d",&age);
	
	switch(age){
		case 3:
			printf("The age is 3");
			break;
			case 13:
				printf("The age is 13");
				break;
				case 23:
					printf("The age is 23");
					
					default:
					printf("Age is not 3,13, or 23");
					
					}
}
