#include "../include/neuralnetwork.h"

NeuralNetwork::NeuralNetwork(std::vector<int> topology){
    this->topology = topology;
    this->topologySize = topology.size();
    for(int i = 0; i < this->topologySize; i++){
        Layer *l = new Layer(this->topology.at(i));
        this->layers.push_back(l);
    }
    for(int i = 0; i < this->topologySize-1; i++){
        Matrix *m = new Matrix(this->topology.at(i), this->topology.at(i+1), true);
        this->weightMatrix.push_back(m);
    }
}

void NeuralNetwork::printToConsole(){
    for(int i = 0; i < this->topologySize; i++){
        std::cout << "Layer : " << i << std::endl;
        this->layers.at(i)->printToConsole();
        if(i < this->topologySize-1){
            std::cout << "Weight : " << i << std::endl;
            this->weightMatrix.at(i)->printToConsole();
        }
    }
}