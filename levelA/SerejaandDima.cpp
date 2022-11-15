#include<iostream>
using namespace std;

int main (int argc, char *argv[])
{
  int num,input;
  int methed = 0;
  cin >> num;
  int i = 0;
  int sereja =0;
  int dima = 0;
  if (!(num%2))
    methed =1;
  if(methed)
  {
    while(num/2 > i)
    {
      cin>>input;
      dima+=int(input);
      i++;
    }
    while (num >i) 
    {
      cin >> input;
      sereja+=int(input);
      i++;
    }
  }
  else
  {
      while(i < num)
      {
        if(i%2)
        {
          cin >> input ;
          dima+=input;
        }
        else
        {
          cin >> input;
          sereja+=input;
        }
      i++;
      }
  }

      cout << sereja<<" "<<dima<<endl;
  return 0;
}
