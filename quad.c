/*
    Program for evaluate the quadratic equation by capturing co-efficients from user
    @author: Vaishnav Krishna
    @date: 2022-02-16
*/

#include<stdio.h>
#include<math.h>

void quad(int a,int b, int c)
{
    //d=b^2-(4*a*c)
    int r1,r2;
    int d = (b*b)-(4*a*c);
    if(d>0){
        printf("Roots are real and distinct\n");
        r1 = ((-b)+sqrt(d))/(2*a);
        r2 = ((-b)-sqrt(d))/(2*a);
        printf("The 2 real roots are %d and %d",r1,r2);
    }
    else if(d==0){
        printf("Roots are real and equal\n");
        r1 = (-b)/(2*a);
        printf("The 1 real root is %d ",r1);
    }
    else{
        printf("Roots are imaginary\n");
        d = sqrt((d * (-1)))/(2*a);
        r1 = (-b)/(2*a);
        printf("The 2 imaginary roots are %d+%di and %d-%di",r1,d,r1,d);
    }
}


void main()
{
    //format ax^2+bx+c=0
    int a,b,c;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Enter the value of c: ");
    scanf("%d",&c);

    //function call
    quad(a,b,c);
}
