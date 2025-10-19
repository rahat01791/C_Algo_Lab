/*
https://codeforces.com/group/MWSDmqGsZm/contest/219158/my
*/
/*
Given two numbers A and B. Print "Multiples" if A is multiple of B or vice versa. Otherwise print "No Multiples".
*/
/*
sample Input :
9 3
12 5
Output :
Multiples
No Multiples
*/

#include<stdio.h>
int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
 
    if (A % B==0)
    {
        printf("Multiples");
    }
    else if (B % A==0)
    {
        printf("Multiples");
    }
 
    else
    {
        printf("No Multiples");
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