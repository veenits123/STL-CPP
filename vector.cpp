#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

bool comp(int x,int y){
    return x>y;
}

int32_t main(){
    
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    //  code starts
    vector <int> v={10,3,5,7,14,100};
    //int n;cin>>n;

    // for (int i=0;i<=n;i++){
    //     v.push_back(i+1);
    // }
    //vector <int> :: iterator i;
    v.push_back(3);
    v.push_back(3);
    v.push_back(3);
    v.push_back(3);

    for (int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    sort(v.begin(),v.end());

    //We can do Binary Search as well
    bool present=binary_search(v.begin(),v.end(),3);
    bool pres =binary_search(v.begin(),v.end(),20);//false
    cout<<"by permorming binary serach "<<(present?"YEs":"no")<<endl;

    //finding upper and lower bound
    //auto it =lower_bound(v.begin(),v.end(),3);
    vector <int> :: iterator it=lower_bound(v.begin(),v.end(),3);
    //lower_bound means >=
    //upper_bound means >
    //vector <int> :: iterator it2=upper_bound(v.begin(),v.end(),3);
    //no need of writing these big thing iterator 
    auto it2=upper_bound(v.begin(),v.end(),3);
    cout<<*it<<" "<<*it2<<endl;

    //to calculate the count of an element in vector
    //simply perform ub and lb on that element and 
    //take their difference
    int count=it2-it;
    cout<<"count of 3 = "<<count<<endl;



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
    //sort vector in decreasing order using comparator
    sort(v.begin(),v.end(),comp);

    vector <int>:: iterator it3;
    for (it3=v.begin();it3!=v.end();it3++){
        cout<<*it3<<" ";
    }
    cout<<endl;

    //new way of printing vector
    for (auto &x:v){//reference 
        x++;//increasing values by 1
    }
    for (auto &x:v){
        cout<<x<<" ";
    }



    return 0;
}