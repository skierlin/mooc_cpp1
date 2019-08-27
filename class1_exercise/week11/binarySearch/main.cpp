#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
	
public:
	int BinarySearch(vector<int>& in,int p){
		int l = 0;
		int r = in.size()-1;

		while(l <= r){
			int mid = l + (r-l)/2;
			if(p == in[mid])
				return p;
			else if(p > in[mid])
				l = mid + 1;
			else
				r = mid - 1;
		}
		return -1;
	}
};


int main(){
	
	vector<int> in = {4,5,3,1,2};
	sort(in.begin(),in.end());
	
	Solution res;
	int n = res.BinarySearch(in,4);

	if(n != -1)
		cout << "i find it and the number is " << n << endl;
	else
		cout << "none" << endl;

	cout << endl;
	return 0;
}