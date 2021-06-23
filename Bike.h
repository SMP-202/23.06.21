#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <vector>
#include <Windows.h>
#include <conio.h>
using namespace std;

class Bike {
private:
	string model;
	int volume;
public:
	Bike(string model, int volume):model(model), volume(volume){}
	Bike(){}
	void print() {
		cout << " Model:" << model << endl;
		cout << " Volume:" << volume << endl;
	}
};