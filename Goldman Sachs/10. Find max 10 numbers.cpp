#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll n;
	cin>>n;
	
	vector<ll> v(n);
	
	for(ll i=0;i<n;i++){
	    cin>>v[i];
	}
	
	priority_queue<ll, vector<ll>, greater<ll>> pq;
	
	for(int i=0;i<10;i++){
	    pq.push(v[i]);
	}
	
	for(int i=10;i<n;i++){
	    if(pq.top()<v[i]){
	        pq.pop();
	        pq.push(v[i]);
	    }
	}
	
	while(!pq.empty()){
	    cout<<pq.top()<<" ";
	    pq.pop();
	}

	
}
