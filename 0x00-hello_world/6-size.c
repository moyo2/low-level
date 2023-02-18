#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Using sizeof to print the size of various types.
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
    /* sizeof evaluates the size of a variable */
    printf("Size of a char: %lu byte(s)\n", sizeof(char));
    printf("Size of an int: %lu byte(s)\n", sizeof(int));
    printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
    printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
    printf("Size of a float: %lu byte(s)\n", sizeof(float));

#ifdef __LP64__
    printf("Size of a double: %lu byte(s)\n", sizeof(double));
#else
    printf("Size of a double: %lu byte(s)\n", sizeof(long double));
#endif

    return (0);
}
