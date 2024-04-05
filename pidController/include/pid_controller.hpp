// PID Class
#ifndef PID_CONTROLLER_HPP
#define PID_CONTROLLER_HPP

#include <iostream>
#include <cmath>

using namespace std;

class PID {
private:
	
	double x; // Set point value
	double y; // Measured value
	double p_e; //previous error
	double dt; // time step
	double Kp, Ki, Kd; // Proportional, Integral and Differential gains
	double max, min; // Limits

public:

	// Constructor for PID Class
	PID(double p_e = 0, double dt = 0, double Kp = 0, 
		double Ki = 0, double Kd = 0, double max = 0, double min = 0);

	// Calculate PID control variable
	double calculateVar(double x, double y);
	
};

#endif