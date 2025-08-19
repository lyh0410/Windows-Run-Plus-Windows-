#include <bits/stdc++.h>
#include <windows.h>

using namespace std;

#define color(a) SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE),a);

int main(){
	string s;
	while(true){
		color(7);
		cout << "Please enter the command you want (enter exit to exit the program):";
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

