#include <stdio.h>

int main()
{
    int c, i, nother;
    while ((c = getchar()) != EOF) {
        if (c == ' ' | c == '\n' | c == '\t') {
            for (i=0; i < nother; ++i)
                printf("%s", "-");
            printf("%s %d\n", " ", nother);
            nother = 0;
        }
        else
            ++nother;
        }

}
