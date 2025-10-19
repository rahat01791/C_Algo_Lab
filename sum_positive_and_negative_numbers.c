/*
https://www.hackerrank.com/contests/assignment-02-a-introduction-to-c-programming-a-batch-08/challenges/sum-sum-2/submissions/code/1399183799
*/

/*
Problem Statement
You will be given a positive integer N and N numbers after that. You need to tell the sum of positive numbers and the sum of negative numbers separated by a space.
*/

/*
Sample Input :
6
5 -3 9 -10 2 8 
Sample Output :
24 -13
*/


#include<stdio.h>
#include<limits.h>
int main()
{
    int sum = 0;
    int sum_1 =0;
    int T;
    scanf("%d", &T);
    int N;
    
    for(int i = 1; i <= T; i++)
    {
        scanf("%d", &N);
        if (N > 0)
        {
            sum = sum + N;
        }
        if ( N < 0)
        {
            sum_1 = sum_1 + N;
        }

    }
    printf("%d ", sum);
    printf("%d ", sum_1);
    
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