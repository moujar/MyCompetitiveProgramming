#include <iostream>
using namespace std;

int main()
{
  int pos;
  int elment; 
  int pos_i = 0;
  int pos_j=0;
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j< 5; j++)
    {
      cin >> elment;
      if(elment == 1)
      {
          pos_j = j;
          pos_i = i;
      }
    }
  }
  pos =abs(pos_i-2)+ abs(pos_j-2);
  cout << pos<<endl;
}
