#include <complex>
#include <set>
#include <utility>

using namespace std;

/*
int main(){
  complex<double> z(2.,3.);
  set< complex<double> > A;
  A.insert(z);
  return 0;
}
*/

int main(){
  complex<double> z(2.,3.);
  set< pair<double,double> > A;
  A.insert(make_pair(z.real(), z.imag()));
  return 0;
  }
