#include <stdio.h>

struct Container
{
	int R;
	union
	{
		int A;
		int B [3];
	};
	union
	{
		int C;
		int D [4];
	};
	int T;
};

int main(void)
{
	struct Container C;
	printf ("%i, %i\n", C.A, C.B[0]);
	printf ("%i, %i\n", C.C, C.D[0]);
}