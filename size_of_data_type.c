#include <stdio.h>
int main()
{
    int a;
    float b;
    char c;
    long int d;
    short int e;
    double f;
    long double g;
    long double h;
    printf("The size of int is %d\n", sizeof(int));
    printf("The size of float is %d\n", sizeof(b));
    printf("The size of char is %d\n", sizeof(c));
    printf("The size of long int is %d\n", sizeof(d));
    printf("The size of short int is %d\n", sizeof(e));
    printf("The size of double is %d\n", sizeof(f));
    printf("The size of long double is %d\n", sizeof(g));
    printf("The size of long long double is %d\n", sizeof(h));
    return 0;
}