#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main(double x=100,y=100) {
	double ChangeAngle,SumAngle=0;
	x *= 1000; y *= 1000;
	ChangeAngle = 45.0*3.1415926/180;
	for (int i = 0; i < 15; i++) {
		double x_new, y_new;
		if (y > 0) {
			x_new = x + y*tan(ChangeAngle);
			y_new = y - x*tan(ChangeAngle);
			SumAngle += ChangeAngle;
		}
		else {
			x_new = x - y*tan(ChangeAngle);
			y_new = y + x*tan(ChangeAngle);
			SumAngle -= ChangeAngle;
		}
		x = x_new*cos(ChangeAngle);
		y = y_new*cos(ChangeAngle);
		ChangeAngle /= 2;
	}
	printf("r=%d Angle=%f\n", x, SumAngle/3.1415926 * 180);
	system("pause");
}
