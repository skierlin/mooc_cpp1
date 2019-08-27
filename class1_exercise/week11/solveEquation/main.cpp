#include <iostream>
#include <cmath>
using namespace std;

class Solution{

public:
	double f(double mid){
		return pow(mid,3)-5*pow(mid,2)+10*mid-80;
	}
	void result(){
		double l = 0;
		double r = 100;
//		double err = 100;
		double mid = 50;
		while( abs(f(mid)) > 1e-6){
			f(mid) > 0? r = mid: l = mid;
			mid = (r+l)/2;
		}
		cout << "the answer is " << mid << endl;
	}

};

int main(){
	Solution res;
	res.result();
	return 0;
}