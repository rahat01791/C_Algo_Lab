/*
https://www.hackerrank.com/contests/assignment-02-a-introduction-to-c-programming-a-batch-08/challenges/update-and-print/submissions/code/1399182722
*/

/*
Problem Statement
You will given a positive integer N and an array A of size N. Also you will be given two values X and V. You need to change the value of X'th index to V and then print the array in reverse way.
*/

/*
Sample Input :
5
10 20 30 40 50
1 100
Sample Output :
50 40 30 100 10 

Explanation :
After updating the value of 1st index, the array will become 10 100 30 40 50.
The reverse order will be 50 40 30 100 10.
*/



#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int A[N];
    
    
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    
    int x;
    scanf("%d", &x);
    int v;
    scanf("%d", &v);
    A[x]= v;
    
    for (int i = N - 1; i >= 0; i--)

    {        
        printf("%d ", A[i]);
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