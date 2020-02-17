#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int s, totalPages, forgottenPage;
    int triangularNumber;

    while(scanf("%d", &s) && (s != 0))
    {
        totalPages = (-1 + sqrt(1 + 8 * s))/2;
        triangularNumber = (totalPages * (totalPages +1))/2;
        if(triangularNumber == s)
            printf("%d %d\n", totalPages + 1,totalPages + 1);
        else
        {
            forgottenPage = ((totalPages + 1) * (totalPages + 2))/2 - s;
            printf("%d %d\n", forgottenPage, totalPages +1);
        }
    }
    return 0;
}
