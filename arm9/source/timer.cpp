#include <nds.h>
#include "timer.h"

#define DSCLOCKSPEED 33513.982

void startTimer()
{
	cpuStartTiming(0);
	timerElapsed(0);
	//startTicks = 0;
	//ticks = 0;
}

int getTimerTicks()
{
	return (cpuGetTiming() / (DSCLOCKSPEED));
}
