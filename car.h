#pragma once
class Car {
private:
	string model;
	double vol;
public:
	Car(string model, double vol) :model(model), vol(vol) {}
	Car() {}
	void print() {
		cout << "Model: " << model << "\tVolume: " << vol << endl;
	}

};

