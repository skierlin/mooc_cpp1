#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	double a, b;
	cin >> a >> b;
	double c,d;
	for(int i = 0; i < n-1; i++){
		cin >> c >> d;
		if(d/c - b/a > 0.05)
			cout << "better" << endl;
		else if(d/c - b/a < -0.05)
			cout << "worse" << endl;
		else
			cout << "same" << endl;
	}
	return 0;
}