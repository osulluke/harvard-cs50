#include <stdio.h>

int main(void) 
{
    for(int i = 65; i < 91; i++)
    {
        printf("%c is %i\n", (char) i, i);
        //this (char) cast is not strictly necessary because the format
        //specifier will do it for you
    }
    
    return 0;
}