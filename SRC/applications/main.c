#include "config.h" 

int main(void)
{	
	init_config();

	while(1)
	{
		Scheduler_Run();
	}
}
