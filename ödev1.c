#include <stdio.h>
#include <math.h>

int binarykod(int n);
int graykod(int n);
int main()
{
	int n;
	int b = 0, c=0;
	
	for (n = 1; n <= 255; n++)
	
		{

			b = binarykod(n);
			c = graykod(b);
			printf("%d  = %d = %d ", n,b,c);
			printf("\n");
		}	
	getch();
	
}

int binarykod(int n)
{
	int kalan, i = 1, binary = 0;
	while (n != 0)
	{
		kalan = n % 2;
		n /= 2;
		binary += kalan*i;
		i *= 10;
	}
	return binary;
}

int graykod(int n)
{
	int a, b, gray = 0, i = 0;

	while (n != 0)
	{
		a = n % 10;
		n = n / 10;
		b = n % 10;
		if ((a && !b) || (!a && b))
		{
			gray = gray + pow(10, i);
		}
		i++;
	}
	return gray;
}