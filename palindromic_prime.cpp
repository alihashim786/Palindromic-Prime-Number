#include <iostream>
using namespace std;
int main()
{
 int num,sum=0;
 cout<<"Enter a number"<<endl;
 cin>>num;
 while(num>0){
  sum=sum+num;
  cout<<"Enter negative number if you want to exit if don\'t then enter another number"<<endl;
  cin>>num;
  }
  cout<<"The sum of the numbers is: "<<sum<<endl;
  return 0;
}

