#include <cs50.h>
#include <stdio.h>
#include "credit.h"

int main(void) {
    long long cc;

    cc = get_credit_card();
    int slim = trim(cc);
        
    if(test_cc(cc)) {
        //printf("test_cc returned true!\n");
        //printf("slim is %d\n", slim);
        switch(slim) {
            case 34:
            case 37: 
                printf("AMEX\n");
                break;
            case 55:
            case 54:
            case 53:
            case 52:
            case 51:
                printf("MASTERCARD\n");
                break;
            case 49:
            case 48:
            case 47:
            case 46:
            case 45:
            case 44:
            case 43:
            case 42:
            case 41:
            case 40:
                printf("VISA\n");
                break;
        }
    }
    else {
        printf("INVALID\n");
    }
    
    return 0;
}