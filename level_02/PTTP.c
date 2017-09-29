#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
	float a,b,c,d;
	printf("nhap vao ba he so a,b,c cua phuong trinh trung phuong: ");
	scanf("%f%f%f",&a,&b,&c);
	if(a==0)
	{
		if(b==0)
		{
			if(c==0)
				printf("phuong trinh co vo so nghiem");
			else 
				printf("phuong trinh vo nghiem");
		}
			else
				printf(" phuong trinh co hai nghiem la: x1= %.2f\nx2= %.2f",sqrt((-c)/b),-sqrt((-c)/b));
		}
	 else
	        d=pow(b,2)-(4*a*c);
	 {
	 	if(d<0) printf("phuong trinh vo nghiem");
	        else if(d==0) 
				printf("phuong trinh co hai nghiem la:x1= %.2f\x2= %.2f",sqrt((-b)/(2*a)),-sqrt((-b)/(2*a)));
	        else 
			 	printf("phuong trinh co 4 nghiem phan biet la:\nx1= %.2f\nx2= %.2f\nx3= %.2f\nx4= %.2f",-sqrt((-b-sqrt(d))/(2*a)),sqrt((-b-sqrt(d))/(2*a)),-sqrt((-b+sqrt(d))/(2*a)),sqrt((-b+sqrt(d))/(2*a)));
		}
		getch();		
}
