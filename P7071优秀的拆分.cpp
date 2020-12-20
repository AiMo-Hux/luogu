#include<iostream>

namespace s=std;

void betterize()
{
	s::ios::sync_with_stdio(0);
	s::cin.tie(0);
}


int main()
{
  betterize();//Ñø³ÉºÃÏ°¹ßÓ´£¡
  long long int n;
  long long int _2s[27]={};
  for(int i=0;i<27;++i)
  {
  	if(!i) _2s[i]=2;
  	else _2s[i]=2*_2s[i-1];
  }
  s::cin>>n;
  if(n%2)s::cout<<"-1"; 
  else
  {
  	//2^26
  	for(int i=26;i>=0;--i)
  		if(n>=_2s[i])
  		{
  			s::cout<<_2s[i]<<" ";
  			n-=_2s[i];
		}
  }
  return 0;
}
