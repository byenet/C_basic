#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
		float a1,a2,b1,b2,c1,c2,d1,d2,D,Dx,Dy;
	printf("nhap vao toa do diem a: ");
		scanf("%f%f",&a1,&a2);
	printf("nhap vao toa do diem b: ");
		scanf("%f%f",&b1,&b2);
	printf("nhap vao toa do diem c: ");
		scanf("%f%f",&c1,&c2);
	printf("nhap vao toa do diem d: ");
		scanf("%f%f",&d1,&d2);
			D=((-(b2-a2))*(d1-c1))+((d2-c2)*(b1-a1));
			Dx=((((b1-a1)*a2-(b2-a2)*a1)*(d1-c1))-(((d1-c1)*c2-(d2-c2)*c1)*(b1-a1)));
			Dy=((-(b2-a2))*((d1-c2)*c2)-(d2-c2)*c1)-((-(d2-c2))*((b1-a1)*a2)-((b2-a2)*a1));
	if(D==0&&Dx==0)
	{
		printf("co vo so giao diem...");
	}
	else if(D==0&&Dx!=0)
	{
		printf("hai dg thang k co giao diem...");
	}
	else
	{
		printf("toa do giao diem cua hai duong thang la: \n(x,y)=(%.2f,%.2f)",(Dx/D),(Dy/D));
	}
		getch();
}

