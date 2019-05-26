#include <stdio.h>
#include <time.h>   	// for clock_t, clock(), CLOCKS_PER_SEC
#include <unistd.h> 	// for sleep()

// main function to find the execution time of a C program
int main()
{
	// to store execution time of code
	double time_spent = 0.0;

	clock_t begin = clock();

	// do some stuff here
	sleep(3);

	clock_t end = clock();

	time_spent += (double)(end - begin) / CLOCKS_PER_SEC;

	printf("Time elpased is %f seconds", time_spent);

	return 0;
}
