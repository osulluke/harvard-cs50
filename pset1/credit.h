//#include <cs50.h>

bool test_cc(long long);
long long get_credit_card();

bool test_cc(long long cc) {
    bool is_cc;
    int sum = 0;
    int mod = 0;
    int oddsum = 0;
    
    for (int i = 0; i<8; i++) {
        printf("cc is %lld\n", cc);
        oddsum += cc % 10;
        cc /= 10;
        mod = (cc % 10);
        cc /= 10;
        if(mod * 2 > 10) {
            sum = ((mod * 2) % 10) + (mod / 10);
        }
        else{
            sum = (mod * 2);
        }
        printf("mod is %d\n", mod);
        printf("oddsum is %d\n", oddsum);
        printf("sum is %d\n", sum);
    }
    
    printf("sum is %d", sum);
    is_cc = true;
    
    return is_cc;
}

long long get_credit_card() {
    long long cc_num;
    
    printf("Input credit card #: ");
    
    cc_num = get_long_long();
    return cc_num;
}