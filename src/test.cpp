// test code to validate the library is working properly, and to show the code

#include <iostream> // cout
#include <unistd.h> // time

#include <clock.h> // library

int main()
{
	Clock my_clock, delay;


	// starting timer
	my_clock.start_timer();
	

	// sleep for 1 second
	(void) usleep(1000000); 
	
	double time = my_clock.get_time();
	if(time < 0.99 || 1.01 < time)
	{
		std::cout << "Error >0.01" << "\n";
		return -1;
	}
	std::cout << "Time after 1 second (1): " << time << "\n";
	
	// stop, sleep for 1 second
	(void) my_clock.stop_timer();
	delay.start_timer();
	(void) delay.delta_time(1);
	
	time = my_clock.get_time();
	if(time < 0.99 || 1.01 < time)
	{
		std::cout << "Error >0.01" << "\n";
		return -1;
	}
	std::cout << "Time after being stoped for 1 second (1): " << time << "\n";
	

	// resume, sleep for 1 second
	(void) my_clock.resume_timer();
	delay.start_timer();
	(void) delay.delta_time(1);
	
	time = my_clock.get_time();
	if(time < 1.99 || 2.01 < time)
	{
		std::cout << "Error >0.01" << "\n";
		return -1;
	}
	std::cout << "Time after resume and 1 second (2): " << time << "\n";
	
	return 0;
}
