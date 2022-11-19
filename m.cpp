#include<stdio.h>
#include<string>
#include<string.h>
#include<iostream>
#include"xiaoxie.h"
#include"llj.cpp"
#include"UI.h"
//#include"judge.h"
using namespace std;
int main(){
	char b;
	AcceptUI();
	int flag=1;
	string a,target;
	b=getchar();
	getchar();
	if(b=='!'){
		ExitUI();
		return 0;
	};
	while(1){
	//输入 
	InputUI();
	cin>>a;
	//输入检测
//	flag=judge(a);
//	cout<<flag;
	if(flag==-1){
		//错误 
		ErrorUI();
		b=getchar();
		getchar();
		//继续输入 
		if(b=='n'){
			continue;
		}
		//退出程序 
		else{
			ExitUI();
			return 0;
		}
		
	}
	else if(flag==0){
		//大写 
		//target=toSmall(a);
		
	}
	else{
		//小写 
		target=check(a);
		
	}
	//cout<<target<<endl;
	//输出 
	OutputUI(target);
	//询问是否再次使用
	AskUI();
	b=getchar();
	getchar();
	if(b=='!'){
		ExitUI();
		return 0;
	}
	
	}
	
}
