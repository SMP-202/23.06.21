#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <vector>
#include <Windows.h>
#include <conio.h>
using namespace std;

class Book {
private:
	string name;
	string author;
public:
	Book(string name, string author):name(name),author(author){}
	Book(){}
	void print(){
		cout << "Name: \t" << name << "Author: " << author <<  endl;
	}
};
