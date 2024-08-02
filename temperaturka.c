#include <stdio.h>

int tempa(int m);
int main() {
    int i;
    for (i = 0; i <= 300; i = i + 20)
        printf("%d %d\n", i, tempa(i));
    return 0;
}

int tempa(int cel)
{
    int fahr;
    fahr = cel * 9/5 + 32;
    return fahr;
}

