#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string store_txt;

    // ofstream MyFile("Hari.txt");
    // MyFile << "Hari Bol";
    // MyFile.close();

    ifstream MyFile("Hari.txt");
    while(getline(MyFile, store_txt)){
        cout << store_txt << endl;
    }
    return 0;
}