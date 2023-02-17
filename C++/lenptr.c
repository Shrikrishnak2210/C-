#include<stdio.h>
#include<string.h>
int main()
{
    int length;
    char text[20],*text_ptr;
    text_ptr = text;
    printf("Enter text \n");
    gets(text);
    while(*text_ptr != '\0')
    {
        putchar(*text_ptr++);
    }
    length = text_ptr - text;
    printf("Length of the text is = %d",length);
    return 0;
}