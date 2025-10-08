/****************************************************************************

 WAPC to do the following:
 Input: account balance, withdrawal amount.
 Follow the given rules:
 Withdrawal amount must be a multiple of 100.
 Withdrawal must not exceed balance.
 Maintain a minimum balance of ₹500 after withdrawal.
 Output: Transaction success or failure with reason.
 
****************************************************************************/



#include<stdio.h>
int main()
{
    int balance, withdraw, diff;
    printf("ENTER THE ACCOUNT BALANCE AND WITHDRAWAL AMOUNT: \n");
    scanf("%d %d",&balance, &withdraw);

    diff = balance - withdraw;

    if(withdraw % 100 != 0)
    {
        printf("\nTransaction Failure, Withdrawal amount is not a multiple of 100.");
    }
    else if(withdraw>balance)
    {
        printf("\nTransaction Failure, Withdrawal amount exceeds account balance.");
    }
    else if(diff<500)
    {
        printf("\nTransaction Failure, Account balance is less than 500/- after withdrawal.");
    }
    else
    {
        printf("\nTransaction Success.");
    }
    return 0;
}