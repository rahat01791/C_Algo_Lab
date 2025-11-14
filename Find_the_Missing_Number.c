/*
    Problem Statement  :  
    Given the multiplication of four numbers and three of those numbers, find the missing number.
    Note: If the missing number could not be found for the given input, print -1. All numbers are non-negative integers.

    Input Format :
    • The first line will contain T, number of test cases.
    • For every test case, the input will contain one integer M (the multiplication of the four numbers), A, B, C   (three of those four numbers).

    Constraints :
    1 < T <= 100000
    0 <= M <= 10^18
    1 <= A, B, C <= 10^6

    Output Format :
    Print the missing number. Don't forget to print a new line after it.
    Sample Input 0
*/

/*
    Sample Input :   |  Sample Output :
    4                |  
    20 1 2 2         |  5
    10 2 2 1         |  -1      
    1 1 2 3          |  -1
    0 3 10 15        |   0
   _____________________________________
   
    Sample Input :   |  Sample Output :
    3                |  
    20 5 1 1         |  4
    10 2 3 3         |  1      
    0 10 20 30       |  0

*/

/*
    Author: MD RAHAT
    Linkedin:   https://www.linkedin.com/in/md-rahat-59b4b238b/
    GitHub:     https://github.com/rahat01791
    Hackerrank: https://www.hackerrank.com/profile/rshf01791
    Codeforces: https://codeforces.com/profile/RAHAT01791
    Leetcode:   https://leetcode.com/u/rahat01791/
    CodeChef:   https://www.codechef.com/users/rahat01791
    CodeChef:   https://www.codechef.com/users/rahat_01791
*/


#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);


    for(int i = 1; i <= T; i++)
    {

        long long int a;
        scanf("%lld", &a);

        long long int b,c, d;
        scanf("%lld %lld %lld", &b, &c, &d);

        long long int e = b * c * d;
        
        if(a % e == 0)
        {
            printf("%lld\n", a / e);
        }
        else
        {
            printf("-1\n");
        }
    
    }

    return 0;
}