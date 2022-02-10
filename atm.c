#include <stdio.h>
unsigned long amount=5000 ,deposit,withdraw;
int choice,pin,k;
char transaction ='y';
void main(){
    while (pin !=6789)
    {
        printf("TYPE YOUR SECRET PIN NUMBER:");
        scanf("%d",&pin);
        if(pin !=6789)
        printf("PLEASE ENTER VALID PASSWORD\n");
    }
    do                          
    {
         printf("Hello! welcome to our atm service\n");
         printf("1.Balance Checking\n");
         printf("2.Cash Withdrawal\n");
         printf("3.Cash Deposition\n");
         printf("4.Exit\n");
         printf("************************************\n\n");
         printf("Please proceed with your choice: ");
         scanf("%d",&choice);
         switch(choice)
         {
             case 1:
                    printf("\nEnter the account in RS: ");
                    break;
             case 2:
                    printf("\n Insert the amount to be withdrawl: ");    
                    scanf("%lu",&withdraw);
                    if(withdraw%100 != 0)
                    {
                        printf("\n You are requested to insert the amount in multiple of 100");
                    }
                    else if (withdraw>(amount-500))
                    {
                        printf("\n INSUFFICENT BALANCE ");
                    }
                    else 
                    {
                        amount = amount - withdraw;
				        printf("\n\n you can now collect the cash");
				        printf("\n the current balance is %lu", amount);
                    }
                    break;
             case 3:
                        printf("\n Insert the amount to be deposited: ");
                        scanf("%lu",&deposit);
                        amount = amount + deposit;
			            printf("the balance is %lu", amount);
			        break;
             case 4:
			            printf("\n We are thankful to you for using our ATM service!");
			        break;
		    default:
                        printf("\n invalid choice");
         }
          printf("\n\n Would you like to have another ATM transaction?(y/n):\ny");
         fflush(stdin);
          scanf("%c",&transaction);
          if(transaction=='n' || transaction=='N')
            k=1;
    } while (!k);
    printf("\nWe are thankful to you for using our atm service!");
    
}
                                                                                                                                                                                                                                                                                                                                                                                
                                                                                                                                                                                                                                                                                                                                                                                


    