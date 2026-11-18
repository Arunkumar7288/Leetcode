#include <stdio.h>

int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int max_wealth = 0;
    
    for (int i = 0; i < accountsSize; i++) {
        int current_customer_wealth = 0;
        int cols = accountsColSize[i];
        
        for (int j = 0; j < cols; j++) {
            current_customer_wealth += accounts[i][j];
        }
        
        if (current_customer_wealth > max_wealth) {
            max_wealth = current_customer_wealth;
        }
    }
    
    return max_wealth;
}
