/*
Problem Statement :
You will be given an array A, and the size of that array N. You need to write a function named odd_even() and take input inside that function. The function won't return anything. You need to count the number of even values and number of odd values in that array and print inside the function.
*/

/*
Sample Input :
5
1 2 3 4 5
Sample Output :
2 3
*/

/*
Author: MD RAHAT
GitHub: https://github.com/rahat01791
Hackerrank: https://www.hackerrank.com/profile/rshf01791
Codeforces: https://codeforces.com/profile/RAHAT01791
Leetcode: https://leetcode.com/u/rahat01791/
CodeChef: https://www.codechef.com/users/rahat01791
CodeChef: https://www.codechef.com/users/rahat_01791
*/

#include<stdio.h>
void odd_even()
{
    int N;
    scanf("%d", &N);
    int A[N];

    int count = 0;
    int count_1 = 0;
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    
    for(int i = 0; i < N; i++)
    {
        if(A[i] % 2 == 0)
        {
            count++;
        }

        else
        {
            count_1++;
        }
    }
    printf("%d %d", count, count_1);
}

int main()
{
    odd_even();
    
    return 0;
}