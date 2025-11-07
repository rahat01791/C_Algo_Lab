/*
You will be given an array A and the size of that array N. Take input in the main function. You need to write a function named count_before_one() which receives that array of integers and the size of that array and return type will be integer. The function counts the number of elements in that array until you find 1 and returns that count. Print that count in the main function.
*/

/*
Sample Input :
5
5 4 3 1 2
Sample Output :
3
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
int count_before_one(int A[],int N)
{
    int count = 0;
    for(int i = 0; i < N; i++)
    {
        if(A[i] == 1)
        {
            break;
        }
        count++;
    }
    return count;
}
int main()
{
    int N;
    scanf("%d", &N);
    int A[N];
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    int c =count_before_one(A,N);
    printf("%d\n",c);
    
    return 0;
}