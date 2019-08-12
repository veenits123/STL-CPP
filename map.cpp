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

	map <int,int> mp;
	mp.insert({1,10});
	mp.insert({2,20});
	mp.insert(pair<int,int> (4,40));
	mp.insert(pair<int,int> (5,50));
	mp.insert({3,30});
	mp.insert({2,60});
	//map only contains unique key

	map <int,int> :: iterator i;

	for ( i=mp.begin();i!=mp.end();i++){
		cout<<i->first<<" "<<i->second<<endl;//always gives us in sorted according to key
	}

	cout<<"size = "<<mp.size()<<endl;
	cout<<"element at 2 is "<<mp.at(2)<<endl;

	cout<<"count element with key 2 ="<<mp.count(2)<<endl;//only returns 0 or 1

	//mp.clear();
	cout<<(mp.empty()?"yes":"no")<<endl;

	mp.erase(3);
	mp.erase(mp.begin(),mp.find(4));
	for ( i=mp.begin();i!=mp.end();i++){
		cout<<i->first<<" "<<i->second<<endl;
	}

	
	
	return 0;
}