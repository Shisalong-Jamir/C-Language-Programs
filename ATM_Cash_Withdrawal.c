#include <stdio.h>
int main(){
    int pin, choice;
    float balance=10000, amount, withdraw, deposit;
    printf("Enter PIN: ");
    scanf("%d", &pin);
    if (pin != 2468){
        printf("Incorrect PIN (Hint: First 4 even numbers)\n");
        return 0;
    }
    do {
        printf("\n----ATM MENU----\n");
        printf("1. Check Balance\n2. Withdraw Cash\n3. Deposit Cash\n4. Exit\n");
        printf("Enter choice [1/2/3/4]: ");
        scanf("%d", &choice);
        if (choice ==1){
            printf("Your Balance is: Rs %.2f\n", balance);
        }
        else if (choice ==2){
            printf("Enter amount to withdraw: ");
            scanf("%f", &withdraw);
            if (withdraw>balance){
                printf("Insufficient Balance\n");
            }
            else {
                balance-=withdraw;
                printf("Please collect your cash. Balance= Rs %.2f\n", balance);
            }
        }
        else if (choice ==3){
            printf("Enter amount to deposit: ");
            scanf("%f", &deposit);
            balance+=deposit;
            printf("Updated Balance= Rs %.2f\n", balance);
        }
        else if (choice==4){
            printf("Thank you. Exiting...\n");
        }
        else{
            printf("Invalid choice\n");
        }
    }
    while (choice !=4);
    return 0;
}