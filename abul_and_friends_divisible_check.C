/*
Abul is angry, last time he went to eat with Babul and Bablu, he had to pay more than them as the bill was not divisible by three.
Now he wants to know which numbers from 1 to N is divisible by 3. Also he has 2 more friends so in case they all 5 go to eat some where, he needs to know which numbers from 1 to N are divisible by 5 as well.
He knows you are a programmer, so he wants your help. He will tell you a number N, you have tell him which numbers are divisible by 3 or 5 from 1 to N.
*/

/*
Sample Input :
15
Sample Output :
1 No
2 No
3 Yes
4 No
5 Yes
6 Yes
7 No
8 No
9 Yes
10 Yes
11 No
12 Yes
13 No
14 No
15 Yes
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
    int bill;
    scanf("%d", &bill);
    for (int i = 1; i <= bill; i++)
        {
        if (i % 3 == 0)
        {
            printf("%d Yes\n", i);
        }
        else if (i % 5 == 0)
        {
            printf("%d Yes\n", i);
        }
        else
        {
            printf("%d No\n", i);
        }
    }
}