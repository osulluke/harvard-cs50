#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

string encrypt(string plain, string key);

int main(int argc, string argv[]) 
{
    //declare variables
    string key, plain, cipher;
    
    //check for only 2 arguments
    if (argc != 2) 
    {
        printf("Usage: ./vigenere k\n");
        return 1;
    }
    
    //assign key
    key = argv[1];
    
    //ensure key is character-based
    for (int i = 0, n = strlen(key); i < n; i++) 
    {
        if ( (key[i] >= 'a' && key[i] <= 'z') || (key[i] >= 'A' && key[i] <= 'Z') ) 
        {
            if(key[i] >= 'A' && key[i] <= 'Z')
            {
                ;
            }
        }
        else 
        {
            printf("Usage ./vigenere k\n");
            return 1;
        }
    }

    //read in plaintext
    printf("plaintext: ");
    plain = get_string();
    
    //encrypt message according to key
    cipher = encrypt(plain, key);
    
    //output ciphertext
    printf("ciphertext: %s\n", plain);
    
    //exit with success
    return 0;
}

string encrypt(string s, string key)
{
    int len = strlen(s), ki = 0;
    int key_length = strlen(key);

    for(int i = 0; i < len; i++)
    {
        //s[i] = s[i] + (int) key[i % key_length];
        
        //encrypt lowercase letters
        if( (s[i] >= 'a' && s[i] <= 'z') ) {
            s[i] -= 'a';
            key[i] -= 'a';
            s[i] = ((s[i] + key[ki % key_length]) % 26) + 'a';
            ki++;
        }
        
        //encrypt uppercase letters
        if( (s[i] >= 'A' && s[i] <= 'Z') ) {
            s[i] -= 'A';
            key[i] -= 'A';
            s[i] = ((s[i] + key[ki % key_length]) % 26) + 'A';
            ki++;
        }
    }
    
    return s;
}