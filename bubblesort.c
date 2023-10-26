#include<stdio.h>
void accept(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}

void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}

void bubblesort(int a[],int n)
{
	int pass,i,temp;
	for(pass=1;pass<n;pass++)
	{
		for(i=0;i<n-pass;i++)
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

int main()
{
  int a[100],n;
  printf("enter limit:");
  scanf("%d",&n);
  accept(a,n);
  bubblesort(a,n);
  display(a,n);
}
