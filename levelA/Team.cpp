#include <iostream>
using namespace std;

int main()
{
  int sum = 0;
  int res =0;
  int size;
  int  s1,s2,s3;
  cin >>size;
  for (int i=0;i < size;i++)
  {
    cin >>s1>>s2>>s3;
    sum = s1+s2+s3;
    if(sum >=2)
      res++;
  }
  cout << res<<"\n";
}
