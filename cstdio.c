#include <stdio.h>

int main()
{
    int c;
    FILE *fp;
    
    fp = fopen("database1/data.txt","r");
    
    if (fp)
    {
        while(feof(fp) == 0)
        {
            c = fgetc(fp);
            putchar(c);
        }
    }
    else
        perror("File opening failed");
    fclose(fp);
    return 0;
}
