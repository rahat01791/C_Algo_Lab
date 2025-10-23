/*
https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-08/challenges/count-me-2-1/submissions
*/
/*
You will be given an integer array A of size N. You need to count the number of elements that are divided by 2 and number of elements that are divided by 3. If any number is divided by both 2 and 3, then consider it only for 2.
*/
/*
Sample Input :  
5
1 4 2 5 3
Sample Output :
2 1

Sample Input : 
4
6 9 12 15
Sample Output :
2 2
*/


#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int A[N];
    int count_2 = 0;
    int count_3 = 0;
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
        if(A[i] % 2 == 0)
        {
            count_2++;
        }
        else if (A[i] % 3 == 0)
        {
            count_3++;
        }
    }
    printf("%d ", count_2);
    printf("%d ", count_3);
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
