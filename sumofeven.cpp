#include<iostream>
using namespace std;
int main()
{
  int n;
  int i;
  int sum;
  sum=0;
  cout<<"Enter a number:"<<endl;
  cin>>n;
  for(i=0;i<=n;i++)
  {
    if (i%2==0)
    {
        sum=sum+i;
    }
    else
    {
        continue;
    }
  }
  cout<<"The sum is:"<<sum<<endl;
}