#include "../include/matrix.h"

Matrix::Matrix(int numRows, int numCols, bool isRandom){
    this->numRows = numRows;
    this->numCols = numCols;
    for(int i = 0; i < this->numRows; i++){
        std::vector<double> v;
        for(int j = 0; j < this->numCols; j++){
            double r = 0.0;
            if(isRandom){
                r = this->generateRandomNumber();
            }
            v.push_back(r);
        }
        this->values.push_back(v);
    }
}

double Matrix::generateRandomNumber(){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> dist(0.0,1.0);
    return dist(gen);
}

void Matrix::printToConsole(){
    for(int i = 0; i < this->numRows; i++){
        for(int j = 0; j < this->numCols; j++){
            std::cout << std::fixed << this->getVal(i,j) << "\t\t";
        }
        std::cout << std::endl;
    }
}

Matrix* Matrix::transpose(){
    Matrix *m = new Matrix(this->numCols, this->numRows, false);
    for(int i = 0; i < this->numRows; i++){
        for(int j = 0; j < this->numCols; j++){
            m->setVal(j,i,this->getVal(i,j));
        }
    }
    return m;
}

void Matrix::setVal(int r, int c, double v){
    this->values.at(r).at(c) = v;
}

double Matrix::getVal(int r, int c){
    return this->values.at(r).at(c);
}