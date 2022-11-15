#include <iostream>
using namespace std;

int main()
{
  int i = 0;
  int first,second;
  cin >>first>>second;
  while(1)
  {
    i++;
    first*=3;
    second*=2;
    if (first > second)
      break;
  }
  cout<<i<<"\n";
}
