/*
    Program for return the number of 1's in the binary equivalent of a given number
    @author: Vaishnav Krishna
    @date: 2022-02-16
*/
#include<stdio.h>

void main()
{
    int n,onum,rem=0,count=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    onum = n;
    while(n>0)
    {
        rem = n % 2;
        if(rem==1)
        {
            count++;
        }
        n = n / 2;
    }
    printf("Number of 1's in binary representation of %d is %d", onum,count);
}