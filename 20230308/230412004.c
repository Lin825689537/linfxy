#include<stdio.h>
int main()
{
	float h[3];
	float m[3];
	int car[3];
	int i, c;
	float x = 0, y = 0;
	scanf("%f %f %f", &h[0], &h[1], &h[2]);
	for (i = 0; i < 3; i++)
	{
		if (h[i] <= 3)
			m[i] = 2;
		if (h[i] > 3)
		{
			c = (int)h[i] - 3;
			if ((h[i] - 3 - c) > 1e-6)
				c++;
			m[i] = c * 0.5 + 2;
		}
		if (m[i] > 10)
			m[i] = 10;
	}
	printf("  Car          Hours         Charge\n");
	for (i = 0; i < 3; i++)
	{
		printf("%5d%15.1f%15.2f\n", i + 1, h[i], m[i]);
	}
	for (i = 0; i < 3; i++)
	{
		x = x + h[i];
		y = y + m[i];
	}
	printf("TOTAL%15.1f%15.2f\n", x, y);
	return 0;
}
