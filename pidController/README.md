# PID Contoller

This is the implementation of Proportional Integral Derivative (PID) Controller implemented in C++11.\
The code is divided into two files
```
include/pid_controller.hpp
src/pid_controller.cpp
```
The header file is the public interface and the source file is the implementation. The third file,
```
src/pid_controller_test.cpp
```
is the test file. The file contains the test on a tuned PID controller.

### Run Instructions
Clone the repository as,
```
git clone https://github.com/Pruthvi-Sanghavi/pid_controller.git
```

Code can be compiled and executed as follows,\
First enter the source folder
```
cd pid_controller/src
g++ -std=c++11 pid_controller.cpp pid_controller_test.cpp -o pid_controller
./pid_controller
```
### Output
Shown below is the ouput after ```50 iterations``` when the ```set point``` is kept at ```55``` and the ```initial value``` is ```100```.
```
After Correction: 72.956, Set point value: 55
After Correction: 84.6644, Set point value: 55
After Correction: 75.8141, Set point value: 55
After Correction: 78.1371, Set point value: 55
After Correction: 74.6387, Set point value: 55
After Correction: 74.4044, Set point value: 55
After Correction: 72.5617, Set point value: 55
After Correction: 71.7093, Set point value: 55
After Correction: 70.4479, Set point value: 55
After Correction: 69.5184, Set point value: 55
After Correction: 68.5168, Set point value: 55
After Correction: 67.6524, Set point value: 55
After Correction: 66.8067, Set point value: 55
After Correction: 66.0371, Set point value: 55
After Correction: 65.3071, Set point value: 55
After Correction: 64.6311, Set point value: 55
After Correction: 63.9964, Set point value: 55
After Correction: 63.4051, Set point value: 55
After Correction: 62.8518, Set point value: 55
After Correction: 62.3354, Set point value: 55
After Correction: 61.8527, Set point value: 55
After Correction: 61.4019, Set point value: 55
After Correction: 60.9807, Set point value: 55
After Correction: 60.5873, Set point value: 55
After Correction: 60.2197, Set point value: 55
After Correction: 59.8763, Set point value: 55
After Correction: 59.5555, Set point value: 55
After Correction: 59.2558, Set point value: 55
After Correction: 58.9758, Set point value: 55
After Correction: 58.7142, Set point value: 55
After Correction: 58.4699, Set point value: 55
After Correction: 58.2416, Set point value: 55
After Correction: 58.0283, Set point value: 55
After Correction: 57.8291, Set point value: 55
After Correction: 57.643, Set point value: 55
After Correction: 57.4691, Set point value: 55
After Correction: 57.3067, Set point value: 55
After Correction: 57.1549, Set point value: 55
After Correction: 57.0131, Set point value: 55
After Correction: 56.8807, Set point value: 55
After Correction: 56.757, Set point value: 55
After Correction: 56.6414, Set point value: 55
After Correction: 56.5334, Set point value: 55
After Correction: 56.4325, Set point value: 55
After Correction: 56.3383, Set point value: 55
After Correction: 56.2502, Set point value: 55
After Correction: 56.168, Set point value: 55
After Correction: 56.0911, Set point value: 55
After Correction: 56.0194, Set point value: 55
After Correction: 55.9523, Set point value: 55

```
