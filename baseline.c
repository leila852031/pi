#include <stdint.h>
#include <time.h>
#include <stdio.h>

double compute_pi(size_t dt)
{
	double pi = 0.0;
	double delta = 1.0 / dt;
	for(size_t i = 0; i<dt; i++){
		double x = (double)i / dt;
		pi += delta / (1.0 + x*x);
	}
	return pi * 4.0;
}

int main(void)
{
	time_t t1,t2;
	double pi;
	t1 = time(NULL);		
	pi = compute_pi(128000000);
	t2 = time(NULL);
	printf("%f\nTime : %f\n", pi, (double) difftime(t2,t1));
	return 0;
}

