#ifndef _MATRIX_H_
#define _MATRIX_H_

#include <iostream>
#include <vector>
#include <random>

class Matrix{
    public:
        Matrix(int numRows, int numCols, bool inRandom);
        void setVal(int r, int c, double v);
        double getVal(int r, int c);
        double generateRandomNumber();
        void printToConsole();
        Matrix* transpose();
    
    private:
        int numRows;
        int numCols;
        std::vector< std::vector<double> > values;
};

#endif