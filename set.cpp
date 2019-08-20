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
	s2.insert(10);

	auto it=s2.begin();
	//set <int,greater<int>> :: iterator it;
	for (it=s2.begin();it!=s2.end();it++){
		cout<<*it<<" ";
	}
	cout<<endl;

	//a new method of iteration
	for (auto &x:s2){
		cout<<x<<" ";
	}
	cout<<endl;

	auto it4=s2.find(101);//return pointer to 100
	// if 100 is not present it return to s2.end();
	if (it4==s2.end()){
		cout<<"not present"<<endl;
	}
	else {
		cout<<*it4<<" is present "<<endl;	
	}

	auto it5=s2.upper_bound(0);//not present 
	auto it6=s2.upper_bound(20);
	cout<<*it5<<" "<<*it6<<endl;

	//unordered set- build using hashing so unordered
	unordered_set <string> us;

	us.insert("coding");
	us.insert("in");
	us.insert("c++");
	us.insert("is");
	us.insert("fast");

	for (auto x:us){
		cout<<x<<" ";
	}
	cout<<endl;
	string key="slow";
	if (us.find(key)==us.end()){
		cout<<"not present"<<endl;
	}
	else {
		cout<<"present"<<endl;
	}



	
	return 0;
}