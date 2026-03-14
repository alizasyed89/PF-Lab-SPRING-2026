#include <stdio.h>

int main()
{
    char str[100];
    int i=0;

    printf("Enter characters:\n");
    scanf("%[^\n]", str);

    printf("Non alphabet characters: ");

    while(str[i] != '\0')
    {
        if(!( (str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z') ))
        {
            printf("%c", str[i]);
        }
        i++;
    }

    return 0;
}