#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int var1[4] ;
    int calories = 0;
    for (int i = 0; i< 4;i++)
        cin >>var1[i];
    string var2;
    cin >> var2;
    for (int i = 0; i < var2.size(); i++)
    {
        if((var2[i]-'0') == 1)
            calories+=var1[0];
        else if(var2[i]-48 == 2)
            calories+=var1[1];
        else if((var2[i]-'0') == 3)
            calories+=var1[2];
        else if((var2[i]-'0') == 4)
            calories+=var1[3];
    }
    cout <<calories<<endl;

    return 0;
}
