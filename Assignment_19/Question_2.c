#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char str[10][10],temp[10];
	printf("You have to enter 10 cities name\n");
	for(i=0;i<10;i++)
	 {
	 	fflush(stdin);
	 	printf("Enter the %d city name\n",i+1);
	 	fgets(str[i],10,stdin);
	 }
	for(i=0;i<9;i++)
	 {
	 	for(j=i+1;j<10;j++)
	 	 {
	 	 	if(strcmp(str[i],str[j])>0)
	 	 	 {
	 	 	 	strcpy(temp,str[i]);
	 	 	 	strcpy(str[i],str[j]);
	 	 	 	strcpy(str[j],temp);
			 }
		 }
	 }
	printf("Sorted names\n");
	for(i=0;i<10;i++)
	 printf("%s",str[i]);
 return 0;
}
