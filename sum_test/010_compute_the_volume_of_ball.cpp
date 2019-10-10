#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double r;
	cin >> r;
	double v = 3.14*4/3*r*r*r;
	cout.setf(ios::fixed);
	cout << setprecision(2) << v << endl;
	return 0;
}