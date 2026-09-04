#include<stdio.h>
using namespace std;
int main()
{
    int n=5;
    int i,j;

    // 1 - Numeric Pattern
    printf("\n1 - Numeric Pattern\n\n");

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    // 2 - Lowercase Alphabet Pattern
    printf("\n2 - Lowercase Alphabet Pattern\n\n");

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%c" ,'a'+j-1);
        }
        printf("\n");
    }

    // 3 - Uppercase Alphabet Pattern
    printf("\n3 - Uppercase Alphabet Pattern\n\n");

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%c" ,'A'+j-1);
        }
        printf("\n");
    }

    // 4 - Right Half Number Triangle
    printf("\n4 - Right Half Number Triangle \n\n");

    for(i=1; i<=n; i++)
    {
        //Spaces
        for(j=i; j<n; j++)
        {
            printf("  ");
        }
        //Numbers
        for(j=1; j<=i; j++)
        {
            printf("%d " , j);
        }
        printf("\n");
    }

     // 5 - Full Number pyramid
    printf("\n5 - Full Number pyramid\n\n");

    for(i=1; i<=n; i++)
    {
        //Spaces
        for(j=i; j<n; j++)
        {
            printf("  ");
        }
        // Increasing numbers
        for(j=1; j<=i; j++)
        {
            printf("%d " , j);
        }
        //Decreasing numbers
        for(j=i-1; j>=1; j--)
        {
            printf("%d " , j);
        }
        printf("\n");
    }

      // 6 - Full Alphabet pyramid
    printf("\n6 - Full Alphabet pyramid\n\n");

    for(i=1; i<=n; i++)
    {
        //Spaces
        for(j=i; j<n; j++)
        {
            printf("  ");
        }
        // Increasing alphabets
        for(j=1; j<=i; j++)
        {
            printf("%c " ,'A'+ j-1);
        }
        //Decreasing alphabets
        for(j=i-1; j>=1; j--)
        {
            printf("%c " , 'A'+j-1);
        }
        printf("\n");
    }
    return 0;
}
