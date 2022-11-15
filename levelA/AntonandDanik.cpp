#include <iostream>
using namespace std;

int main()
{
  int len ,countB,countA;
  string str;
  countA =0;
  countB =0;
  int i =0;
  cin >> len;
  cin >> str;

  while(len > i)
  {
    if(str[i] == 'A')
      countA++;
    else 
      countB++;
  i++;
  }
  if(countA>countB)
    cout<<"Anton\n";
  else if(countB> countA)
    cout << "Danik\n";
  else 
    cout << "Friendship\n"; 
}
