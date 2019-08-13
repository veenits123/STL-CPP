/******************************************************************************

    					Author: VEENIT SINGH

*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;

#define START ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

int32_t main(){
	
	START
    #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	//code starts
	set <int> s;//always sorted accoding to values

	s.insert(10);
	s.insert(40);
	s.insert(90);
	s.insert(80);
	s.insert(100);
	s.insert(50);

	set <int> :: iterator i;

	// for (i=s.begin();i!=s.end();i++){
	// 	cout<<*i<<endl;
	// }

	cout<<(s.empty()?"yes empty":"no empty")<<endl;

	//erasing elements
	s.erase(100);
	for (i=s.begin();i!=s.end();i++){
		cout<<*i<<endl;
	}
	cout<<"size = "<<s.size()<<endl;

	s.erase(s.begin(),s.find(50));//erasing in an interval
	for (i=s.begin();i!=s.end();i++){
		cout<<*i<<endl;
	}
	s.clear();

	cout<<"size = "<<s.size()<<endl;

	//to arrange the elements of set in decreasing order
	set <int,greater<int>> s2;
	s2.insert(20);
	s2.insert(50);
	s2.insert(90);
	s2.insert(100);
	s2.insert(10);
	set <int,greater<int>> :: iterator it;
	for (it=s2.begin();it!=s2.end();it++){
		cout<<*it<<" ";
	}



	
	return 0;
}