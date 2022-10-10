//name-Arpan Kumar Bartia
//reg no-2041002035
//branch and section- cse e
#include<stdio.h>
#include<math.h>
void payment(float price,float downp,float interest,float totalp)
{
	float Principal=price-downp;
	printf("The amount borrowed is: %f\n",Principal);
	float pay=((1/12)*interest*Principal)/(1-(1+(pow(((1/12)*interest),(-totalp)))));
	printf("The monthly payment is : %.2f\n $",pay);


}
int main()
{
	float price,downp,interest,totalp;
	printf("Enter the purchase price:");
	scanf("%f",&price);
	printf("Enter the down payment:");
	scanf("%f",&downp);
	printf("Enter the interest rate");
	scanf(" %f",&interest);
	printf("Enter the total no of downpayments");
	scanf("%f",&totalp);
	payment(price,downp,interest,totalp);
	return(0);
}
