#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	char a;
	int b;
	float c;
	double d;
	cin >> a >> b >> c >> d;
	cout.setf(ios::fixed); 
	cout << a << " " << b << " " << setprecision(6) << c << " " << setprecision(6) << d << endl;
	return 0;
	
}