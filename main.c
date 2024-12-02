#include <stdio.h>
#include <string.h>

int main(void)
{
    char userName[100];
    printf("Enter your name: ");
    scanf("%s", userName);
    printf("Hello %s\n", userName);

    printf("What day is it? ");
    char day[15];
    scanf("%s", day);


    if(strcmp(day, "Saturday") == 0)
    {
        printf("It's Saturday!\n");
    }
    else if(strcmp(day, "Sunday") == 0)
    {
        printf("It's Sunday!\n");
    }
    else
    {
        printf("It's not a weekend ☹️\n");
    }
    return 0;
}