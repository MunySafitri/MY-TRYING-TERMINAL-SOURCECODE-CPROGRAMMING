#include <stdio.h>
#include <time.h>


int main ()
{
    time_t start, end;
    int i, seconds;


    start = time (NULL);


    printf ("How much is 2+2? ");
    scanf ("%d", &i);


    end = time (NULL);
    
    seconds = end - start;


    if (seconds > 5)
        printf ("Sorry, you were too slow.\n");
    else if (i==4)
        printf ("That's correct.\n");
    else
        printf ("Wrong.\n");


    return 0;
}
