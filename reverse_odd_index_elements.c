/*
https://www.hackerrank.com/contests/assignment-02-a-introduction-to-c-programming-a-batch-08/challenges/reverse-and-odd/submissions/code/1399156514
*/

/*
Problem Statement
You will be given a positive integer N and an array A of size N. Suppose, the index starts from 0, then you need to print all the values at odd indexes in reverse way.
*/
/*
Sample Input :
5
10 20 30 40 50
Sample Output :
40 20 
*/
// 1st way
#include<stdio.h>
int main()
{
    int N; 
    scanf("%d", &N);
    int A[N];
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    for(int i = N-1; i >= 0; i = i-2 )
    {   
        
        if (i % 2 != 0)
        {
            printf("%d ", A[i]);
        }
        else 
        {
            i--;
            printf("%d ", A[i]);
        }
    }


    return 0;
}

// 2nd way
#include<stdio.h>
int main()
{
    int N; 
    scanf("%d", &N);
    int A[N];
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    for(int i = N-1; i >= 0; i--)
    {   
        
        if (i % 2 != 0)
        {
            printf("%d ", A[i]);
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