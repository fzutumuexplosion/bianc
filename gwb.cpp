#include<stdio.h>
#include<string.h>
#include<iostream>
#include"xiaoxie.h"

using namespace std;
int main(){
	char b;
	AcceptUI();
	int flag=0;
	string a,target;
	b=getchar();
	if(b=='!'){
		ExitUI();
		return 0;
	};
	while(1){
	//输入 
	InputUI();
	cin>>a;
	//输入检测
	//flag=test(a);
	if(flag==-1){
		//错误 
		ErrorUI();
		b=getchar();
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
		//target=toBig(a);
		
	}
	//cout<<target<<endl;
	//输出 
	OutputUI(target);
	//询问是否再次使用
	AskUI();
	b=getchar(); 
	if(b==!){
		ExitUI();
			return 0;
	}
	
	}
	
}
