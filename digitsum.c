#include<stdio.h>
#include<math.h>
int digitsum(int n);
int main()
{
	int n,res=0;
	printf("		SUM OF DIGITS\n");
	printf("		^^^^^^^^^^^^^\n");
	printf("\nInput number: ");
	scanf("%d",&n);
	printf("\nSum of digits: ");
	res=digitsum(n);
	printf("%d",res);	
}
int digitsum(int n)
{
	int dig=(int)log10(n);
	if(dig==0)
		return(n);
	else
		return((n%10)+digitsum(n/10));
}
