#include<stdio.h>
void bubble(int[] , int);
int main()
{
	int i,n;
	printf("value of n :");
	scanf("%d",&n);
	int a[n];
	printf("enter %d elements :",n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d ",&a[i]);
	}
	

	bubble(a,n);
	for(i=0;i<=n-1;i++)
	printf("%d ",a[i]);
	return 0;
}
void bubble(int a[],int n)
{
	int round,i,temp;
	for(round=1;round<=n-1;round++)
	{
		for(i=0;i<=n-1-round;i++)
		
			{
				if(a[i]>a[i+1])
				{
					temp=a[i];
					a[i]=a[i+1];
					a[i+1]=temp;
				}
			}
	}
		
}
