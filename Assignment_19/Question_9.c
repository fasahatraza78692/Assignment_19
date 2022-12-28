#include<stdio.h>
#include<string.h>
int main()
{
	char nm[]={"fasahatraza09ez"};
	char us_nm[20];
	printf("Enter the username\n");
	scanf("%s",us_nm);
	if(!strcmp(us_nm,nm))
	  {
	  	 int i,n,s=1;
	     printf("Enter a number to calculate factorial\n");
	     scanf("%d",&n);
	   for(i=n;i>1;i--)
	      s=s*i;
	    printf("Factorial of %d is %d",n,s);
	  }
	else
	  printf("error\n");
	return 0;
}
