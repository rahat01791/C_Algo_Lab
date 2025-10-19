/*
https://codeforces.com/group/MWSDmqGsZm/contest/219158/my
*/
/*
Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter
*/
/*
Sample Input :
a
A
Sample Output :
A
a
*/


#include<stdio.h>
int main()
{
    char R ;
    scanf("%c", &R);
 
    if (R >= 'A' && R <= 'Z') 
    { 
        R =  R+32;
        printf("%c",R);
    }
    else
    {   
        R = R - 32;
        printf("%c", R);
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