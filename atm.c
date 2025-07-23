#include<stdio.h>
int main()
{
	int bank_balance=1000,pin=1234;
	int choice,pass,dep,withd,new_pin;
	printf("---WELCOME TO XYZ BANK----");
	printf("\nEnter your choice for the bank operation");
	printf("\n1.Deposit\n2.Withdraw\n3.Balance enquiry\n4.Pin change");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Enter your pin");
			scanf("%d",&pass);
		if((pass)==(pin))
			{
				printf("Enter the amount to deposit");
				scanf("%d",&dep);
				bank_balance=bank_balance+dep;
				printf("Your amount credited successfully");
				printf("Now available balance is %d",bank_balance);
				
			}
			else
			{
				printf("Invalid Pin,TRY AGAIN");
			}
			break;
			case 2:
				printf("Enter your pin");
				scanf("%d",&pass);
				if(pass==pin)
				{
					printf("Enter the amount to withdraw");
					scanf("%d",&withd);
			}
				else if(bank_balance<withd)
					{
						printf("Insufficient Amount");
				}
				else {
				
				
					bank_balance=bank_balance-withd;
					printf("Amount withdrawn successfully");
					printf("Now available balance is %d",bank_balance);
				}
				
			
				
				{
				
				    printf("Invalid pin,TRY AGAIN");
						
					
				}
				break;
				case 3:
					printf("Enter your Pin");
					scanf("%d",&pass);
					if(pass==pin)
					{
						printf("Your bank balance is %d",bank_balance);
						
					}
					else
					{
					
					printf("Invalid pin");
				}
				break;
				case 4:
					printf("Enter your current pin");
					scanf("%d",&pass);
					if(pass==pin)
					{
					
					printf("Enter new password");
					scanf("%d",&new_pin);
					pin=new_pin;
		
				}
				else
				{
					printf("Invalid pin,TRY AGAIN");
				}
				default:
					printf("Invalid choice");
					break;
	
					
				
	}
  }
  
