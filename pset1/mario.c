#include <stdio.h>
#include <cs50.h>

int place_gap(void);
int lay_row(int);
int prepend_blanks(int);
int build_pyramid(int);

int main(void) {
    int size;
    do {
        printf("Height: ");
        size = get_int();
    } while(size < 1 || size > 23);
    
    build_pyramid(size);
    return 0;
}

int place_gap(void) {
    printf("  ");
    
    return 0;
}

int lay_row(int i) {
    for(int j = 0; j<i; j++) {
        printf("#");
    }
    return 0;
}

int prepend_blanks(int i) {
    for(int j = 0; j<i; j++) {
        printf(" ");
    }
    return 0;
}

int build_pyramid(int n) {
    for(int i = n; i>=0; i--) {
        prepend_blanks(i);
        lay_row(n-i);
        place_gap();
        lay_row(n-i);
        printf("\n");
    }
    
    return 0;
}

