/*
You will be given a string, S, as input. Take this input in the main function. Next, write a function named is_palindrome() that will receive this string. Return type of that function will be integer. The function checks whether the string is a palindrome or not. If it is a palindrome, return 1; otherwise, return 0. Receive this value in the main function and, with the help of that value, print "Palindrome" or "Not Palindrome". Palindrome: A palindrome is a word that reads the same forward and backward.
*/

/*
Sample input :
madam
Sample Output :
Palindrome
*/

/*
Sample input :
rahat
Sample Output :
Not Palindrome
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
int is_palindrome(char str[])
{
    int str_len = strlen(str);
    str_len--;
    char rev[1001];
    
    for (int i = str_len; i >= 0; i--)
    {
        rev[str_len  - i] = str[i];
    }
    rev[str_len] = '\0';

    int rev_len = strlen(rev);
    for(int i = 0; i < rev_len; i++)
    {
        if(rev[i] != str[i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char str[1001];
    scanf("%s", &str);

    if(is_palindrome(str))
    {
        printf("Palindrome");
    }

    else
    {
        printf("Not Palindrome\n");
    }
    
    return 0;
}