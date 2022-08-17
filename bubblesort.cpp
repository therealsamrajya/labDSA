#include<stdio.h>
void bubblesort(int[],int);
int main()

{
int array[100],n,i;
printf("enter number of elements\n");
scanf("%d",&n);
printf("enter %d integers as elements for array\n",n);
for(i=0;i<n;i++)
scanf("%d",&array[i]);
bubblesort(array,i);
printf("sorted list in ascending order is:\n");
for(i=0;i<n;i++)
printf("%d\n",array[i]);
return 0;
}
void bubblesort(int list[],int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(list[j]>list[j+1])
			{
				t=list[j];
				list[j]=list[j+1];
				list[j+1]=t;
			}
		}
	}
}
