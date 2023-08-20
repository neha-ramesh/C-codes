#include <stdio.h>

int des(int *n,int *arr)
{
    int i,j,temp;
    for (i=0;i<*n;i++)
    {
        for (j=i+1;j<*n;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

 int main()
 {
     int n,i,num;
     scanf("%d",&n);
     int arr[n];
     for (i=0;i<n;i++)
     {
         scanf("%d",&num);
         arr[i]=num;
     }
     des(&n,arr);
     
     for (i=0;i<n;i++)
     {
         printf("%d ",arr[i]);
     }
     return 0;
 }

