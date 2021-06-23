class Headphone {
	bool wirelesss;
	string price;
	string connector_type;
public:
	Headphone(bool wireless, string price, string connector_type):wireless(wireless), price(price), connector_type(connector_type){}
	Headphone(){}
	~Headphone(){}
	void print() {
		cout << boolalpha << " - wireless " << " price: " << price << " connector type: " << connector_type << endl;
	}

};
class Manufacturer: public Headphone {
	string country; 
	string material; 
public:
	Manufacturer(string country, string material): country(country), material(material){}
	Manufacturer(){}
	~Manufacturer(){}
	void print() {
		cout << "Country: " << country << " Material: " << material << endl;
	}
};