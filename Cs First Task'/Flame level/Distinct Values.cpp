#include <iostream>
#include <set>
using namespace std;

int main()
{
    int num;
    cin>>num;
    set<int> N_set;
    for(int i=0;i<num;i++)
    {
        int number;
        cin>>number;
        N_set.insert(number);
    }
    cout<<N_set.size();
}
