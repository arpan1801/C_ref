//name-Arpan Kumar Bartia
//reg no-2041002035
//branch and section- cse e
#include<stdio.h>
#include<math.h>
void approximate(int n)
{
float e=2.71;
float approx=(pow(n,n)*pow(e,-n)*sqrt((2*n+(1/3))*3.14));
printf("%d! equals approximately %f",n,approx);
}
int main()
{
int n;
printf("enter the integer");
scanf("%d",&n);
approximate(n);
return(0);
}
