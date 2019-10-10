#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double a;
	cin >> a;
	cout.setf(ios::fixed); 
	cout << setprecision(12) << a <<endl;  
	return 0;
}