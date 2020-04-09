#include<iostream>
using namespace std;
int main()
{
  int i,n,sum=0;
    cin>>n;
  int a[n];// Define an array of n integers
  // Get inputs for the array elements
  for(i=0;i<n;i++)
  {
    cin>>a[i];
    sum=sum+a[i];
  }
  cout<<sum<<endl;
  return 0;
}
