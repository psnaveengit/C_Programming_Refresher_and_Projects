/* WAP that defined an enum type and uses that type to display the 
values of some variable
1. Create an enum type named Company
2. Valid Values include GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT
3. Creat 3 variables of above enum type that are assigned the following
values : XEROX, GOOGLE, EBAY
4. The program should display the value of three variables with each seperated
by newline 
*/


#include <stdio.h>

int main()
{
    enum company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    //      Indexed : 0      1        2      3     4       5

    enum company c1 = XEROX;
    enum company c2 = GOOGLE;
    enum company c3 = EBAY;

    printf("%d\n",c1); //Index number 2
    printf("%d\n",c2); //Index number 0
    printf("%d\n",c3); //Index number 4

    return 0;
}