#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

void print(list <int> l){
    //list <int> :: iterator i;
    auto i=l.begin();
    for ( i=l.begin();i!=l.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
}

int32_t main(){
    
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    //  code starts
    list <int> l,l2;

    for (int i=0;i<5;i++){
        l.push_back(i*3);
        l.push_front(i*5);
        l2.push_front(i*5);
    }
    //l.clear();
    cout<<"size of list = "<<l.size()<<endl;
    cout<<"front element = "<<l.front()<<endl;
    cout<<"back element = "<<l.back()<<endl;
    l.unique();//remove duplicates 
    print(l);

    l2.remove(15);//remove element with specific value
    print(l2);


    //l.sort();//sorting list
    //l.reverse();//reversing list

    l.pop_front();
    cout<<"after deletion from front : ";
    print(l);

    l.pop_back();
    cout<<"after deletion from back : ";
    print(l);
    
    return 0;
}