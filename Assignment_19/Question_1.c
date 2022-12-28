#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j,count;
	printf("How many strings you want to store\n");
	scanf("%d",&n);
	char str[n][20];
	for(i=0;i<n;i++)
	 {
	 	fflush(stdin);
	 	printf("Enter the %d string\n",i+1);
	 	fgets(str[i],20,stdin);
	 }
	 for(i=0;i<n;i++)
	  {
	  	count=0;
	  	for(j=0;str[i][j]!='\0';j++)
	  	 {
	  	 	if(str[i][j]=='a'||str[i][j]=='A'||str[i][j]=='e'||str[i][j]=='E'||str[i][j]=='i'||str[i][j]=='I'||str[i][j]=='o'||str[i][j]=='O'||str[i][j]=='u'||str[i][j]=='U')
	  	 	 count++;
	     }
		 printf("Vowels in %d row = %d\n",i+1,count);
	  }
	return 0;
}
