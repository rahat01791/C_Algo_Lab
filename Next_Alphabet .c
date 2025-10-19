/*
https://codeforces.com/group/MWSDmqGsZm/contest/326175/my
*/
/*
Given a lowercase alphabet character. You have to print the next character in the alphabet.
*/
/*
Sample Input
a
b
Sample Output
b
c
*/

#include<stdio.h>
int main()
{
    char lowercase;
    scanf("%c", &lowercase);
 
    
    if (lowercase >= 'a')
    { 
        if(lowercase == 'z') 
        
        {
            printf("a");
        }
        else
        {
            printf("%c", lowercase +1 );
        }
 
    }
    return 0;
}



/*
Hackerrank profile link:
https://www.hackerrank.com/profile/rshf01791
*/

/*
Codechef profile link :
https://www.codechef.com/users/rahat01791
*/

/*
Codeforces profile link :
https://codeforces.com/profile/RAHAT01791
*/