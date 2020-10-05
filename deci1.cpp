#include<bits/stdc++.h>
using namespace std;
#include <iostream>
using namespace std;

int main() {
	int i,j,k,r,l;
	string key,cytxt;
	cin>>key>>cytxt;
	int n=cytxt.length();
	int m=key.length();
	i=0;
	while(i<n)
	{
		l=key[(i/2)%m]-65;
		r=l%8;
		if(cytxt[i]>96)
		j=cytxt[i]-87;
		else
		j=cytxt[i]-48;
		j*=16;
		i++;
		if(cytxt[i]>96)
		j+=cytxt[i]-87;
		else
		j+=cytxt[i]-48;
		while(r--)
		{
			k=j/128;
			j%=128;
			j<<=1;
			j+=k;
		}
		cout<<(char)((l^j)+65);
		i++;
	}
	cout<<endl;
	return 0;
}




//a20080511602003860a111815116021aa811e0c103013c200cf010
//WEAREDISCOVEREDSAVEYOURSELF
