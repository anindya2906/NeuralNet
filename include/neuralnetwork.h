#ifndef _NEURAL_NETWORK_H_
#define _NEURAL_NETWORK_H_

#include <iostream>
#include <vector>
#include "layer.h"
#include "matrix.h"

class NeuralNetwork{
  public:
    NeuralNetwork(std::vector<int> topology);
    void printToConsole();
    
  private:
    int topologySize;
    std::vector<int> topology;
    std::vector<Layer*> layers;
    std::vector<Matrix*> weightMatrix;    
};

#endif