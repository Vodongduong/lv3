#include <stdio.h>
#include <stdlib.h>

void main ()
{
    char t[100];
    printf ("Nhap ten ban : ");
    scanf ("%s", &t);
    int i;
    for (i =0;i<10;i++)
        printf ("\n%s\n", t);

        printf ("//////////////////////////////////////");

        i=0;
        while (i<10)
        {
            printf ("\n%s\n", t);
            i++;
        }
        printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\");
        i =0;
        do
        {
            printf ("\n%s\n", t);
            i++;
        }
        while (i<10);
}
