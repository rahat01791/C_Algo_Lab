/*
Problem Statement :
You will be given test-case and string S as input. The string will contain only English small alphabets and will not contain any spaces. You need to tell how many time each alphabets from a to z appears. But if the count is zero, you don't need to prin that.
*/

/*
Sample Input :
1
thefoxisbrave

Sample Output :
a - 1
b - 1
e - 2
f - 1
h - 1
i - 1
o - 1
r - 1
s - 1
t - 1
v - 1
x - 1
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
#include<string.h>
int main()
{
    int Test_case;
    scanf("%d", &Test_case);
    /*int String_lenth = strlen(input_string); it line is optinal. If we used the "input_string[i] != '\n'" */
    int Store_small_alphabets[26] = {0};
    for (int i = 1; i <= Test_case; i++)
    {
        char input_string[10000]; //declare character array with size;
        scanf("%s", &input_string); // input from user;
        
        for (int i = 0; input_string[i] != 0; i++) // loop 0 to input_string vlue;
        {
            if(input_string[i] >= 'a' && input_string[i] <= 'z') 
            {
                Store_small_alphabets[input_string[i] - 'a']++; 
            }
            else if (input_string[i] >= 'A' && input_string[i] <= 'Z') 
            {
                Store_small_alphabets[input_string[i] - 'A']++; 
            }
            else
            {
                printf("You enter the wrong key\n");
                break;
            }
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (Store_small_alphabets[i] > 0)
        {
            printf("%c - %d\n", 'a' + i,Store_small_alphabets[i]);
        }
    }
}

