using namespace std;
#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
#include<set>
#include<map>

#include<cmath>
#include<cstdio>
#include<cstdlib>
#define For(i,n) for(int i=0;i<(n);++i)
#define foreach(x,n) for(typeof (n).begin() x = (n).begin(); x!= (n).end(); x++)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define D(x) cout<<#x " = "<<(x)<<endl

template <class T> string toStr(const T &x)
{ stringstream s;s<<x;return s.str();}
template <class T> int toInt(const T &x)
{ stringstream s; s<<x; int r; s>>r;return r;}

typedef long long int lli;

lli modpow(lli b,lli p,lli m ){
	lli mask = 1;
	lli pow2 = b%m;
	lli r =1;
	while(mask){
		if(p & mask) r =  (r * pow2)%m;
		pow2 = (pow2*pow2)%m;
		mask<<=1;
	}
	return r;
}

int main(){
	int a;
	while(cin>>a and a){
		vector<lli> todos(a);
		For(i,a)
			cin>>todos[i];
		sort(all(todos));
		double ans;
		if(a%2==0){
			int mid = a>>1;
			ans = (todos[mid]+todos[mid-1]) / 2.0;
		}else{
			ans = todos[a>>1];
		}
		printf("%.1lf\n",ans);
	}

	return 0;
}
