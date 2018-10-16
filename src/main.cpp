#include "../include/neuron.h"
#include "../include/layer.h"
#include "../include/matrix.h"
#include "../include/neuralnetwork.h"

int main()
{
    std::vector<int> topology;
    topology.push_back(3);
    topology.push_back(2);
    topology.push_back(3);
    
    NeuralNetwork *nn = new NeuralNetwork(topology);
    nn->printToConsole();
    
    return 0;
}