#include<iostream>
using namespace std;

class Salary{
    protected:
        int salary;
};

class Programmer: public Salary{
    public:
        int bonus;
        void setSalary(int c){
            salary = c;
        };
        int getSalary(){
            return salary;
        };
};


int main(){
    Programmer p1;
    p1.setSalary(30000);
    cout << p1.getSalary() << endl;
    return 0;
}