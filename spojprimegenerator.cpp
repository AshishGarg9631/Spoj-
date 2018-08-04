#include <iostream>
using namespace std;

int main() {
	int t,n,m;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=n;i<=m;i++){
			if(n%i!=0){
				cout<<"prime"<<"\n";
			}
		}
	}
	return 0;
}
