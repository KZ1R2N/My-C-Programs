#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char b, *ptr;
    char a[8][4] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    int test, len, i, i2, i3, Case = 0;
    scanf("%d", &test);

    ptr = (char *)malloc(1000 * sizeof(char));

    while (test--)
    {
        scanf(" %s", ptr);
        printf("Case %d:\n", ++Case);
        for (i3 = 0; *(ptr + i3) >= 'a' && *(ptr + i3) <= 'z'; i3++)
        {
            for (i = 0; i <= 7; i++)
            {
                for (i2 = 0; i2 < 4; i2++)
                {

                    if (*(ptr + i3) == a[i][i2])
                    {
                        printf("%d-%d times\n", i + 2, i2 + 1);
                        break;
                    }
                }
            }
        }
    }
    return 0;
}