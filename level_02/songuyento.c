#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
		int n,nt;
	printf("nhap vao so can xet: ");
		scanf("%d",&n);
	if(n<2)
			nt=0;
	else
	{
		nt=1;
		for(int i=2;i<n;i++)
			if(n%i==0)
				nt=0;
	}
	switch(nt)
		{
	case 1: printf("day la so nguyen to"); break;
	case 0: printf("day khong phai la so nguyen to"); break;
	}
	getch();
}
