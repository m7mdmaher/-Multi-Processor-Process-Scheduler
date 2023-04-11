#include "FCFS.h"

FCFS::FCFS(): PROCESSOR("FCFS")
{  
	RUN = NULL;
}

void FCFS::ScheduleAlgo()
{
}

/*void FCFS::ScheduleAlgo()
{


    while (!RDY.IsEmpty()) 
    {
        if (!RUN)
        {
            RUN = RDY.get_Head();
            RDY.DeleteFirst();
            RUN->set_starttime(SCH_ptr->get_TIMESTEP());
            


        }
    }
}*/


void FCFS::addToMyRdy(PROCESS *P)
{ 
	RDY.InsertEnd(P);
}

void FCFS::PrintMyReady()
{
    RDY.PrintList();
}

void FCFS::PromoteProcess()
{
    if (!STATE)
    {
         
        PROCESS* TEMP;
        if (!RDY.IsEmpty())
        {
            TEMP = RDY.get_Head();
            RUN = TEMP;
            STATE = 1;
        }
    }
}
