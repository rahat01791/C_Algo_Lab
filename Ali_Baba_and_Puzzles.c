/*
One day, Ali Baba had an easy puzzle that he couldn't solve. The puzzle consisted of 4 numbers and his task was to check whether he could get the fourth number using arithmetic operators (+,−,×
) between the other three numbers; so that each operator is used only once.

                            a□b□c=d

Can you solve this tricky puzzle for him?
Input :
Only one line containing four numbers a, b, c and d (−109≤a,b,c≤109),−1018≤d≤1018).

Output :
Print "YES" (without quotes) if you get the fourth number using arithmetic operators, otherwise, print "NO" (without quotes).

Examples
Input :
3 4 5 23

Output : 
YES

Input :
9 5 3 7

Output :
YES

Input :
1 2 3 1

Output :
NO

*/


#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    int d;
    scanf("%d", &d);

    int a_1 = a + b * c == d;
    int a_2 = a + b - c == d;
    int a_3 = a - b * c == d;
    int a_4 = a - b + c == d;
    int a_5 = a * b + c == d;
    int a_6 = a * b - c == d;

    
    printf((a_1 || a_2 || a_3 || a_4 || a_5 || a_6 )?"YES" : "NO");
/*
    if(a_1)
    {
        printf("YES");
    }
    
    
    else if(a_2)
    {
        printf("YES");
    }
    

    else if(a_3)
    {
        printf("YES");
    }
    

    else if(a_4)
    {
        printf("YES");
    }
    

    else if(a_5)
    {
        printf("YES");
    }
    

    else if(a_6)
    {
        printf("YES");
    }

    else
    {
        printf("NO");
    }
    
*/
    return 0;
}
