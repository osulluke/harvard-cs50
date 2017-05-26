#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void) 
{
    //prompt user for their name:
    //printf("Please input your name: ");
    string name = get_string();
    
    //check first character:
    if(name[0] != ' ') 
    {
        printf("%c", toupper(name[0]));
        
    }
    
    //get first character in each string:
    for (int i = 0, n = strlen(name); i < n; i++)
    {
        if(name[i] == ' ' && name[i + 1] != ' ') 
        {
            if(name[i+1] != '\0'){
                printf("%c", toupper(name[i+1]));
            }
        }
    }
    
    printf("\n");
    
    //return success:
    return 0;
}