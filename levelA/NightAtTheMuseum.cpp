#include <iostream>
using namespace std;

int main (int argc, char *argv[])
{
  string input;
  cin >> input;
  string alph="abcdefghijklmnopqrstuvwxyz";
  int temp = 1;
  int j = 0;
  int count = 0;
  int len = alph.size() - 1;
  
  for (int i = 0; i < input.size() ; i++)
  {
      while(1)
     {
        if(input[i] == alph[j])
        {
            cout << "1 if  : " << temp << "  j = " << j <<" alph[j] "<< alph[j] << " input[i] "<< input[i]<< endl;
            count+=temp;
            temp = 0;
            break;
        }
        if ( input[i] - alph[len - j] == 0)
        {
            count+=temp;
            j = len - j;
            std::cout << "2 if  : " << temp <<"  j = " <<j << " alph[j] "<<alph[j]<< " input[i] "<<input[i]<<endl;
            //j = len - j;
            temp = 0;
            break;
        }
        temp+=1;
        j++;
        if (j == alph.size())
            j = 0;
     }
  }

cout << count << endl;
  return 0;
}
