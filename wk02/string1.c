#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void) 
{
    
    string s = get_string();
    //fix bug:
    if(s != NULL) 
    {   
        //this is a much better design for the for loop
        for(int i = 0, n = strlen(s); i < n; i++) 
        {
            printf("%c\n", s[i]);
        }
    }
}