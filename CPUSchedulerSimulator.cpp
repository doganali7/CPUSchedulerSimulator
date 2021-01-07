#include <iostream>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

struct node{
    int burstTime, arrivalTime, priority, processID, waitingTime;
    struct node *next;
};

struct node * newNode(int, int, int, int, int);
struct node * insertBack(struct node *, int, int, int, int, int);
struct node * readFile(struct node *,char *);
struct node * bubbleSortArrivalTime(struct node *);
struct node * bubbleSortProcessID(struct node *);
struct node * bubbleSortBurstTime(struct node *);
struct node * bubbleSortPriority(struct node *);

int main(int argc, char **argv){

    struct node *header;    //this created node will point memory address of the node will be added. It will not store any data
    header=NULL;

    char *fvalue = NULL, *ovalue = NULL;
    int index, c, opterr = 0, selection, selection2;

     //getting arguments from linux shell
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
    for (index = optind; index < argc; index++)
        cout<<"Non-option argument \n", argv[index];

    cout<<"                      CPU Scheduler Simulator \n";
    cout<<"1)Scheduling Method \n";
    cout<<"2)Preemtive Mode \n";
    cout<<"3)Non-Preemptive Mode \n";
    cout<<"4)Show Result \n";
    cout<<"5)End Program \n";
    cout<<"Option > ";

    cin>>sellection;

    return 0;
}