#include <iostream>
#include <string>
#include <cmath>
#include <assert.h>
using namespace std;

enum Flag {POLAR};

class Complex
{
    double real, imag;
    double mag, theta;
    bool polar;

    // private accessors
    void calculate_polar();
    void calculate_cartesian();
    void abs();

    string to_string();

public:
    // constructors
    Complex();
    Complex(double r, double i);
    Complex(double m, double t, Flag);

    // accessors
    double get_real();
    double get_imag();
    double get_mag();
    double get_theta();

    // member functions
    Complex operator + (const Complex& c);
    Complex operator * (Complex& c);
    string str_cartesian();
    string str_polar();
};