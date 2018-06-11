bool test_cc(long long);
long long get_credit_card();
int reduce_10(int);
int trim(long long);
void classify(int);

bool test_cc(long long cc) {
    bool is_cc = false;
    int sum = 0;
    int even_digit = 0;
    int oddsum = 0;
    int evensum = 0;
    
    for (int i = 0; i < 10; i++) {
        printf("cc is %lld\n", cc);
        
        oddsum += cc % 10;
    
        
        cc /= 10;
        even_digit = (cc % 10);
        cc /= 10;
        
        evensum += reduce_10(even_digit);
        
        printf("even_digit is %d\n", even_digit);
        printf("oddsum is %d\n", oddsum);
        printf("evensum is %d\n", evensum);
        printf("\n");
        
    }
    
    sum = evensum + oddsum;
    
    printf("total is %d", sum);
    
    if(sum % 10 == 0) {
        is_cc = true;
    }
    
    return is_cc;
}

long long get_credit_card() {
    long long cc_num;
    
    printf("Input credit card #: ");
    
    cc_num = get_long_long();
    return cc_num;
}

int reduce_10(int num) {
    int sum;
    int times_two = num*2;
    
    //printf("reduce_10 num is %d; num * 2 is %d\n", num, num*2);
    if(times_two > 10) {
        sum = ( times_two % 10) + ( times_two / 10);
        printf("%d sum is %d", times_two, sum);
    }
    else {
        sum = times_two;
    }
    
    //printf("reduce_10 num returns %d\n", sum);
    return sum;
}

int trim(long long num) {
    
    while (num > 100) {
        num /= 10;
    }
    
    return num;
}

void classify(int card) {
    
    switch(card) {
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