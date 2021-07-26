#include <stdio.h>
int main (){
	int i,j;
	char input,alphabet='A';
	printf("enter an upper case character you want to print in the last row: ");
	scanf("%f",&input);
	
	for(i=1; i<=(input-'A'+1);i++){
		for(j=i; j<=i; j++){
			printf("%c",alphabet);
		}
		alphabet++;
		printf("\n");
	}
	return 0;
}
