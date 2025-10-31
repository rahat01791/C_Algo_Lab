/*
Babul is learning about vowels and consonants. Now he wants you to write a program for him where he can give a letter and the program will tell if it's a vowel or a consonant. He has given you the list of vowels to help you. (The vowels are a, e, i, o and u).
*/

/*
Sample input :
a
Sample Output :
Vowel
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
    char input_letter;
    scanf("%c", &input_letter);
    if (input_letter >= 'a' && input_letter <= 'z' || input_letter >= 'A' && input_letter <= 'Z')
    {
        if(input_letter == 'a'|| input_letter == 'e'|| input_letter == 'i'|| input_letter == 'o'|| input_letter ==  'u')
        {
            printf("Vowel");
        }
        else if(input_letter == 'A'|| input_letter == 'E'|| input_letter == 'I'|| input_letter == 'O'|| input_letter ==  'U')
        {
            printf("Vowel");
        }
        else
        {
            printf("Consonant");
        }
    }

    return 0;
}