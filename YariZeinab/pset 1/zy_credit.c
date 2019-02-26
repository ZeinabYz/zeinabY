#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    long long anumber;

    int zee=0;
    do{
    anumber=get_long_long("give your card number");
    }
    while (anumber<0);
    long long zeinab = anumber;
    while (zee>0)
    {
        zeinab=zeinab/10;
        zee++;
    }
    if(zee!=13 && zee!=15 && zee!=16)
    {
        printf("this card number is not valid");
    }
    zeinab = anumber ;
    int thesum=0;

    for(int i=1; i<=zee; i++)
    {
        int zy= zeinab%10;
        if (i%2==0)
        {
            zy=zy*2;
        }
        if(i%2!=0)
        {
            zy=zy*1;
        }
        if(zy>9)
        {
            zy=zy-9;
        }
        thesum=thesum+zy;
        zeinab=zeinab/

    if (thesum % 10 != 0)
     {
        printf("card not valid");
     }
    else
    {
        printf("this card is absolutly valid");
    }

    zeinab=anumber;
    while (zeinab>100)
    {
        zeinab=zeinab/10;
    }
    int firstone=zeinab;
    if ((firstone==34 ||firstone==37) && ( zee ==15))
    {
        printf(" from Amex");
    }
    else if ((firstone==34 ||firstone==37) && (zee ==15))
    {
        printf("from master card");
    }
    else if ((firstone/10==4) && (zee==13 || zee==16))
    {
        printf("from visa card");
    }
    else
    {
        printf("a card number form another bank");
    }
}

}
