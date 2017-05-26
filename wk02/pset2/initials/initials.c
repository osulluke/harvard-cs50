#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void) 
{
    //prompt user for their name:
    string name = get_string();
    
    //check first character and print if not a blank:
    if(name[0] != ' ') 
    {
        printf("%c", toupper(name[0]));
        
    }
    
    //loop through rest of string:
    for (int i = 0, n = strlen(name); i < n; i++)
    {
        //look at each character and the one tha follows for multiple blanks:
        if(name[i] == ' ' && name[i + 1] != ' ') 
        {
            //don't print a null value:
            if(name[i+1] != '\0'){
                printf("%c", toupper(name[i+1]));
            }
        }
    }
    
    //print final new line
    printf("\n");
    
    //return success:
    return 0;
}