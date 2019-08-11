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

	deque <int> q(5);//doubly ended queue

	for (int i=0;i<5;i++){
		q[i]=i+1;
	}

	q.push_back(100);//like vector at back
	q.push_front(200);//seen in front

	for (int i=0;i<q.size();i++){
		cout<<q[i]<<endl;
	}

	q.pop_front();
	q.pop_back();

	for (int i=0;i<q.size();i++){
		cout<<q[i]<<endl;
	}

	
	return 0;
}