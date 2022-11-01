#include <assert.h>
#include <stdio.h>

int main()
{
	int numerator,denom,quotient;

	printf("Enter an numerator (integer):\n");
	scanf("%d",&numerator);

	printf("Enter a denominator (integer):\n");
	scanf("%d",&denom);

	assert(denom>0);

	quotient = numerator/denom;

	printf("%d divide by %d is %d\n",numerator,denom,quotient);

	return 0;
}
