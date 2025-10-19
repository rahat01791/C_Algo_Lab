/*YouTube chalene from Apna collage
https://www.youtube.com/watch?v=irqbmMNs2Bo
*/
/*
Code + Notes + Practice Sheet : https://drive.google.com/drive/folders/1SEfL7Yw3nJfVLToz9MAuAm2_NoCCk1qD
*/
/*
Write a function that prints 'Namaste' if user is Indian & 'Bonjour' if the user is French.
*/
/*
Sample Input :
i
f
Sample Output :
Namaste
Bonjour
*/



#include<stdio.h>        
void Namaste();//declaration/prototype
void Bonjour();
int main(){   
    printf("Enter the f for French or i for Indian = ");
    char a ;
    scanf("%c", &a);
    printf("%c\n", a);
    
    if(a == 'i')
    {
        Namaste();
    }
    else if ( a == 'f')
    {
        Bonjour();
    }
    else
    {
        printf("comand is not found");
    }
    return 0;
}
void Namaste()
{
    printf("Namaste");
}
void Bonjour()
{
    printf("Bonjour");
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