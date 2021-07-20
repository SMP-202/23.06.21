#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <Windows.h>
#include "animals.csv"

using namespace std;

template <typename T>
class MyArray {
private:
    int size;
    T* arr;
public:
    MyArray(T* arr, int size) :arr(arr), size(size) {}
    MyArray(int size) :size(size) {
        arr = new T[size];
    }
    MyArray() :MyArray(0) {}
    T& operator[](int index) {
        return arr[index];
    }

    int Size() {
        return size;
    }
    void push(T data) {
        T* temp = new T[size + 1];
        for (int i = 0; i < size; i++) temp[i] = arr[i];
        temp[size] = data;
        delete[]arr;
        arr = temp;
        temp = nullptr;
        size++;
    }
    void pop() {
        T* temp = new T[size - 1];
        for (int i = 0; i < size - 1; i++) temp[i] = arr[i];
        delete[]arr;
        arr = temp;
        temp = nullptr;
        size--;
    }
    void sort() {
        for (int i = 0; i < size - 1; i++)
            for (int j = i + 1; j < size; j++)
                if (arr[i] > arr[j])
                    swap(arr[i], arr[j]);
    }
    ~MyArray() {
        delete[]arr;
    }
};

class Animal {
protected:
    int id;
    string type;
    string breed;
    string color;
public:
    Animal(int id, string type, string breed, string color) :id(id), type(type), breed(breed), color(color) {}
    Animal() {}
    ~Animal() {}
};

void read(MyArray<Animal>& a) {
    string s1, s2, s3, s4;
    ifstream file("animals.csv");
    for (int i = 0; i < 5; i++)
    {
        getline(file, s1, ';');
        getline(file, s2, ';');
        getline(file, s3, ';');
        getline(file, s4);
        a.push(Animal(stoi(s1), s2, s3, s4));
    }
    file.close();
}

void print() {
    string s = type + "\"" + breed + "\"" + color;
    s.resize(30, '-');
    cout << s << id << endl;
}