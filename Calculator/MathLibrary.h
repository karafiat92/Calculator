#pragma once

namespace MathLibrary {

    class Operation    {
    public:
        // Returns a + b
        static double Add(double a, double b);

        // Returns a - b
        static double Subtract(double a, double b);

        // Returns a * b
        static double Multiply(double a, double b);

        // Returns a / b
        static double Divide(double a, double b);

        // Returns a | b
        static int OR(double a, double b);

        // Returns a & b
        static int AND(double a, double b);

        // Returns a ^ b
        static int XOR(double a, double b);
    };
}