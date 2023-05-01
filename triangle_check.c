#include <cs50.h>
#include <stdio.h>

bool valid_triangle(int a, int b, int c);

int main(void)
{
    // Get user input
    printf("Input the length of three sides of a triangle:\n");
    int a = get_int("Side A: ");
    int b = get_int("Side B: ");
    int c = get_int("Side C: ");

    // Check if triangle is valid
    valid_triangle(a, b, c);

    return 0;
}

bool valid_triangle(int a, int b, int c)
{
    // Check for positive sides
    if ( a <= 0 || b <= 0 || c <= 0 )
    {
        printf("Invalid triangle\nSide's length must be positive\n");
        return false;
    }
    // Check that a + b is greater than the third side
    if ((a + b <= c) || (a + c <= b) || (b + c <= a))
    {
        printf("Invalid triangle\nThe sum of any two sides must be greater than the length of the third side\n");
        return false;
    };
    // IF we passed both tests, we're good!
    printf("Valid triangle\n");
    return true;
}
