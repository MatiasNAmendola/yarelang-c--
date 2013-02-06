#ifndef MY_MATH_H
#define MY_MATH_H
/* mymath.h 
	Contiene algunas funciones matemáticas importantes que se utilizarán
	en el intérprete 
*/

long double factorial(short n) {
    if(n <= 1)
        return 1;
    long double r = 1.0;
    unsigned short i;
    for(i = 1; i <= n; i++)
        r *= (long double)i;
    return r;
}

unsigned long long sumatoria(int start, int end) {
	unsigned long r = 0;
	unsigned i;
	for(i = start; i <= end; i++)
		r += i;	
	return r;
}

#endif
