#include <cctype>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

int main (int argc, char *argv[])
{
  string str1,str2;

  cin >> str1>>str2;
  int res_string1;
  int res_string2;
  int i= 0;
  while (str1[i])
  {
    res_string1=tolower(str1[i]);
    res_string2=tolower(str2[i]);
    if (res_string1 > res_string2)
    {
        cout << 1<<endl;
        return 0;
    }
    else if (res_string1 < res_string2)
    {
      cout << -1<<endl;
        return 0;
    }
    i++;
  }
  cout << 0<<endl;
  return 0;
}
