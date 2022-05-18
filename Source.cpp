#include <iostream>

using namespace std;

/*Written in about two hours, still no Gui.*/

int main() {

	double Bore; // Cylinder Bore
	double Stroke; // Cylinder Stroke
	double pi = 3.1415; //The number Pi

	char UserInput1; // Bore Size Verification
	char UserInput2; // Stroke Size Verification

	cout << "Compression Ratio Calculator, Please input your Bore." << endl;
	cout << "Bore: ";
	cin >> Bore;
	cout << "Your bore is: " << Bore << ", Correct? y/n" << endl;
	cin >> UserInput1;

	if (UserInput1 == 'n') {
		cout << "Please input a new Bore: " << endl;
		cout << "Bore: ";
		cin >> Bore;
		UserInput1 = 'y';
	};

	while (UserInput1 == 'n') {
		_mm_pause;
	}

	cout << "Please enter your Stroke." << endl;
	cout << "Stroke: ";
	cin >> Stroke;
	cout << "Your Stroke is " << Stroke << ", Correct? y/n" << endl;
	cin >> UserInput2;


	if (UserInput2 == 'n') {
		cout << "Please input a new Stroke: " << endl;
		cout << "Stroke: ";
		cin >> Stroke;
		UserInput2 = 'y';
	};

	while (UserInput2 == 'n') {
		_mm_pause;
	}

	double PTH; // Piston to Head Distance for calculation of Vc

	cout << "Please input your Piston to head distance." << endl;
	cin >> PTH;

	double Vd = (Bore * pi) * Stroke; // Maths
	double Vc = (Bore * pi) * PTH; // Maths
	double CR = (Vd + Vc) / Vc; // Maths

	cout << "Your compression ratio is: " << CR << ":1." << endl; // Output of Compression Ratio.
	cout << "Created by Farm-Boy_7130 | 5/17/22 9:54 PM. Copyright 2022" << endl;

	char ignore;
	cin >> ignore;

}
