/*
Chef in his Office

Recently Chef joined a new company. In this company, the employees have to work for X hours each day from Monday to Thursday. Also, in this company, Friday is called Chill Day - employees only have to work for Y hours '(Y < X)' on Friday. Saturdays and Sundays are holidays.
Determine the total number of working hours in one week.
*/

/*Sample input
3
10 5
12 2
8 7

output
45
50
39
*/
/*https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/OFFICE*/

#include<stdio.h>
int main (){
    int T;
    scanf("%d", &T);
    for (int i= 1; i<=T; i++) 
    {
        int X;
        scanf("%d", &X);
        int Y;
        scanf("%d",&Y);
        printf("%d\n",(X*4)+Y);
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
