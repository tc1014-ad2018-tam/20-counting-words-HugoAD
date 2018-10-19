/*This program allows the user to know hoy many words
 * are in a string. This can be done by counting the
 * spaces used in the string.
 *
 * Author: Hugo Aguirre
 * Date: October 18th, 2018
 *
 * */

#include <stdio.h>
#include <string.h>


int main() {

    //Variable declaration
    char ch[100];
    int i;
    int totalw;
    totalw = 1;


    //Ask the user for any string
    printf("\n Welcome, please enter any String :  ");
    fgets(ch, sizeof(ch), stdin);


    //cycle to calculate the total words in the string
    for(i = 0; ch[i] < (ch); i++)
    {
        if(ch[i] == ' ' )
        {
            totalw++;
        }
    }

    //show the user the number of words in the string
    printf("\n The number of total words in the string %s is: %d", ch, totalw);

    return 0;
}