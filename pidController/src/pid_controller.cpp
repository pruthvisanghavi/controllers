#include "../include/pid_controller.hpp"

PID::PID(double p_e, double dt, double Kp, double Ki, double Kd, double max, double min): 
		p_e(p_e), dt(dt), Kp(Kp), Ki(Ki), Kd(Kd), max(max), min(min)
		{

		}

double PID::calculateVar(double x, double y){
	double e;
	e = x - y;

	// Proportional term
	double Pout = Kp*e;

	// Integral Term
  	double integral;
  	integral += e*dt;
  	double Iout = Ki*integral;

  	// Derivative term
  	double derivative = (e - p_e)/dt;
  	double Dout = Kd*derivative;
  	
  	double output = Pout +	Iout + Dout;

  	if( output > max )
        output = max;
    else if( output < min )
        output = min;

    p_e = e;

  	return output;
}