#include <stdio.h>
#include <time.h>
#include <conio.h>  
#include <windows.h>


int main ()
{
    time_t start, now,end;
    int i, ok=0,seconds;


    start = time (NULL);

    gotoxy(15,12);
    printf ("How much is 2+2? ");
    fflush(stdout);
    ok=scanf ("%d", &i);

    now = start;
    gotoxy(10,10);
    printf("Time remaining: ");
    fflush(stdout);
    while(!ok) {
       gotoxy(10,26);
       now = time(NULL);
       printf(" %d ", 5 - (now-start));
       fflush(stdout);
       gotoxy(15,12);
       //use delay(), (Sleep() in MS Windows), to give a 1/5th of a 
       //second delay or so. The timer (and there are other ways to 
       //make a timer), should show the time (at 10,10), about 3-5 times 
       //per second. Since it's in the same spot each time, it looks good.
       //then the cursor return immediately to 10,26, to get user's input.
       //and naps just a bit. 
       end = time (NULL);
       
       seconds = now - start;
       if (seconds>4)
           break;
    }
    if (seconds > 5)
        printf ("Sorry, you were too slow.\n");
    else if (i==4)
        printf ("That's correct.\n");
    else
        printf ("Wrong.\n");


    return 0;
}
