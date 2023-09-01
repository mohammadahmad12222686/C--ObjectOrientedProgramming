// You are using GCC
#include<iostream>
using namespace std;
class AddAmount{
  public:
  int ab=50;
  int da;
  int ad(){
      cin>>da;
      ab+=da;
      return ab;
  }
};
int main(){
    AddAmount gunnu;
    cout<<gunnu.ad();
}
