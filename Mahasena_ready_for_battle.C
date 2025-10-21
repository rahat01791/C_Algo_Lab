/*
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AMR15A
*/
/*
*Mahasena*
Kattapa, as you all know was one of the greatest warriors of his time. The kingdom of Maahishmati had never lost a battle under him (as army-chief), and the reason for that was their really powerful army, also called as Mahasena.

Kattapa was known to be a very superstitious person. He believed that a soldier is "lucky" if the soldier is holding an even number of weapons, and "unlucky" otherwise. He considered the army as "READY FOR BATTLE" if the count of "lucky" soldiers is strictly greater than the count of "unlucky" soldiers, and "NOT READY" otherwise.

Given the number of weapons each soldier is holding, your task is to determine whether the army formed by all these soldiers is "READY FOR BATTLE" or "NOT READY"
*/
/*
Sample Input :
1
1
Sample Output :
NOT READY
*/




#include<stdio.h>
int main()
{
    int Testcase;
    scanf("%d", &Testcase);
    int Soldier_number_of_weapons;

    int lucky = 0;
    int unlucky = 0;
    for(int i = 1; i <= Testcase; i++)
    {
        scanf("%d", &Soldier_number_of_weapons);
        if ( Soldier_number_of_weapons % 2 == 0 )
        {
            lucky++;
            
        }

        else
        {
            unlucky++;
        }
    }
    


    if(lucky > unlucky)
    {
        printf("READY FOR BATTLE");
    }

    else
    {
        printf("NOT READY");
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