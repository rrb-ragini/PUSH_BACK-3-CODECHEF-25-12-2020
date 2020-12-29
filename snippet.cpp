#include<iostream>
using namespace std;

//#define w(t) int t; cin >> t; while(t--)

void solve(){
	int k;
	cin >> k;
	 int x = k; 
   

  
    k |= k >> 1; 

    k |= k >> 2; 
  
    k |= k >> 4; 
    k |= k >> 8; 
    k |= k >> 16; 
  
    cout <<  __builtin_popcount(x ^ k) << endl; 
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
