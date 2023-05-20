#include <iostream>
#include <cstdio>
#include <conio.h>
using namespace std;
string name;
string surname;
int a;
int b;
string dzialanie;

int main(){
	
	cout<<"podaj imie "<<endl;
	cin>> name;
	cout<<"podaj nazwisko"<<endl;
	cin>>surname;
	if (name == surname) {
	cout<<"nie mozesz miec takiego samego imienia jak nazwisko"<<endl;}
	else{
		cout<<"twoje imie " +name+ " ,twoje nazwisko " +surname+ " powodzenia w ko¿ystaniu z programu"<<endl;
		
	cout<<"podaj liczbe a"<<endl;
	cin>>a;
	cout<<"podaj liczbe b"<<endl;
	cin>>b;
	cout<<"podaj dzialanie"<<endl;
	cin>>dzialanie;
	if(a == 0 && b ==0){
		cout<<"liczba a i b nie moze wynosic 0"<<endl;
	}
	if (dzialanie == "dodawanie"){
		cout<<"a + b = "<<a+b<<endl;
	}
	else if(dzialanie == "odejmowanie"){
		cout<<"a - b = "<<a-b<<endl;
	}
	else if(dzialanie == "dzielenie"){
		cout<<"a / b = "<<a/b<<endl;
	}
	else if(dzialanie == "mnozenie"){
		cout<<"a * b = "<<a*b<<endl;
	}
	else if(dzialanie == "resztazdzielenia"){
		cout<<"a reszta z b = "<<a%b<<endl;
	}
	else {
		cout<<"podales blendne dzialanie mozliwe dzialania:"<<endl;
		cout<<"dodawanie"<<endl;
		cout<<"odejmowanie"<<endl;
		cout<<"mnozenie"<<endl;
		cout<<"dzielenie"<<endl;
		cout<<"resztazdzielenia"<<endl;
		
		
		
		
		
	}
	
		
		
		
		
		
		
	}
	
	
	
	getch();
	
	return 0;
	
	
}

