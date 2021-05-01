#include<iostream>
#include<string>
using namespace std;

class myClass{
    public:
        int myNum; // Variables declared under classess are known as attributes
        string myString;
        void sayhari();
};

void myClass::sayhari(){ // Outside Method
    cout << "Hari Bol";
}

int main(){
  myClass Obj1; // Create OBJECT
  Obj1.myNum = 1;
  Obj1.myString = "Hari";
  Obj1.sayhari(); // Call The Method

  cout << Obj1.myNum << endl;
  cout << Obj1.myString << endl;  
}