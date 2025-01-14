#include <stdio.h>
#include <ctype.h>

int main()
{

    char c;
    do
    {
        scanf("%c", &c);

        c = toupper(c);
        if(c == isalpha(c)){
        c = c + 5;
        printf("%d", c);
        }
        else if(c != isalpha)
        printf("%d", c);
        
        
           
        

    } while (c != '\n');
}