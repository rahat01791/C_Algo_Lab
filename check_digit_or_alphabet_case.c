/*
https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M
*/
/*
Given a letter X. Determine whether X is Digit or Alphabet and if it is Alphabet determine if it is Capital Case or Small Case.
*/
/*
Sample Input :
A
c
1
Sample Output :
ALPHA
IS CAPITAL
ALPHA
IS SMALL
IS DIGIT
*/

#include<stdio.h>
int main()
{
    char R ;
    scanf("%c", &R);
 
    if (R >= 'A' && R <= 'Z') 
    { 
        
        printf("ALPHA\nIS CAPITAL");
    }
    else if (R >= '0' && R <= '9'){
        printf("IS DIGIT\n");
    }
    else if (R >= 'a' && R <= 'z')
    {   
        printf("ALPHA\nIS SMALL");
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