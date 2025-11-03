/*
You are given two strings S1, S2 and two integers - start and end. Your task is to take the characters from the second string (S2), starting at index start and ending at index end (inclusive), and add them to the end of the first string(S1).
All indices are 0-based.
*/

/*
Input :
hello
world
2 4
*/
Output :
hellorld
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
    char string_1[1000];
    scanf("%s", string_1);
    char string_2[1000];
    scanf("%s", string_2);

    int index_starting;
    scanf("%d", &index_starting);

    int index_ending;
    scanf("%d", &index_ending);
    
    char fre[1000];
    int index_count = 0;
    for(int i = index_starting; i <= index_ending && string_2[i] != '\0'; i++)
    {
    
        fre[index_count] = string_2[i];
        index_count++;
        fre[index_count] = '\0';
    }
   

    printf("%s%s\n",  string_1, fre);

    return 0;
}

