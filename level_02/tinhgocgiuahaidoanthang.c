#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
		float a1,a2,b1,b2;
	printf("nhap vao toa do a1,a2 cua vecto a: ");
		scanf("%f%f",&a1,&a2);
	printf("nhap vao toa do b1,b2 cua vecto b: ");
		scanf("%f%f",&b1,&b2);
	if((a1!=0||a2!=0)&&(b1!=0||b2!=0))
	{
		printf("cos cua goc xen giua hai doan thang la: %.2f",(a1*b1+a2*b2)/(sqrt(a1*a1+a2*a2)*sqrt(b1*b1+b2*b2)));
	}
	else
		printf("toa do hai vec to khong hop le!!!");
}
