#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;
int main (int argc, char *argv[])
{
  string word;
  cin >> word;
  int i = 0;
  int numUp = 0;
  int numLo = 0;
  while (word[i])
  {
    if (islower(word[i]))
        numLo++;
    else 
      numUp++;
    i++;
  }
  if (numUp <= numLo)
     for (int x=0; x<i; x++)
        word[x]= tolower(word[x]);
  else 
    for (int x=0; x<i; x++)
        word[x] =toupper(word[x]);
  cout << word << endl;
  return 0;
}
