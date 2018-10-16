#include "../include/layer.h"
#include "../include/neuron.h"


Layer::Layer(int size){
    this->size = size;
    
    for(int i = 0; i < this->size; i++){
        Neuron *n = new Neuron(0.0);
        this->neurons.push_back(n);
    }
}

int Layer::getSize(){
    return this->size;
}

void Layer::printToConsole(){
    for(int i = 0; i < this->size; i++){
        std::cout << std::fixed << this->neurons.at(i)->getVal() << "\t\t";
    }
    std::cout << std::endl;
}