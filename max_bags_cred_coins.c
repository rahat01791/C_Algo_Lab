/*
For each bill you pay using CRED, you earn X CRED coins. At CodeChef store, each bag is worth 100 CRED coins. Chef pays Y number of bills using CRED. Find the maximum number of bags he can get from the CodeChef store.
*/
/*
Input Format
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, two integers X and Y.
*/

/*
Input :
3
10 10
20 4
70 7
Output :
1
0
4
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
    int Test_case;
    scanf("%d", &Test_case);
    int EARN_CRED_COINS, BILLS_USING_CRED;

    int CRED_COINS = 100;

    for(int i = 1; i <= Test_case; i++)
    {
        scanf("%d %d", &EARN_CRED_COINS, &BILLS_USING_CRED);
        

        int output_vlue = ((EARN_CRED_COINS * BILLS_USING_CRED) / CRED_COINS);
        if(output_vlue >= 1)
        {
            printf("%d\n", output_vlue);
        }
        else
        {
            printf("0\n");
        }
        
    }

    return 0;
}