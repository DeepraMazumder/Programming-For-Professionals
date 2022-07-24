 /*
Write a program to input a number and check that number is a krishnamurty number or not?*/
#include<stdio.h>
int main()
{
	int n,temp,fact,sum=0,i,rem;
	printf("Enter a number: ");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		rem=n%10;
		fact=1;
		for(i=rem;i>=1;i--)
  		{	
   			fact=fact*i;
  		}
  		sum=sum+fact;
  		n=n/10;
 	}
 	if(sum==temp)
  		printf("%d is a krishnamurty number\n",temp);
 	else
  		printf("%d is not a krishnamurty number\n",temp);
 	return 0;
}