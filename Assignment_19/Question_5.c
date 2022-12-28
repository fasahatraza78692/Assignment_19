#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j,flag,check=0;
	printf("How many E-mail addresses you want to store\n");
	scanf("%d",&n);
	char str[n][30];
	for(i=0;i<n;i++)
	 {
	 	fflush(stdin);
	 	printf("Enter %d email\n",i+1);
	 	fgets(str[i],30,stdin);
	 }
	for(i=0;i<n;i++)
	 {
	 	flag=0;
	 	 for(j=0;j<strlen(str[i]);j++)
	 	  {
	 	 	if(str[i][j]=='@')
	 	 	  {
	 	 	  	flag=1;
	 	 	  	check++;
	 	 	  	break;
			  }
	      }
	    if(!flag&&(check!=0||check==0))
	       printf("%d odd email out\n",i+1);
	 }
	 if(check==n)
	   printf("All email addresses are valid\n");
	 if(check==0)
	   printf("All emails are Odd");
  return 0;
}
