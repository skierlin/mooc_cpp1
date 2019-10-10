#include <iostream>

using namespace std;

int main(){
	int h,r;
	cin >> h >> r;
	double barrel = 3.14*r*r*h/1000;
	cout << int(20/barrel) +1 << endl;
	return 0;
}