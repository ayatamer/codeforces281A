#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    char word[1000];
    gets(word);
    if(word[0]>96)
        word[0]=word[0]-32;
    printf("%s",word);
    return 0;
}
