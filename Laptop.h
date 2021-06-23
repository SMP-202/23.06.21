#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <vector>
#include <Windows.h>
#include <conio.h>
using namespace std;

class Laptop {
	string brand;
	string model;
public:
	Laptop(string brand, string model) :brand(brand), model(model){}
	Laptop(){}

	void print() {
		cout << "Brand: "<< brand << "Model: " << model << endl;
	}
};

int main() {

}