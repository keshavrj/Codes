#include<stdio.h>
float y(float x)
{
	return x/(2+x*x);
}
float trapezoidal(float a, float b, float n)
{
	float t = (b-a)/n;
	float sm = y(a)+y(b);
    for (int i = 1; i < n; i++)
		sm+= 2*y(a+i*t);
	return (t/2)*sm;
}
int main()
{
	float ll = 0;
	float ul = 1;
    int n = 6;
    printf("Value of the given integral is %6.5f\n",trapezoidal(ll, ul, n));
	return 0;
}
