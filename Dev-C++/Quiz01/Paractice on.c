#include <stdio.h>
int main()
{
	int Number_of_guests;
	float Food_price_per_person, Pakage_price, Bill_amount;
	char Pakage_Type, Food_type, S, D, L;
	
	printf("Enter the Pakage Type (1 or 2):");
	scanf("\n%c", &Pakage_Type);
	
	if(Pakage_Type=='1')
	{
		Pakage_price=15000.00;
		printf("Pakage Type:%c\n", Pakage_Type);
		
		printf("Enter the Food Type (S or D or L):");
		scanf("\n%c", &Food_type);
		
		if(Food_type=='S')
		{
			printf("Food Type:%c\n", Food_type);
			Food_price_per_person=1500.00;
		}
		else if(Food_type=='D')
		{
			printf("Food Type:%c\n", Food_type);
			Food_price_per_person=3000.00;
		}
		else if(Food_type=='L')
		{
			printf("Food Type:%c\n", Food_type);
			Food_price_per_person=2500.00;
		}
		else
		{
			printf("ERORR");
		}
	}
	else if(Pakage_type=='2')
	{
		Pakage_price=30000.00;
		printf("Pakage Type:%c\n", Pakage_Type);
		
		printf("Enter the Food Type (S or D or L):");
		scanf("\n%c", &Food_type);
		
		if(Food_type=='S')
		{
			printf("Food Type:%c\n", Food_type);
			Food_price_per_person=1500.00;
		}
		else if(Food_type=='D')
		{
			printf("Food Type:%c\n", Food_type);
			Food_price_per_person=3000.00;
		}
		else if(Food_type=='L')
		{
			printf("Food Type:%c\n", Food_type);
			Food_price_per_person=2500.00;
		}
		else
		{
			printf("ERORR");
		}
	}
	else
	{
		printf("ERORR");
		return 0;
	}
	printf("Enter the number of guests:");
	scanf("%d", &Number_of_guests);
	
	Bill_amount = Pakage_price+Number_of_guests*Food_price_per_person;
	printf("Bill amount : %0.2f",Bill_amount);
	
	return 0;
}
