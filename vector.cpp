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
    vector <int> v;
    int n;cin>>n;

    for (int i=0;i<=n;i++){
        v.push_back(i+1);
    }
    for (int i=0;i<=n;i++){
        cout<<v[i]<<" ";
        cout<<endl;
    }
    v.resize(10,100);
    cout<<"size of vector = "<<v.size()<<endl;
    cout<<"capacity = "<<v.capacity()<<endl;
    cout<<"max size of vector = "<<v.max_size()<<endl;
    cout<<(v.empty()?"YES":"NO")<<endl;

    v.insert(v.begin()+2,10);
    cout<<v.at(2)<<endl;
    v.pop_back();
    v.erase(v.begin()+2);

    //cout<<v.size();

    
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    



    return 0;
}