bool test_cc(long long);
long long get_credit_card();
int reduce_10(int);
int trim(long long);

bool test_cc(long long cc) {
    bool is_cc = false;
    int sum = 0;
    int mod = 0;
    int oddsum = 0;
    int evensum = 0;
    
    for (int i = 0; i < 8; i++) {
        printf("cc is %lld\n", cc);
        
        oddsum += cc % 10;
        
        cc /= 10;
        mod = (cc % 10);
        cc /= 10;
        
        evensum += reduce_10(mod);
        
        printf("mod is %d\n", mod);
        printf("oddsum is %d\n", oddsum);
        printf("evensum is %d\n", evensum);
    }
    
    sum = evensum + oddsum;
    
    printf("sum is %d", sum);
    
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
    printf("reduce_10 num is %d; num * 2 is %d\n", num, num*2);
    if(num * 2 > 10) {
        sum = ((num * 2) % 10) + ( (num*2) / 10);
    }
    else {
        sum = (num * 2);
    }
    printf("reduce_10 num returns %d\n", sum);
    return sum;
}

int trim(long long num) {
    
    while (num > 100) {
        num /= 10;
    }
    
    return num;
}