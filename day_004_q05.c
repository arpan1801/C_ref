//name-Arpan Kumar Bartia
//reg no-2041002035
//branch and section- cse e
#include<stdio.h>
#include<math.h>
void rounded(int n)
{
  float rounded=(int)(n+0.5);
  printf("%d rounds to %f",n,rounded);
}

int main()
{
int n;
printf("enter the integer");
scanf("%d",&n);
rounded(n);
return(0);
}
