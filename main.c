#include <stdio.h>

int main(void)
{
    char userName[100];
    printf("Enter your name: ");
    scanf("%s", userName);
    printf("Hello %s\n", userName);
    return 0;
}