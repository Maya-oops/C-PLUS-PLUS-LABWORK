#include <stdio.h>

// Call by value
void callByValue(int x)
{
    x = x + 10;
    printf("Inside callByValue: x = %d\n", x);
}

// Call by reference
void callByReference(int *x)
{
    *x = *x + 10;
    printf("Inside callByReference: x = %d\n", *x);
}

int main()
{
    int a = 20, b = 20;

    printf("Before callByValue: a = %d\n", a);
    callByValue(a);
    printf("After callByValue: a = %d\n\n", a);

    printf("Before callByReference: b = %d\n", b);
    callByReference(&b);
    printf("After callByReference: b = %d\n", b);

    return 0;
}
