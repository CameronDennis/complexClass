#include <iostream>
#include <cmath>
class Complex {
private:
    double real;
    double imag;
public:
    Complex() {real = 0; imag = 0;}
    Complex(double r, double i) {real = r; imag = i;}
    double mag() {
        return std::sqrt(real*real+imag*imag);
    }
    void accum(Complex B) {
        real += B.real;
        imag += B.imag;
    }
    void print() {
        std::cout << real << " + j" << imag << std::endl;
    }
};

int main() {
    //Create variables
    Complex A;
    Complex B(2, 5);
    Complex C(1,1);
    //Execution
    std::cout << "A: ";
    A.print();
    std::cout << "Magnitude of A: " <<  A.mag() << std::endl;
    std::cout << "B: ";
    B.print();
    std::cout << "Magnitude of B: " <<  B.mag() << std::endl;
    std::cout << "C: ";
    C.print();
    std::cout << "Magnitude of C: " <<  C.mag() << std::endl;
    C.accum(B);
    std::cout << "C.accum(B): ";
    C.print();
    std::cout << "Magnitude of C.accum(B): " <<  C.mag() << std::endl;
    return 0;
}
