#include <iostream>
using namespace std;

int main() {
	int t,a,b,c=0;
	cin>>t;
	while(t--){
        int a1=0,b1=0,c1=0;
		cin>>a>>b;
		while(a>0){
			a1=(a1*10)+(a%10);
			a=a/10;
		}
		while(b>0){
			b1=(b1*10)+(b%10);
			b=b/10;
		}
		c=a1+b1;
		while(c>0){
			c1=(c1*10)+(c%10);
			c=c/10;
		}
		cout<<c1<<endl;
	}
	return 0;
}
