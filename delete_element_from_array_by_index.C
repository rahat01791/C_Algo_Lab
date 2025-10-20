/*
9-5 Insert a value in an array implementation from phitron.io :
https://phitron.io/ph028/video/ph028-9-5-removing-a-value-in-an-array-idea
*/
/*
Write a program that takes an integer N as input. Then take an array of size N as input. After that, take an index number as input. Delete the element from the array at that index and print the updated array.
*/
/*
Sample Input:
5
10 20 30 40 50
2
Output :
10 20 40 50
*/


#include<stdio.h>
int main()
{   
    
    int N;
    scanf("%d", &N);
    int Arr[N];
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &Arr[i]);
    }
    int index;
    scanf("%d", &index);
    for(int i = index; i < N -1; i++)
    {
        
        Arr[i] = Arr[i + 1]; 
    
    }
    for(int i = 0; i < N + 1; i++)
    {
        Arr[index] == Arr[i];
        continue;
    }
    N--;
    for(int i = 0; i < N + 1; i++)
    {

        printf("%d ", Arr[i]);
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
