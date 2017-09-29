#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
		float xa,xb,ya,yb,dd;
	printf("nhap toa do (Xa,Xb): ");
		scanf("%f%f",&xa,&xb);
	printf("nhap toa do (Ya,Yb): ");
		scanf("%f%f",&ya,&yb);
			dd=sqrt(pow((xb-xa),2)+pow((yb-ya),2));
	printf("do dai: %.2f",dd);
	getch();
}
