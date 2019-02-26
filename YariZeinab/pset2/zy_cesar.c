#include<stdio.h>
#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main (int argc, string argv[])
{
    if (argc==2)
    {
        string zy;


    //la cle pour avancer
    int k=atoi(argv[1]);

    //get the plaintex #
    zy=get_string("plaintext");

    //de Ascii a alphabet index
    printf("cypher text");

    for(int i=0; i<strlen(zy); i++)
    if(isalpha(zy[i]))
    {
        if(islower(zy[i]))
        {
            //the first formula for minisclue
            printf("%c", (((zy[i]-97)+k)%26)-97);
        }

         //the second formula if is maju
         if(isupper(zy[i]))
         {
             printf("%c",zy[i]);
         }
         else
         {
             printf("%c",zy[i]);
         }
            printf("\n");
    }
    return 0;
}
}
