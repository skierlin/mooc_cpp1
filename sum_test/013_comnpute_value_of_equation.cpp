#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
	double a,b,c,d;
	cin >> a >> b >> c;
	d = -b/(2*a)==0?0:-b/(2*a);
	cout.setf(ios::fixed);
	if(b*b - 4*a*c == 0)
		cout << "x1=x2=" << setprecision(5) << (-b + sqrt(b*b-4*a*c))/abs(2*a) << endl;
	else if (b*b - 4*a*c > 0)
		cout << "x1=" << setprecision(5) << (-b + sqrt(b*b-4*a*c))/abs(2*a) << ";" << "x2=" << setprecision(5) << (-b-sqrt(b*b-4*a*c))/(2*a) << endl;
	else 
		cout << "x1=" << setprecision(5) << d << "+" << setprecision(5) << sqrt(4*a*c-b*b) / abs(2*a) << "i" << ";" 
			 << "x2=" << setprecision(5) << d << "-" << setprecision(5) << sqrt(4*a*c-b*b) / abs(2*a) << "i" << endl;
	return 0;
}