#include<iostream>
using namespace std;

//#define w(t) int t; cin >> t; while(t--)

void solve(){
	int k;
	cin >> k;
	
	for(int i = 0; i <=k; i++){
		for(int j = k - i; j > 0; j--)
			cout << " ";
		for(int j = k; j>=k-i;j--)
			cout << j;
		cout << endl;
	}

	for(int i = k; i >0; i--){
		for(int j = 0; j <=k-i; j++)
			cout << " ";
		for(int j = k; j >k-i; j--)
			cout << j;
		cout << endl;	
	}
}
  
int main(){
	    ios_base::sync_with_stdio(false);
	    cin.tie(NULL);
	    int t;
	    cin >> t;
	    while(t--)
	    	solve();
	    return 0; 
}
