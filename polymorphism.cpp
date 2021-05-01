#include<iostream>
using namespace std;

class God{
    public:
        void Supreme(){
            cout << "Hare Krsna" << endl;
        }
};

class LordShiva : public God{
    public:
        void Supreme(){
            cout << "I'm not supreme but Yes I chant the name of Lord Rama too" << endl;
        }
};

class LordBrahma : public God{
    public:
        void Supreme(){
            cout << "I'm not the supreme God but Yes I do devotional service for the supreme personality of Godhead Sri Krsna" << endl;
        }
};

int main(){
    God g1;
    LordShiva s1;
    LordBrahma b1;

    g1.Supreme();
    s1.Supreme();
    b1.Supreme();
    return 0;
}