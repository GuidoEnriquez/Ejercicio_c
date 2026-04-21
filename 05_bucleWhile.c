#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 1;

   while (i <= 6)
   {
    int j = 1;

    while (j <= 6)
    {
        printf("(%d, ", i);
        printf("%d)", j);
        printf("\n");
        j++;
    }
    printf("\n");
    i++;
   }
   
    return 0;
}
