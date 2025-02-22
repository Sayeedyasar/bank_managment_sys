#include <stdio.h>

int acc_num, dep_amt, withdraw_amt, total_amt = 1000;
char acc_type, name[100];

int new_pin[4],pin[4];


void deposit();

int main() {
    int choice;

    printf("Enter your name :");
    fgets(name, sizeof(name), stdin);

    printf("Enter your account no :");
    scanf("%d", &acc_num);

    printf("Enter your pin number :\n");
    scanf("%u",pin);

    printf("\n\t Main Menu \n");
    printf("1. Deposit\n");
    printf("2. Withdraw\n");
    printf("3. Transfer\n");
    printf("4. PIN change\n");

    printf("Enter the choice of operation to perform: ");
    scanf("%d", &choice);

    switch (choice) {

        case 1:
            deposit();
            break;

        case 2:
            withdraw();
            break;

        case 3 :
            transfer();
            break;

        case 4:
            pin_change();
            break;

        default:
            printf("You have entered a wrong number.\n");
            break;
    }

    return 0;
}

void deposit()
{
    char ans;

    printf("Enter the amount to deposit: ");
    scanf("%d", &dep_amt);

    printf("You want to deposit %d \n ,Is that right?(y or n)\n :", dep_amt);
    scanf("%c",&ans);
}

void withdraw()
{
    printf("Enter the amount to be withdrawn :\n ");
    scanf("%u",&withdraw_amt);

    if (withdraw_amt > total_amt)
    {
        printf("Insufficient amount\n");
    }
    else
    {
    total_amt-= withdraw_amt;
    printf("the new total is %u\n",total_amt);
    }

}
void  transfer()
{

    int trans_accNum,trans_amt;

    printf("enter the account number to transfer the money\n ");
    scanf("%u",&trans_accNum);

    printf("enter the amount to transfer :\n");
    scanf("%u",&trans_amt);

    printf("Transfering %u to %u account ", trans_amt,trans_accNum);
}

void pin_change()
{
 int cpin;
 printf("enter the Current PIN :\n");
 scanf("%u",&cpin);

 if (pin==cpin)
 {
    printf("Enter your new pin number :\n");
    scanf("%u",&new_pin);
    printf("%u is your new PIN for your account",new_pin);
 }
 else
 {
     printf("You have entered wrong PIN");
 }
}
