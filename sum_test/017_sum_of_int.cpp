#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	double sum = 0;
	for(int i = 0; i < n; i++)
		sum += a[i];
	double average = sum/n;
	cout << (int)sum << " " << fixed << setprecision(5) << average << endl;
	return 0; 
}