#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
	int n;
	  printf("nhap vao so n: ");
	  scanf("%d",&n);
	int a=sqrt(n);
		if(a*a==n)
			printf("day la so chinh phuong");
		else 
			printf("day khong phai la so chinh phuong");
	getch();
}
