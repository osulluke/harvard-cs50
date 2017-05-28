#include <cs50.h>
#include <string.h>
#include <stdio.h>

string encrypt(string s, int d);

int main(int argc, string argv[]) {
    int shift;
    string plain, cipher;
    
    if (argc != 2) {
        printf("Usage: ./caesar k\n");
        return 1;
    }
 
    shift = atoi(argv[1]);

    printf("plaintext: ");
    plain = get_string();
    
    cipher = encrypt(plain, shift);
    printf("ciphertext: %s\n", cipher);
    
    return 0;
}

string encrypt(string s, int dist) {
    
    for(int i = 0; i < strlen(s); i++) {
        
        //encrypt lowercase letters
        if( (s[i] >= 'a' && s[i] <= 'z') ) {
            s[i] -= 'a';
            s[i] = ((s[i] + dist) % 26) + 'a';
        }
        
        //encrypt uppercase letters
        if( (s[i] >= 'A' && s[i] <= 'Z') ) {
            s[i] -= 'A';
            s[i] = ((s[i] + dist) % 26) + 'A';
        }

    }
    
    return s;
}