/*The voice message is stored in the system as a sequence of numbers. Write a C program to [10]
compute the sum of squares of the 1-D signal for the elements in the even positions of the voice
message and the sum of the cubes of 1-D signal for the elements at the odd position of the
message. Develop the program such that the above calculations are performed in different
modules, The result of the module even_square_sun() is added to all the elements in the odd
position of the array as a part of encryption. Similarly, the result of odd _cube_sum() is added to
{he elements in the even position of the array for the encryption process to be strong.*/

#include <stdio.h>

int even_square_sum(int n,int *message)
{
    int i,sum1=0,mul;
    for (i=0;i<n;i++)
    {
        if (i/2==0)
        {
            mul=message[i]*message[i];
            sum1+=mul;
            return sum1;
        }
    }
}

int odd_cube_sum(int n,int *message)
{
    int i,sum2=0,mul;
    for (i=0;i<n;i++)
    {
        if (i/2!=0)
        {
            mul=message[i]*message[i]*message[i];
            return sum2+=mul;
        }
    }
}

int main()
{
    int n,i,num;
    scanf("%d",&n);
    int message[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&num);
        message[i]=num;
    }
    for (i=0;i<n;i++)
    {
        if (i/2!=0)
        {
            message[i]+=even_square_sum(n,message);
        }
    }
    for (i=0;i<n;i++)
    {
        if (i/2==0)
        {
            message[i]+=odd_cube_sum(n,message);
        }
    }
    
    for (i=0;i<n;i++)
    {
       printf("%d ", message[i]);
    }
    return 0;
}
