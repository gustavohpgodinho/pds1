# include <math.h>
# include "estatistica.h"

float cauchy(float x){
	return 1/(M_PI * (1 + (x*x)));
}

float gumbel(float x, float mu, float beta){
	float z;
	z = (x - mu)/beta;
	return (1/beta)*exp(-(z + exp(-z)));
}

float laplace(float x, float mu, float b){
	float nucleo;
	nucleo = -fabs(x-mu)/b;
	return (1/(2*b))*exp(nucleo);
}
