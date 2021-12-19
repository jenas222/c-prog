#include <stdio.h>
#include <math.h>
#include <time.h>



int main()
{
  srand(time(NULL));
char a;

for (int i = 0; i < 20; i++)
    {
        
        a = rand() % 26 + 65;
       
        
       
        printf("%c", a);

    }
 
 
    return 0;
}