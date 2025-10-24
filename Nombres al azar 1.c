#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 
enum {
    Bruno, 
    Jair,
    Gael,
    Bryan, 
    Carlos 
}; 
int main()
{ 
    srand (time(NULL)); 
    int alumno = rand() % 5; 
    switch(alumno) 
    { case Bruno: 
    printf("%d. Bruno\n", alumno); 
    break;
     case Jair: 
    printf("%d. Jair\n", alumno); 
    break; 
     case Gael: 
    printf("%d. Gael\n", alumno); 
    break; 
     case Bryan: 
    printf("%d. Bryan\n", alumno); 
    break;
    case Carlos: 
    printf("%d. Carlos\n", alumno); 
    break;
    return 0;
    }
}