#include <stdio.h>

int main() {
    
    int exports_A = 1;  
    int imports_A = 2;  

    int exports_B = 1;  
    int imports_B = 2;  

    int balance_A = exports_A - imports_A;
    int balance_B = exports_B - imports_B;

    
    if (balance_A > 0 && balance_B > 0) {
        
        int total_export_C = 0;
        int total_import_C = 0;  

        int balance_C = total_export_C - total_import_C;
        int total_balance_A_B = balance_A + balance_B;

        if (balance_C > total_balance_A_B) {
            printf("Country C is in trade surplus.\n");
        } else {
            printf("Country C is not in trade surplus.\n");
        }
    } else {
        printf("Countries A and B are not in trade surplus, so we can't determine C's trade surplus status.\n");
    }

    return 0;
}
