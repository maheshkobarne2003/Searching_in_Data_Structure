#include<stdio.h>
void accept(int a[],int n)
{
    int i;
    printf("enter numbers:");
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

void selectionsort(int a[],int n)
{
  int i,j,index,temp,min;
  for(i=0;i<n;i++)
  {
     min=a[i];
     index=i;
     
     for(j=i+1;j<n;j++)
     {
        if(a[j]<min)
        {
            min=a[j];
            index=j;
        }
     }
         temp=a[i];
         a[i]=a[index];
         a[index]=temp;
  }
}

int main()
{
    int a[100],n;
    printf("enter limit");
    scanf("%d",&n);
    accept(a,n);
    selectionsort(a,n);
    display(a,n);
}
