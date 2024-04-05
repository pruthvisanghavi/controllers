#include "../include/pid_controller.hpp"

int main(){
	PID pid(0, 0.1, 0.1, 0.01, 0.05, 100, -100); // Tuned controller
	// PID pid(0, 0.1, 0.1, 0.1, 0.5, 100, -100); // Untuned controller
	// double err;
	double out;

	double val = 100;
	double set_point = 55.0;

	for (int i = 0; i < 100; i++){

		out = pid.calculateVar(set_point, val);
		val += out;

		cout << "Correction: " << val << ", " << "Set point value: " << set_point << endl;
	}
	return 0;
}