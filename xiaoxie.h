#include<iostream>
#include<cstdio>
using namespace std;
int judge(string input)
{
	int flag=1;
	int i=0;
	while(i<input.size())
	{
		if(!isdigit(input[i])){
		//cout<<"ÊäÈë´íÎó"<<endl;
		return 0;
		}
		i++;
	}
	if(flag==1)return 1;
	
}


