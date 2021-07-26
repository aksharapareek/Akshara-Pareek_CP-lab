#include <stdio.h>
int main()
{
	int n,i,j,k;
	printf("\npls enter a number for pattern \n");
	scanf("%d",&n);
	
	//outer loop
	for(i=1;i<n;i++)
	{
		//inner loop j variable for handeling the column no. of pattern
		//k variable is place the data in the pattern
		
		for(j=n,k=1;j>=1;j--,k++)
		{
			printf("* ",k);
			
		}
		printf("\n");
		
	}
}
