#include <bits/stdc++.h>
//---------------------------
using namespace std;
//---------------------------
#define REP(i,n) for(int i = 0; i < (n); i++)
#define P(x) cout << (x) << "\n"
#define fcout cout << fixed << setprecision(18)

#define MOD 1000000007 // 1e9+7
#define PI 3.1415926535
/*
3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679
*/
#define ll long long int // 10^18
#define INF 1000000001 // 1e9+1
#define LINF 1000000000000000001 // 1e18+1

int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
//---------------------------

int main(){
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  // ifstream in("input.txt");
  // cin.rdbuf(in.rdbuf());

  int q;cin>>q;
  REP(i,q){
    ll n,m,k;cin>>n>>m>>k;
    if(n-k > 0 || m-k > 0){
      P(-1);
    }else if(n%2==m%2 && n%2==k%2){
      P(k);
    }else if(n%2==m%2 && n%2!=k%2){
      P(k-2);
    }else{
      P(k-1);
    }
  }
  return 0;
}
