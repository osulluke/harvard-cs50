#include <stdio.h>
#include <cs50.h>
#include "my_functions.h"

int main(void) {
    float change;
    int coins;
    
    printf("Hi, how much change is owed? ");
    change = get_float();
    int chng = (int) (100 * change);

    coins = count_coins(chng);
    printf("%d", coins);
    
    return 0;
}