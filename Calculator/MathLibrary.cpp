#include "MathLibrary.h"

namespace MathLibrary{

    double Operation::Add(double a, double b)    {
        return a + b;
    }

    double Operation::Subtract(double a, double b)    {
        return a - b;
    }

    double Operation::Multiply(double a, double b)    {
        return a * b;
    }

    double Operation::Divide(double a, double b)    {
        return a / b;
    }

    int Operation::OR(double a, double b)    {
        return static_cast<int>(a) | static_cast<int>(b);
    }

    int Operation::AND(double a, double b)    {
        return static_cast<int>(a) & static_cast<int>(b);
    }

    int Operation::XOR(double a, double b)    {
        return static_cast<int>(a) ^ static_cast<int>(b);
    }
}