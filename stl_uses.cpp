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
	set <pair<int,int>> s;
	s.insert({2,5});
	s.insert({10,20});
	s.insert({19,90});
	s.insert({100,501});
	s.insert({101,600});

	int x=101;

	auto it=s.upper_bound({x,INT_MAX});

	if (it==s.begin()){
		cout<<"not present";	
	}

	it--;

	pair <int,int> cur=*it;

	if (cur.F<=x and x<=cur.S){
		cout<<"present at interval "<<cur.F<<" and "<<cur.S;
	}
	else {
		cout<<" not present";
	}

	return 0;
}