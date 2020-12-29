#include<iostream>
#include<algorithm>
using namespace std;


void solve(){
		string str;
		cin >> str;
		sort(str.begin(), str.end(), greater<char>());
		cout << str << "\n"; 
	}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while(t--)
		solve();
	}
