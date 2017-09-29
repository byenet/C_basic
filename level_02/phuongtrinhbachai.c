#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
	float a,b,c,d;
	printf("nhap vao ba he so a,b,c cua phuong trinh bac hai: ");
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
				printf("nghiem cua phuong trinh la: %.2f",(-c)/b);
		}
	 else
	        d=pow(b,2)-(4*a*c);
	 {
	 	if(d<0) printf("phuong trinh vo nghiem");
	        else if(d==0) 
				printf("phuong trinh co mot nghiem kep la:x= %.2f",(-b)/(2*a));
	        else 
			 	printf("phuong trinh co hai nghiem phan biet la:\nx1= %.2f\nx2= %.2f",(-b-sqrt(d))/(2*a),(-b+sqrt(d))/(2*a));
		}
		getch();		
}
