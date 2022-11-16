#include<iostream>
using namespace std;
int main()
{
    int num;
    int k = 0;
    cin >> num;
    int arr[num];
    int nbr_crime = 0;
    int nbr_police = 0 ;
    for (int i = 0; i < num ;  i++)
            cin >> arr[i];
    while (num> k)
    {
        if (arr[k] < 0)
        {
            if(nbr_police > 0)
                nbr_police--;
            else 
                nbr_crime++;
        }
        else 
            nbr_police+=arr[k];

        k++;
    }
    cout << nbr_crime << endl;
}