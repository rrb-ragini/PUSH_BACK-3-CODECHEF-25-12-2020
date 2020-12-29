#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
			int n, k, dist = 0, present = 0, start, num = 0;
			cin >> k >> n;
			for(int i = 0; i < n; i++){
					cin >> num;
					if(num==k && present !=0) {
						present++; 
						dist = i-start;
					}
					else if(num == k && present == 0){start = i; present++;
				//		cout << "started: " << start << "\n";
						}
				}
				if(present<2)cout << 0 << "\n";
				else cout << dist << "\n";
		}
	}
