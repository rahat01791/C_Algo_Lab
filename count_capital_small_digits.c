/*
https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-08/challenges/count-me-3/submissions/code/1399442378
*/
/*
You will be given a string S. The string will contain small and capital English alphabets and digits only. You need to tell how many of them are capital alphabets, how many are small alphabets and how many are digits.
**Input Format :
First line will contain T, the number of test cases.
Each test case will contain only S.
*/
/*
Sample Input :
2
theFox25IsBrave
ILoveYou100TimesAndSay2Also

Sample Output :
3 10 2
7 16 4
*/

#include<stdio.h>
#include<string.h>
int main()
{
    int T;
    scanf("%d", &T);
    char S[10001];
    int string_length;
    for(int i = 1; i <= T; i++)
    {
        scanf("%s", &S);
        string_length = strlen(S);
        int count_A = 0;
        int count_a = 0;
        int count_1 = 0;

        for(int i = 0; i <= string_length; i++)
        {

            if(S[i] >= 'A' && S[i] <= 'Z' )
            {
                count_A++;
            }

            if (S[i] >= 'a' && S[i] <= 'z')
            {
                count_a++;
            }
        
            else if (S[i] >= '0' && S[i] <= '9')
            {
                count_1++;
            }
        
        }
    printf("%d %d %d\n", count_A , count_a, count_1);

    }   

}



/*
Hackerrank profile link:
https://www.hackerrank.com/profile/rshf01791
*/

/*
Codechef profile link :
https://www.codechef.com/users/rahat01791
*/

/*
Codeforces profile link :
https://codeforces.com/profile/RAHAT01791
*/
