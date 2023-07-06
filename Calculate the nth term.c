/*There is a series, , where the next term is the sum of pervious three terms. Given the first three terms of the series, , , and  respectively, you have to output the nth term of the series using recursion.
Recursive method for calculating nth term is given below. S(1)=a,S(2)=b,S(3)=C.S(n)=S(n-1)+S(n-2)+S(n-3).....

Input Format
The first line contains a single integer,n .The next line contains 3 space-separated integers ,a,b, c.

Constraints
1<=n<=20;1<=a,b,c<=100;

Output Format
Print the nth term of the series,S(n) .*/

#include <stdio.h>

int find_nth_term(int n, int a, int b, int c) {
    int i;
    int sum[n];
    sum[0]=a;sum[1]=b;sum[2]=c;
    for (i=3;i<n;i++)
    {
        sum[i]=sum[i-1]+sum[i-2]+sum[i-3];
    }
    return sum[n-1];
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
