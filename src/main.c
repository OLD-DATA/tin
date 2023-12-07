#include <stdio.h>

int main(int argc, char *argv[])
{
    char *filename = argv[1];
    FILE *fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Error: could not open file %s \n", filename);
        return 1;
    }

    char ch;
    while ((ch = fgetc(fp)) != EOF){
        putchar(ch);
    }
    printf("\n");
    // close the file
    fclose(fp);

    return 0;
}
