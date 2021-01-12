#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define LINE_MAX 1024

int main(int argc, char **argv){
    
    char *fvalue = NULL, *ovalue = NULL;
    int c, selection;

    //Parsing Arguments with getopt
    while ((c = getopt (argc, argv, "f:o:")) != -1)
        switch (c){
            case 'f':
            fvalue = optarg;
            break;
        case 'o':
            ovalue = optarg;
            break;
        default:
            abort ();
    }

    printf("CPU Scheduler Simulator\n");
    printf("1-) Scheduler Method\n");
    printf("2-) Preemptive Mode\n");
    printf("3-) Non-preemptive Mode\n");
    printf("4-) Show Result\n");
    printf("5-) End Program\n");
    scanf("%d", &selection);

    switch(selection){
        case 1: system("clear");
                break;
        case 2: system("clear");
                break;
        case 3: system("clear");
                break;
        case 4: system("clear");
                break;
        case 5: system("clear");
                exit(0);
                break;
        default:system("clear");
                printf("Invalid Input");
                break;
    }
    return 0;
}