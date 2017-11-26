#include "fact.h"
#include <iostream>

void factorial::fact(int arr[],int m,int f_num)
{
  int x,temp=0,i=0;
  while(f_num>1)
  {
    i=0;
    do{
        x=arr[i]*f_num+temp;
        arr[i]=x%10;
        temp=x/10;
        ++i;
      }
    while(temp!=0 || i<=m);
    m=--i;
    --f_num;
  }
  while(m>=0)
  {
    std:: cout<<arr[m];
    --m;
  }
}

int factorial::print_fact()
{
  int num,f_num;
  int arr[5000]={0};
  std::cout<<"Enter Number:  ";
  std::cin>>num;
  std::cout<<"\n";
  f_num = num-1;
  int i;
  for(i=0;num!=0;++i,num/=10)
      arr[i]=num%10;
  fact(arr,i,f_num);

  return 0;
}
