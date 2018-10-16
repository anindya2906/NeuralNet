#include "../include/neuron.h"

Neuron::Neuron(double val){
    this->val = val;
    activate();
    derive();
}

void Neuron::activate(){
    //f(x) = x / (1 + |X|)
    this->activatedVal = this->val / (1 + fabs(this->val));
}

void Neuron::derive(){
    // f'(x) = f(x) / (1 - f(x))
    this->derivedVal = this->activatedVal * (1 - this->activatedVal);
}

void Neuron::setVal(double val){
    this->val = val;
    activate();
    derive();
}

double Neuron::getVal(){
    return this->val;
}

double Neuron::getActivatedVal(){
    return this->activatedVal;
}

double Neuron::getDerivedVal(){
    return this->derivedVal;
}