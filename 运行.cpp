#include <bits/stdc++.h>
#include <windows.h>

using namespace std;

#define color(a) SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE),a);

int main(){
	string s;
	while(true){
		color(7);
		cout << "请输入你要的指令（输入exit退出程序）：";
		color(14);
		getline(cin, s);
		color(7);
		if(s == "exit")
			break;
		if(s == "cls" || s == "clc" || s == "clear")
			system("cls");
		else
			system(s.c_str());
	}
	return 0;
}

