#include <iostream> 
#include <string.h> 

using namespace std;

class square {
	int side;
	char simbol;
public:
	square() {
		side = 5;
		simbol = '#';
	}
	void PrintSquare() {

		for (int i = 1; i <= side; i++) {
			for (int j = 1; j <= side * 2; j++) {
				cout << simbol;
			}
			cout << endl;
		}
	}
	};

class rectangle {
	int side;
	char simbol2;
public:
	rectangle() {
		side = 5;
		simbol2 = '#';
	}
	void PrintRectangle() {

		for (int i = 1; i <= side; i++) {
			for (int j = 1; j <= side * 4; j++) {
				cout << simbol2;
			}
			cout << endl;
		}
	}
    };

class triangle {
	int height;
public:
	triangle() {
		height = 5;
	}

	void PrintTriangle() {
		for (int i = 0; i < height; i++) {
			cout << '*';
			for (int j = 0; j < i; j++) {
				cout << "**";
			}
			cout << endl;
		}
	}
	};





void main() {
	square obj;
	obj.PrintSquare();
	cout << endl;
	rectangle obj2;
	obj2.PrintRectangle();
	cout << endl;
	triangle obj3;
	obj3.PrintTriangle();

	}