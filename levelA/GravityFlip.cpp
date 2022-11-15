#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int num;
  cin>>num;
  int box[num];
  for (int i =0;i < num ;i++)
    cin >> box[i];
  sort(box,box+num);
  for (int i =0;  i < num; i++)
    cout << box[i]<<" ";
  return 0;
}
