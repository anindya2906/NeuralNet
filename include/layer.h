#ifndef _LAYER_H_
#define _LAYER_H_

#include <iostream>
#include <vector>
#include "neuron.h"

class Layer{
    public:
        Layer(int size);
        int getSize();
        void printToConsole();
        
    private:
        int size;
        std::vector<Neuron*> neurons;
};

#endif