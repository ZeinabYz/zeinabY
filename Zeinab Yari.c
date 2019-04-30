#define _XOPEN_SOURCE
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
       printf("Usage: crack <hash>\n");
       return 1;
       
    }
    int alphabetletters_count = 53;
    string alphabetletters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string hash = argv[1];
    char salt[3];
    memcpy(salt, hash, 2);
    salt[2] = '\0';

    char anonyme_password[6] = "\0\0\0\0\0\0";

    for (int fifth = 0; fifth < alphabetletters_count; fifth++)
    {
        for (int fourth = 0; fourth < alphabetletters_count; fourth++)
        {
            for (int third = 0; third < alphabetletters_count; third++)
            {
                for (int second = 0; second < alphabetletters_count; second++)
                {
                    for (int first = 0; first < alphabetletters_count; first++)
                    {
                        anonyme_password[0] = alphabetletters[first];
                        anonyme_password[1] = alphabetletters[second];
                        anonyme_password[2] = alphabetletters[third];
                        anonyme_password[3] = alphabetletters[fourth];
                        anonyme_password[4] = alphabetletters[fifth];
                        
                        if(strcmp(crypt(anonyme_password, salt), hash) == 0)
                        {
                            printf("%s\n" ,anonyme_password);
                            return 0
                        }
                    }
                }
            }
        }
    }
    
    printf("anonyme pass couldn't be cracked sorry");
    return 2;
 }