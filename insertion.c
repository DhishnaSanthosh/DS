#include <stdio.h>
int main()
{
	int array [50],position,c,n,value;
	printf("enter the elements in array \n");
	scanf("%d",&n);
	printf("enter %d elements \n",n);
	for(c=0;c<n;c++) 
	scanf("%d",&array[c]);
	printf("enter the location where you  want to insert element \n");
	scanf("%d",&position);
	printf("enter the value");
	scanf("%d",&value);
	for(c=n-1;c>=position;c--)
	array[c+1]=array[c];
	array[position]=value;
	printf("resultant array is \n");
	for(c=0;c<=n;c++)
	printf("%d\n",array[c]);
	return 0;
}
