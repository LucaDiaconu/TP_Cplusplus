//
// Created by lucad on 10/01/2024.
//

#ifndef UNTITLED_KNN_H
#define UNTITLED_KNN_H

#include <iostream>
#include <vector>
#include <variant>
#include <string>

using namespace std;

class KNN {
public:
    KNN();
    KNN(int);
    vector<int> findNearestNeighbours(vector<variant<double,string>> trainData, variant<double, string>& target);
    virtual double similarityMeasure(variant<double, string>&,variant<double, string>&);
protected:
    int k;
};


#endif //UNTITLED_KNN_H
