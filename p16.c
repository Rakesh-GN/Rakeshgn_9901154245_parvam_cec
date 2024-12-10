#include <stdio.h>
void transferMoney(double *fromAccount, double *toAccount, double amount) {
    if (*fromAccount < amount) {
        printf("Insufficient funds in the source account.\n");
        return;
    }
    *fromAccount -= amount; 
    *toAccount += amount;   
    printf("Transfer of %.2f successful.\n", amount);
}
int main() {
    double account1 = 1000.00;  // Balance of Account 1
    double account2 = 500.00;   // Balance of Account 2
    double transferAmount;
    printf("Initial Balances:\n");
    printf("Account 1: $%.2f\n", account1);
    printf("Account 2: $%.2f\n\n", account2);
    printf("Enter the amount to transfer from Account 1 to Account 2: ");
    scanf("%lf", &transferAmount);
    transferMoney(&account1, &account2, transferAmount);
    printf("\nUpdated Balances:\n");
    printf("Account 1: $%.2f\n", account1);
    printf("Account 2: $%.2f\n", account2);
    return 0;
}
