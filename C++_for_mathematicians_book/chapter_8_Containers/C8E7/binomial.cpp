#include <iostream>
#include <map>
#include <utility>

using namespace std;


long binomial(int n , int k){
  pair<int ,int> n_k;
  static map<pair<int,int>, long> table;

  if (k==0){return 1;}
  if (n == k){return 1;}
  if(n < k){return 0;}

  n_k = make_pair(n,k);

  if (table.count(n_k)>0){return table[n_k];}

  table[n_k] = binomial( n-1 , k-1 ) + binomial(n-1, k);

  return table[n_k];
};

int main(){
  for(int n=0; n<10; n++){
    for(int k=0 ; k<10; k++){
      cout<< "  "<<binomial(n,k)<<" ";
    }
    cout<<"\n";
  }
  return 0;
}
