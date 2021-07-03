#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
#include "Julie.h"
#include "Julie.csv"

using namespace std;

class Albatross
{
protected:
    int id;
    string family;
    string color;
    string size;
public:
    Albatross(int id, string family, string color, string size)
        :id(id), family(family), color(color), size(size) {}
    Albatross() {}
};

void Read(MyArray<Albatross>& cs) {
    string s1, s2, s3, s4;
    ifstream file("Julie.csv");
    for (int i = 0; i < 4; i++) {
        getline(file, s1, ';');
        getline(file, s2, ';');
        getline(file, s3, ';');
        getline(file, s4);
        cs.push(Albatross(stoi(s1), s2, s3, s4));
    }
    file.close();
}

void print() {
    string s = family + "\"" + color + "\"" + size;
    s.resize(40, '-');
    cout << s << id << endl;
}


