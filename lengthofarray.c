#include <stdio.h>

void main()
{
    char inp[5],rev[5];

    int i,j,len=0;
    printf("enter the elements of first array : ");


    for(i=0;i<4;i++)
    {
        scanf("%c",&inp[i]);
        if (inp[i] == '\n')
        {
            inp[i] ='\0';

        }

        





    }
    inp[4]='\0';


    for(j=0;inp[j]!='\0';j++)
        len++;
    printf("length of string is: %d",len);    

    for(i=0;inp[i]!='\0';i++,len--)
    {
        rev[i]=inp[len-1];
    }
    rev[i]='\0';
    printf("reversed string is: %s",rev);
    
    j=0;

    for (i=0;inp[i]!='\0';i++)

    {
        if (inp[i]!=rev[i])
        {
            j++;
            break;
        }



    }
    if(j==0)
    {
        printf("\nthe string is a palindrome");
    }
    else
    {
        printf("\nthe string is not a palindrome");
    }
 




}