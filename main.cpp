#include<iostream>
#include<math.h>
using namespace std;
const double TanAngle[] = {
	45.0,
	26.565051177078,
	14.0362434679265,
	7.1250163489018,
	3.57633437499735,
	1.78991060824607,
	0.8951737102111,
	0.4476141708606,
	0.2238105003685,
	0.1119056770662,
	0.0559528918938,
	0.027976452617,
	0.01398822714227,
	0.006994113675353,
	0.003497056850704
};
const double Tangent[] = {
	1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384
};

void main() {
	double InAngle = 0, Out, Angle;
	cout << "¿é¤Jsin¨¤«×" << endl;
	cin >> InAngle; Angle = 90 - InAngle;
	if (Angle < 0)Angle += 360;
	double x = 0, y = 1, xtemp, ytemp;
	//¿z¿ï
	if (Angle >= 225) {
		xtemp = y;
		ytemp = -x;
		x = xtemp; y = ytemp; Angle -= 270;
	}
	else if (Angle >= 135) {
		xtemp = -x;
		ytemp = -y;
		x = xtemp; y = ytemp; Angle -= 180;
	}
	else if (Angle >= 45) {
		xtemp = -y;
		ytemp = x;
		x = xtemp; y = ytemp; Angle -= 90;
	}xtemp = ytemp = 0;
	cout << "frist:" << x << "," << y << endl;
	for (int i = 0; i < 15; i++) {
		if (Angle < 0) {
			xtemp = x - y/Tangent[i];
			ytemp = y + x/Tangent[i];
			Angle += TanAngle[i];
		}
		else {
			xtemp = x + y/Tangent[i];
			ytemp = y - x/Tangent[i];
			Angle -= TanAngle[i];
		} x = xtemp; y = ytemp;
		cout << "i=" << i << "\tx=" << x << ",y=" << y << "\tAngle=" << Angle << endl;
	}
	cout << "Out:" << y*0.607 << endl;
	system("pause");
}