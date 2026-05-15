#include <stdio.h>

int main() {
    int a;
    double b;
    char c;
    printf("Hi My name is computer\n");
    printf("\nPlease enter Your name :");
    scanf("%s",&c);
    printf("\nHi %s,Please enter your age: ");
    scanf("%d",&a);
    printf("\nHi %s, Your age is %d",c,a);
    printf("Please enter your grade:");
    scanf("%lf",&b);
    printf("\nHi %s , Your age is %d and your grade is %lf",c,a,b);
    return 0;
}
