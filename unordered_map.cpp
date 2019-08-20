#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

int32_t main(){
	
	ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	//  code starts
	map <char,int> m;
	unordered_map <char,int> u;


	string s="hellohell";

	for (auto x:s){
		m[x]++;
		u[x]++;
	}
	for (auto y:m){
		cout<<y.F;
	}

	
	return 0;
}