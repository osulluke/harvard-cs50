/* my_functions.h */

int count_coins(int);

int count_coins(int total) {
    
    int coins = 0;
    
        while(total >= 25) {
        total -= 25;
        coins++;
    }
    
    while(total >= 10) {
        total -= 10;
        coins++;
    }
    
    while(total >= 5) {
        total -= 5;
        coins++;
    }
    
    while(total >= 1) {
        total -= 1;
        coins++;
    }
    
    return coins;
}