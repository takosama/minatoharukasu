#include<stdio.h>
int main(void)
{
	long num;
	while (cin >> num) {
		long start = num;
		long count = 1;
		double end = sqrt(num * 2);
		for (int n = 2; n <= end; n++)
		{
			int sm = 0.5*(n*n + n);
			long c = num - sm;
			auto a = c / n;

			if (c%n == 0)
			{
				start = 1 + a;
				count = n;
			}
		}
		printf("%d %d\n", start, count);
	}
	return 0;
}
