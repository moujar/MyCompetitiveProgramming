#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

int main (int argc, char *argv[])
{
  string input;
  int count = 0,i = 0;
  cin >> input;
  sort(input.begin(),input.end());
  while (i < input.size())
  {
    if(input[i]!=input[i+1])
      count++;
    i++;
  }
  if(count%2)
    cout <<"IGNORE HIM!"<<endl;
  else
    cout <<"CHAT WITH HER!"<<endl;
  return 0;
}
