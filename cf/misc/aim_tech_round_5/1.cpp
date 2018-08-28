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

  int n,m,i,j;cin>>n>>m;
  vector<int> nn,mm;
  vector<string> board;
  for(i=0;i<n;i++){
    string s;cin>>s;
    for(j=0;j<m;j++){
      if(s[j]=='B'){
        nn.push_back(i+1);
        mm.push_back(j+1);
      }
    }
  }
  if(nn.size()==1){
    cout<<nn[0]<<" "<<mm[0]<<endl;
  }else{
    cout<<(nn.front() + nn.back())/2 << " " << (mm.front() + mm.back())/2 << endl;
  }

  return 0;
}
