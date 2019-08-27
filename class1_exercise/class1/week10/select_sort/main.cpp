#include <iostream>
#include <vector>

using namespace std;

class Solution{
	
public:
	void result(vector<int>& in){
		for(int i = 0; i < in.size(); i++){
			int temp = in[i];
			int index = i;
			for(int j = i+1; j < in.size(); j++){
				if(in[j] < temp){
					temp = in[j];
					index = j;
				}
			}
			swap(in[i],in[index]);
		}
	}

	void swap(int &a,int &b){
		int temp;
		temp = a;
		a = b;
		b = temp;
	}

};


int main(){
	vector<int> in = {4,5,3,1,2};
	Solution res;
	res.result(in);
	for(int i = 0; i < in.size(); i++){
		cout << in[i] << " ";
	}
	cout << endl;
	return 0;
}