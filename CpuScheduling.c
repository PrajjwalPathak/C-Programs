#include "CpuScheduling.h"  //Custom header file

//cpu-schedule function
void CpuSchedule(int cpu) 
{
    int  i = 0, handle = 0; //element to be stored, iterations, and handling element
                         //All are 0 for safety purposes
    while(1)
    {
        printf("\n\nSwitch %d :\n",i+1);
        handle = dequeue();     //Removing the process for execution
        if (handle > cpu)
        {
            handle-=cpu;
            printf("\n%d parts has been executed",cpu);
            printf("\nThe process(time) enqueued in scheduling : %d",handle);
            enqueue(handle);   //Putiing back the process in the queue

        }            
        else if((handle == cpu) || (handle < cpu))
        {  
            printf("\nThis process gets completed!");
            handle = 0;
        }
           
        printf("\nSituation after Cpu execution....");
        
        handle = display();
        if (handle == -1)      //If all the processes gets completed
            break;
        else
        {}
        
        i+=1;
    }
}

//Main functions begins
int main()
{
    int ele = 0, cpu =0; //For element to be inerted in queue and cpu scheduling time
                          //Intialized to 0 for safety purposes
    printf("\n------------------------\n");
    printf(" Cpu Scheduling process\n");
    printf("------------------------\n\n");        

    printf("Now Enter the time required for each process :\n");
    for(int i = 0; i<MAX; ++i)                     //getting the time for processes
    {
        printf("For Process P%d : ",i+1);
        scanf("%d",&ele);
        enqueue(ele);
    }

    printf("Enter the CPU scheduling time : ");           //cpu base time
    scanf("%d",&cpu);

    printf("\n\nCPU scheduling is starting...\n");
    printf("Before entering to scheduling, situation is :");
    display();
    CpuSchedule(cpu);
    
    //completion of tasks
    printf("Cpu is returning to idle state...\n\n");

    return 0;
}