#include <cs50.h>
#include <stdio.h>
#include "credit.h"

int main(void) {
    long long cc;
    
    cc = get_credit_card();
    test_cc(cc);
    
    return 0;
}