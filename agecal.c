#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a,b,by;
    char choice;

    printf("ENTER A NUMBER BETWEEN 1 TO 9\n-> ");
    scanf("%d",&a);
    if (a < 1 || a > 9)
    {
        printf("Enter a number between 1 and 9!");return;
    }

    b=(a*2+5)*50;

    getchar();
    printf("Have you already celebrated your birthday?\nIF Yes enter y else enter n\n-> ");
    scanf("%c",&choice);

    if(choice=='y'||choice=='Y')
    {
        b=b+1774;                  // this code was written in 2024 , increase the number 1774 to 1775 in next year and +1 in every upcoming years

    }
    else if(choice=='n'||choice=='N') {
        b=b+1773;                  //this code was written in 2024 , increase the number 1773 to 1774 in next year and +1 in every upcoming years
    }
    else {
        printf("Please enter a valid input (Y/N)");
        return;
    }

    printf("ENTER YOUR BIRTH YEAR\n-> ");
    scanf("%d",&by);

    b=b-by-100*a;

    printf("Your chosen number was=%d\nYour age is=%d ",a,b);

}