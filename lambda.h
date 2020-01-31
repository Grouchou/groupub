#ifndef lambdagh
#define lambdagh
#include<bits/stdc++.h>
using namespace std;
void loop(int times,auto func){
	for(int i=0;i<times;i++){
		func();
	}
}
void loop(int start,int end,auto func){
	for(int i=start;i<=end;i++){
		func();
	}
}
template<class t>
void foreach(vector<t> v,auto func){
	for(int i=0;i<v.size();i++){
		func(v[i]);
	}
}
template<class t>
vector<t> dup(t x,int n){
	vector<t> v;
	for(int i=0;i<n;i++){
		v.push_back(x);
	}
	return v;
}
vector<int> increase(int st,int tim){
	vector<int> v;
	for(int i=st;i<st+tim;i++){
		v.push_back(i);
	}
	return v;
}
vector<int> decrease(int st,int tim){
	vector<int> v;
	for(int i=st;i>st-tim;i--){
		v.push_back(i);
	}
	return v;
}
template<class t>
vector<t> mapping(vector<t> v,auto func){
	for(int i=0;i<v.size();i++){
		v[i]=func(v[i]);
	}
	return v;
}
#endif
