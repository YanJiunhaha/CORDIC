﻿#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main() {
	double x, y,ChangeAngle,SumAngle=0;
	x = 100; y = 200;//input
	ChangeAngle = 45.0*3.1415926/180;//二分法
	//-------------------------------------------------
	x *= 1000; y *= 1000;//增加精確度
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
	printf("r=%f Sum=%f \n", x/1000, SumAngle / 3.1415926 * 180);
	system("pause");
}
