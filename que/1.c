// write a c program to display the n terms of square natural number and their sum suppose n you have entered is 3 then it should print 1 4 9 and sum is 14

#include<stdio.h>

int main() {
    int a;
    printf("Enter number: ");
    scanf("%d", &a);
    printf("");
    printf("%d\n", a);
    for(int i = 1; i<=a; i++){
        printf("%d\n", i*i);
    }
    return 0;
}