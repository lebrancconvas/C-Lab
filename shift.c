#include<stdio.h>

int main()
{
    FILE *file;
    int shift;
    char s[10];
    file = fopen("cipher.txt","r");
    fscanf(file,"%d",&shift);
    fscanf(file,"%s",s);
    fclose(file);
    printf("%c",((s[0]-'A'-shift)+26)%26+'A');
    return 0;
}
