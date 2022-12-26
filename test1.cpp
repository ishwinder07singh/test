#include <iostream>
using namespace std;

string fun(string str)
{
	int i;
	str  =  str  +  " ";
	string s  =  "";
	string g  =  "";
	for(i  = 0 ; i < str.length()  ; i++)
	{
		char ch  =  str[i];
		if(ch == ' ')
		{
			g  =  g  + s + " ";
			s = "";
		}
		else
		{
			s  =  ch + s;
		}
	}
	s  =  "";
	for(i  =  g.length()-1 ; i >=0 ; i--)
	{
		char ch  =  g[i];
		if(ch != ' ')
		{
			break;
		}
	}
	g  =  g.substr(0  , i+1);
	return g;	
}
main()
{
	string str  =  "hello how are you";
	cout<<str.length()<<endl;
	string ans  =  fun(str);
	cout<<ans.length()<<endl;
	cout<<ans;
}