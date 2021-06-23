#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <vector>
#include <Windows.h>
#include <conio.h>
using namespace std;

class Pen {
private:
	string color;
	string material;
public:
	Pen(string color,string material):color(color),material(material){}
	Pen(){}

	void print() {
		cout << "color" << color << endl;
		cout << "material" << material << endl;
	}
};
