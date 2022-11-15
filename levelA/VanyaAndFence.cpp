#include <iostream>
using namespace std;

int main()
{
  int size,res,presonsize,numberpreson;
  res=0;
  cin >> numberpreson>>presonsize;
  while(numberpreson>0)
  {
    cin >> size;
    if(presonsize < size)
        res++;
    res++;
    numberpreson--;
  }
  cout << res<<"\n";
}
