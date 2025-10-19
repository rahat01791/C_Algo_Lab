/*
https://codeforces.com/group/MWSDmqGsZm/contest/219158/my
*/
/*
Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".
For example: In 4569 the first digit is 4, the second digit is 5, the third digit is 6 and the fourth digit is 9.
*/
/*
Sample Input :
4569
3569
Sample Output :
EVEN
ODD
*/


#include<stdio.h>
int main()
{
    int X;
    scanf("%d", &X);
    int Y = ("%d", X/1000);
    if(Y % 2== 0)
    {
        printf("EVEN");
    }
 
    else
    {
        printf("ODD");
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