
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#define N z
#define ABS(a) (((a) < 0) ? -(a) : (a))
#define SQR(x) (x)*(x)
#define MAX(y,z) ((y)>(z))?(y):(z) 
#define MIN(y,z) ((y)<(z))?(y):(z)
#define PRINTI(w) puts("control output"); \
printf(#w"=%d\n",w)
#define PRINTR(w) puts ("rezult :"); \
printf (#w"=%f\n",(float)w)
#define SQCIRLE(r) (3.14*SQR(r))
void main()
{
	puts("Lab 13.2. Using macros and preprocessing directive");
	int z, x, y,
		s,
		b_plus_N,
		z_kvadr,
		maxim,
		minim;
	char ch;

	puts("define maximum of two numbers");
	puts("Input 3 integer numbers");
	scanf("%d", &z);// введення числа
	PRINTI(z); // макрос виведення числа
	scanf("%d", &x);
	PRINTI(x);
	scanf("%d", &y);
	PRINTI(y);
	
	do
	{
#if ((N > 1) && (N < 10))
		int f = MAX(x + y, x + z)
			maxim = SQR(f);
		PRINTR(f);
#else
		{
			int ab = ABS(y - z);
			int sq = SQR(x);
			s = MIN(sq, (5 * ab));			
			PRINTR(s);
		}
#endif
		puts("Repeat? y /n "); ch = _getch();
	} while (ch == 'y');
}