#include "../include/pid_controller.hpp"

int main(){
	ofstream file;
	file.open("output.csv");
	// PID pid(0, 0.1, 0.1, 0.01, 0.05, 100, -100); // Tuned controller
	PID pid(0, 0.1, 0.1, 0.1, 0.5, 100, -100); // Untuned controller
	// double err;
	double out;
	double val = 1000;
	double set_point = 55.0;
	file << "set_point" << "," << "correction" << endl;
	for (int i = 0; i < 100; i++){

		out = pid.calculateVar(set_point, val);
		val += out;
		file << set_point << "," << val << endl; 
	}
	cout << "Output Generated" << endl;
	file.close();
	return 0;
}