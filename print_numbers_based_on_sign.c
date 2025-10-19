/*
https://www.hackerrank.com/contests/assignment-02-a-introduction-to-c-programming-a-batch-08/challenges/is-it-a-challenge/submissions/code/1399154024
*/


/*
Problem Statement
You will be given an integer N. If N is a positive number then print from 1 to N, otherwise print from N to 0.
Note: A positive number is a number that is strictly greater than 0.
*/
/*
Sample Input :
5
-4
Sample Output :
1 2 3 4 5 
-4 -3 -2 -1 0 
*/


#include<stdio.h>
#include<limits.h>
int main()
{
    int N;
    scanf("%d", &N);
    for(int i = 1; i <= N; i++)
    {
        printf("%d ", i);
    }
    for (int i = N; i <= 0; i++)
    {
        printf("%d ", i);
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