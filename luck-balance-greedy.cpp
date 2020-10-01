/*
LUCK BALANCE
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int L,K,T,N;
	cin>>N;
	cin>>K;
	int luck=0;
	vector<int>contests;
	for(int i=0;i<N;i++){
		cin>>L;
		cin>>T;
		if(T==0){
			luck+=L;
		}
		else{
			contests.push(L);
		}
	}
	sort(contest.rbegin(),contest.rend());
	while(K>0&&contest.size()>0){
         luck+=contest[0];
         contest.erase(contest.begin());
         K--;
    }
    for(int i = 0; i < contest.size(); i++) {
        // Win the rest
        luck -= contest[i];
    }
    cout<<luck;
    return 0;

}
