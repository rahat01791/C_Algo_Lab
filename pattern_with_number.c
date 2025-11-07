#include<stdio.h>
int main()
{
    int N; 
    int num = 1;
    scanf("%d", &N);
    int space = N - 1 ;

    for(int i = 1; i <= N; i++)
    {

        for(int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for(int j = num; j >= 1; j--)
        {
        
            printf("%d" , j);
        }
        printf("\n");
        num++;
        space--;
        
    }
    return 0;
}