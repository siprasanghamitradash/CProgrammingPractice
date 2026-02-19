#include <stdio.h>

int main() {
    int choice;
    int money;
    int running = 1; // This acts as a "switch" to keep the loop going

    printf("--- Welcome to the C-Language Vending Machine ---\n");

    while (running) {
        // 1. Show the Menu
        printf("\nItems Available:\n");
        printf("1. Cola  - $2\n");
        printf("2. Chips - $1\n");
        printf("3. Candy - $1\n");
        printf("4. Exit Machine\n");
        
        printf("\nPlease select an option (1-4): ");
        scanf("%d", &choice);

        // 2. Handle the "Exit" logic first
        if (choice == 4) {
            printf("Shutting down... Goodbye!\n");
            running = 0; // This breaks the while loop
            continue;    // Jumps back to the top to exit
        }

        // 3. Ask for payment
        printf("Insert money ($): ");
        scanf("%d", &money);

        // 4. The Logic (Decision Making)
        if (choice == 1) { // Cola Logic
            if (money >= 2) {
                printf("Dispensing Cola... Your change is $%d\n", money - 2);
            } else {
                printf("Insufficient funds! Returning your $%d\n", money);
            }
        } 
        else if (choice == 2 || choice == 3) { // Chips or Candy ($1)
            if (money >= 1) {
                printf("Dispensing item... Your change is $%d\n", money - 1);
            } else {
                printf("Insufficient funds! Returning your $%d\n", money);
            }
        } 
        else {
            printf("Invalid selection. Please try again.\n");
        }
    }

    return 0;
}