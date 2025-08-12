//SHIVANGI Singh
//2407013148
//B3
#include <iostream>
using namespace std;

class cube {
private:
    int height;
    int width;
    int length;

public:
    void getInput() {
        cout << "Enter height: ";
        cin >> height;
        cout << "Enter width: ";
        cin >> width;
        cout << "Enter length: ";
        cin >> length;
    }

    int volume() {
        int v;
        v = height * width * length;
        return v;
    }
};

int main() {
    cube cube1;

    cube1.getInput(); 
    int vol = cube1.volume(); 

    cout << "Volume: " << vol << endl;

    return 0;
}

/*
Output
Enter height: 21
Enter width: 18
Enter length: 2
Volume: 756

*/
