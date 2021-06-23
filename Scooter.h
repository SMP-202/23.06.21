#pragma once

class Scooter {
	string model;
	string color;
	int vol;
public:
	Scooter(string model, string color, int vol) :model(model), color(color), vol(vol){}
	Scooter(){}
	void print() {
		cout << "Scooter model: " << model << endl
			<< "Color: " << color << endl
			<< "Volume: " << vol << endl;
	}
};