#include<iostream>
#include<string>
using namespace std;

class Hari{
    public:
        string printHari(){
            return "Hari";
        }
};

class ShriJi{
    public:
        string printShri(){
            return "Shrimati Radha Rani";
        }
};

class sum: public Hari, public ShriJi{
    public:
        string yourname;
};

int main(){
    sum s1;
    s1.yourname = "Prince";
    string shri = s1.printShri();
    string hari = s1.printHari();
    cout << s1.yourname << " is praying to " << shri << " to get service of Lord " << hari << "." << endl;
    return 0;
}