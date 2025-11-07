/*
Author: MD RAHAT
GitHub: https://github.com/rahat01791
Hackerrank: https://www.hackerrank.com/profile/rshf01791
Codeforces: https://codeforces.com/profile/RAHAT01791
Leetcode: https://leetcode.com/u/rahat01791/
CodeChef: https://www.codechef.com/users/rahat01791
CodeChef: https://www.codechef.com/users/rahat_01791
*/

/*
Problem Statement :
You will be given a positive integer N, you need to print a pattern shown below using this N.
*/
/*
Sample Input 2
5
Sample Output 2

    1
   21
  321
 4321
54321
*/

#include<stdio.h>
int main()
{
    int N; 
    int num = 1;
    scanf("%d", &N);
    int space = N - 1 ;

    for(int i = 1; i <= N; i++)
    {

        for(int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for(int j = num; j >= 1; j--)
        {
        
            printf("%d" , j);
        }
        printf("\n");
        num++;
        space--;
        
    }
    return 0;

}
