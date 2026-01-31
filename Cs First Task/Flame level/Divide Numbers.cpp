#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int number ;
  cin>> number;
  long long sum =1LL * number*(number+1) /2;

 if(sum %2!=0)
 {
    cout<<"NO";
 }
 else
 {
      cout<<"YES"<<endl;
      long long group_sum = sum/2;
      vector<int> set1,set2;
      for(int i=number;i>=1;i--)
      {
          if(i<=group_sum){
          set1.push_back(i);
          group_sum -=i;
      }else{
      set2.push_back(i);
      }

 }
 cout<<set1.size()<<endl;
 for(int x : set1 )
 {
     cout<<x<<" ";
 }
 cout<<endl;
 cout<<set2.size()<<endl;
 for(int x : set2 )
 {
     cout<<x<<" ";
 }
}
}
