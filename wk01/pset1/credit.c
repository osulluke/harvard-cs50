#include <cs50.h>
#include <stdio.h>
#include "credit.h"

int main(void) {
    long long cc;

    cc = get_credit_card();
    int slim = trim(cc);
        
    if(test_cc(cc)) {
        classify(slim);
    }
    else {
        printf("INVALID\n");
    }
    
    return 0;
}