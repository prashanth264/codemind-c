#include<stdio.h>
int main()
{
    char c;
    int lw,up;
    scanf("%c",&c);
    lw=(c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    up=(c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
    if(lw || up)
    {
        printf("VOWEL");
    }
    else
    {
        printf("CONSONANT");
    }
}