# include <stdio.h>

int temp(int, int, int);

int main()
{
	temp(20, 500, 20);
}

int temp(int lower, int upper, int step)
{
	/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */
	float fahr, celsius;

	fahr = lower;
	while (fahr <= upper) 
	{
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	} 

	return 0;
}