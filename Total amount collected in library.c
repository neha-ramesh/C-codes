/*In a library, m people are in waiting hall, each of whom should read n books sequentially(n is common for all). Reading each book requires one unit of time. Unfortunately, reading service is provided sequentially.
There is only one reading table. So when someone reads, others have to wait in the waiting room. At first everybody chooses n books they want to read. Selection of n books by a single person takes x amount of time. People can choose books simultaneously. Then they enter the waiting room. After reading n books the person leaves the library immediately. As nothing is free, the cost of reading is also not free. If a person stays in the library t units of time, then the cost of reading is [(t-n)/m] units of money.
So, the person pays for time x he needs to choose books and the time (i-1)+n he needs to wait for all the persons before him to complete reading. Note for every odd person will get 50% discount on their payment. Write a C Program to find the total amount collected in library. */

#include <stdio.h>

int main()
{
    float x,m,n,i,j,t,t1,cost,total;
    printf("x");
    scanf("%f",&x);
    printf("\nm");
    scanf("%f",&m);
    printf("\nn");
    scanf("%f",&n);
    float total1=0;
    float total2=0;
    
    for (i=0;i<m;i++)
    {
        t1=(i-1)*n;
    }
    
    t=x+t1; 
    cost=(t-n)/m; 
    for (i=0;i<m;i++)
    {
        if (i/2!=0)
        {
            total1=0.5*cost;
        }
        else
        {
            total2=cost;
        }
        total=total1+total2;
    }
    printf("Total amount collected: %f",total);
    return 0;
}
