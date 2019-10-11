#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int n;
	cin >> n;
	int data;
	int b=0,c=0,d=0,e=0;
	for(int i = 0; i < n; i++){
		cin >> data;
		if(data<=18)
			b++;
		else if(data>=19 && data<=35)
			c++;
		else if(data>=36 && data<=60)
			d++;
		else
			e++;
	}
	cout << fixed << setprecision(2) << (float)b/n*100 << "%" << endl;
	cout << fixed << setprecision(2) << (float)c/n*100 << "%" << endl;
	cout << fixed << setprecision(2) << (float)d/n*100 << "%" << endl;
	cout << fixed << setprecision(2) << (float)e/n*100 << "%" << endl;
}