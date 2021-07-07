#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <vector>
#include <Windows.h>
#include <conio.h>
#define PRINT(x) cout<<(#x)<<" : "<<x<<endl; 
using namespace std;

class Varanus {
	string kingdom;
	string area; 
	string type;
	string kind;
public:
	Varanus(string kingdom, string area, string type, string kind): kingdom("Animals"), 
		area("Komodo island"), type("Hordius"), kind("Komodo Varanus") {}
	Varanus(){}
	~Varanus(){}
	void print() {
		PRINT(kingdom);
		PRINT(area);
		PRINT(type);
		PRINT(kind);
	}
	void read(vector<Varanus> ts) {
		ifstream file("varanus.csv");
		string s1, s2, s3, s4;
		for (int i = 0; i < 4; i++) {
			getline(file, s1, ';');
			getline(file, s2, ';');
			getline(file, s3, ';');
			getline(file, s4);
			ts.push_back(Varanus(s1, s2, s3, s4));
		}
		file.close();
	}
};

