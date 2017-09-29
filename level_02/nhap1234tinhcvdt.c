#include <stdio.h>
#include <conio.h>
#include <math.h>
#define Pi 3.14
void main()
{
		int n;
	printf("Xin moi nhap:\nnhap 1 de tinh cv,dt hinh tam giac\nnhap 2 de tinh cv,dt hinh vuong\nnhap 3 de tinh cv,dt hinh chu nhat\nnhap 4 de tinh cv,dt hinh tron:\n ");
		scanf("%d",&n);
		if(n==1)
			{
					float a1,b1,c1,p,dt1,cv1;
			printf("nhap vao do dai ba canh cua tam giac: ");
				scanf("%f%f%f",&a1,&b1,&c1);
					cv1=a1+b1+c1;
					p=(cv1)/2;
					dt1=sqrt(p*(p-a1)*(p-b1)*(p-c1));
				if(a1>0&&b1>0&&c1>0)
			printf("dien tich tam giac la:S = %.2f\nchu vi tam giac la:CV = %.2f",dt1,cv1);
				else 
			printf("ba canh tam giac ban nhap da khong hop le:((");
		}
		else if(n==2)
			{
				float a,dt2,cv2;	
			printf("nhap vao do dai canh cua hinh vuong: ");
				scanf("%f",&a);
					cv2=a*4;
					dt2=a*a;
				if(a>=0)
			printf("dien tich hinh vuong la:S = %.2f\nchu vi hinh vuong la:CV = %.2f",dt2,cv2);
				else 
			printf("canh hinh vuong ban nhap da khong hop le:((");
		}
		else if(n==3)
			{
				float a3,b3,dt3,cv3;
			printf("nhap vao do dai hai canh cua hinh chu nhat: ");
				scanf("%f%f",&a3,&b3);
						cv3=(a3+b3)*2;
						dt3=a3*b3;
					if(a3>0&&b3>0)
			printf("dien tich hinh chu nhat la:S = %.2f\nchu vi hinh chu nhat la:CV = %.2f",dt3,cv3);
				else 
			printf("hai canh hinh chu nhat ban nhap da khong hop le:((");
		}
		else if(n==4)
			{
				float r,dt,cv;
			printf("nhap vao ban kinh cua hinh tron: ");
				scanf("%f",&r);
					dt=r*r*Pi;
					cv=2*Pi*r;
				if(r>0)
			printf("dien tich hinh tron la:S = %.2f\nchu vi hinh tron la:CV = %.2f",dt,cv);
				else 
			printf("ban kinh cua hinh tron ban nhap khong hop le:((");
		}
		else printf("so ban nhap khong hop le:((");
		getch();
}
