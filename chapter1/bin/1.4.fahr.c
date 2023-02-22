# include <stdio.h>

/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */

int main()
{

	printf("\n");
	printf("####################################\n");
	printf("Fahrenheit-Celsius Temperature Table\n");
	printf("####################################\n");
	printf("\n");

	float fahr, celsius;
	int lower, upper, step;

	lower = 0; 
	upper = 150;
	step = 10;

	celsius = lower;
	while (celsius <= upper) 
	{
		fahr = (9.0/5.0) * celsius + 32.0;
		printf("%3.0f\t%6.1f\n", celsius , fahr);
		celsius = celsius + step;
	} 
}
