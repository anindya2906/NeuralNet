#ifndef _NEURON_H_
#define _NEURON_H_

#include <iostream>
#include <math.h>

class Neuron{
  public:
    Neuron(double val);
    void activate();
    void derive();
    void setVal(double val);
    double getVal();
    double getActivatedVal();
    double getDerivedVal();
  
  private:
    double val;
    double activatedVal;
    double derivedVal;
};

#endif