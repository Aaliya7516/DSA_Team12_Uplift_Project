// Example program
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int n,x,sum=0,k;
cin>>n;
int s=n;
while(n!=0)
{
x=n%10;
n=n/10;
sum=sum+pow(x,3);
}
if(s==sum)
{
    cout<<"true";
 return 1;
}
else
{
  cout<<"false";
 return 0;
}

}
