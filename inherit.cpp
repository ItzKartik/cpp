#include<iostream>
using namespace std;

class Vehicle{
    public:
        string brand;
        int addme(int a, int b){
            int c = a+b;
            return c;
        }
};

class Car:public Vehicle{
    public:
        string model;
};

class Bike:public Car{
    public:
        string name;
};

int main(){
    Bike b1;
    int c = b1.addme(10, 10);
    cout << c << endl;
    b1.name = "HondaXYZ";
    cout << b1.name << endl; 
    return 0;
}