#include <stdio.h>
#include <conio.h>
#include <math.h>
 main()
{
			float xa,xb,xc,ya,yb,yc,s;
	printf("nhap vao toa do diem A cua tam giac: ");
		scanf("%f%f",&xa,&ya);
	printf("nhap vao toa do diem B cua tam giac: ");
		scanf("%f%f",&xb,&yb);
	printf("nhap vao toa do diem C cua tam giac: ");
		scanf("%f%f",&xc,&yc);
			s=0.5*abs(((xb-xa)*(yc-ya))-((xc-xa)*(yb-ya)));
	printf("dien tich tam giac la: %.2f",s);
	getch();
}
