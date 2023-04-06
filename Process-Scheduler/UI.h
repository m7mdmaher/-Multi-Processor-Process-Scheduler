#pragma once
#include "PROCESS.h"
#include "PROCESSOR.h"
#include "LinkedQueue.h"
#include <string>
class UI
{
	enum MODE;
public:
	void printInteractive(int Time, PROCESSOR**, int ProcessorsCount, LinkedQueue<PROCESS*>, int, LinkedQueue<PROCESS*>, int, LinkedQueue<PROCESS*>, int);
	void printStepByStep(int Time, PROCESSOR**, int ProcessorsCount, LinkedQueue<PROCESS*>, int, LinkedQueue<PROCESS*>, int, LinkedQueue<PROCESS*>, int);
	void printSilent();
	void PrintProcessorReadies(PROCESSOR*); //Prints either RDY or RUN queues of processor
	void PrintQueue(LinkedQueue<PROCESS*> Q);
	string ReadFileName();
	void PrintMessage(string);
	

};

