/*
    A number of two digits is lucky if one of its digits is divisible by the other.
    For example, 39, 82, and 55 are lucky, while 79 and 43 are not.
    Given a number between 10 and 99, determine whether it is lucky or not.

    Input :
    Only one line containing a single number N(10≤N≤99).

    Output :
    Print "YES" if the given number is lucky, otherwise print "NO".
*/

/*
    Examples 
___________________
    Input :
    39
    Output :
    YES
___________________
    Input :
    64
    Output :
    NO
____________________
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

#include <stdio.h>

int main() {
    char number[1001];
    scanf("%s", number);

    int x, y;
    for(int i = 0; number[i + 1] != '\0'; i++) {
        x = number[i] - '0';
        y = number[i + 1] - '0';

        if(y == 0) continue; // divide by zero safety
        printf("%s\n", (y % x == 0) ? "YES" : "NO");
    }
    return 0;
}

