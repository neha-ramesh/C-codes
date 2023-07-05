/*Imagine you are given a set of N different coloured objects, represented by an array of integers.
Each element in the array represents a unique colour. 
Write a C program that accepts this array as input and then forms the pair of colours using the combination of any two elements of the array.
Determine the count of pairs of colours in the array where the colours in the pair are sorted in descending order. 
It should also print the pairs as space separated values on each line. 
For example, let's say you have an array {2, 8, 7, 4). In this case, the program should find the pairs of colours in descending order.
The pairs in this array are (8,2), (8,7), (8,4), (7,2), (7,4), and (4,2). 
So the count value of the pairs should be 6, indicating that there are six pairs of colours where the colours are sorted in descending order.*/

#include <stdio.h>

int main()
{
    int n,i,num,j,temp;
    scanf("%d",&n);
    int color[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&num);
        color[i]=num;
    }
    
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            
            if(color[i]<color[j])
            {
                temp=color[i];
                color[i]=color[j];
                color[j]=temp;
            } 
        }
    }
    
    int count=0;
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            printf("(%d,%d)",color[i],color[j]);
            count++;
        }
        printf("\n");
    }
    printf("Count: %d",count);
    return 0;
}
