#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
		int t;
		cin >> t;
		while(t--){
			int n;
			cin >> n;
				vector<int> v;
				int in;
				for(int i= 0; i < n; i++){
						cin >> in;
						v.push_back(in);
					}
				sort(v.begin(), v.end());
			
				for(int i = 1; i <n; i+=2) swap(v[i], v[i-1]);
			
				for(auto i:v)	cout << i << " "; 
			}
			cout << "\n";
	}
