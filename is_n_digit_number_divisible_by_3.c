/*
Given a number of digits N, and a number of N digits, determine whether the number is divisible by 3. Note: Recall that a number is divisible by 3 if the sum of its digits is divisible by 3.
*/

/*
Sample Input :
5
12345

Sample Output :
YES
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
int main()
{
    
    int N;
    scanf("%d", &N);
    char num[N];
    scanf("%s", &num); 
        
    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        sum += num[i] - '0';

    }
    if (sum % 3 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");

    }
    return 0;
}
