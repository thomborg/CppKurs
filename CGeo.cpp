//
// Created by thomas on 05.11.16.
//

#include "CGeo.h"

CGeo::CGeo(std::string label){
    this->label = label;
}

std::string CGeo::getLabel() {
    return this->label;
}