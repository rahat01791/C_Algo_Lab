/*
https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-08/challenges/count-me-2-2/submissions/code/1399386516
*/  
/*
You will be given a string S as input contains only small English alphabets. You need to tell the number of consonants in it. The string will not contain any spaces.

**Note: Vowels are a,e,i,o and u. The rest are called consonants.
*/

/*Sample input
thefoxisgone

output
7
*/


#include<stdio.h>
#include<string.h>
int main()
{
    char S[100001];
    scanf("%s", &S);
    int slenth = strlen(S);

    int count = 0;

    for(int i = 0; i < slenth; i++)
    {
        if (S[i] == 'a')
        {
            continue;
        }
        if(S[i] == 'e')
        {
            continue;
        }
        if(S[i] == 'i')
        {
            continue;
        }
        if(S[i] == 'o')
        {
            continue;
        }
        if(S[i] == 'u')
        {
            continue;
        }
        else
        {
            count++;
        }
    }
    printf("%d", count);

    return 0;
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
