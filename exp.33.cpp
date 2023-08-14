#include<stdio.h>
int main()
{
	int age,price;
	printf("enter the age of person:");
	scanf("%d",&age);
	if(age>=55)
	{
		price=10.00;
	}
	else if((age>=21)&&(age<=54))
	{
		price=15.00;
	}
	else if((age>=13)&&(age<=20))
	{
		price=10.00;
	}
	else if((age>=3)&&(age<=12))
    {
    	price=5.00;
	}
	else if(age<3)
	{
		price=0.00;
	}
	printf("the ticket charge is $ %d",price);
	return 0;
}
