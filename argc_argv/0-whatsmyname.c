#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
        int i;

        for(i=0; i < argc; i++)
        {
                printf("%s", argv[i]);
        }
        putchar('\n');
        return (0);
}