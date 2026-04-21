#include <stdio.h>
int main(int argc, char const *argv[])
{
    int count = 6;

    for ( int i = 1; i <= count; i++)
    {
        for (int j = 1; j <= count; j++)
        {
            printf("(%d, ", i);
            printf("%d)", j);
            printf("\n");
        }
        printf("\n");
        
    }
    
    return 0;
}
