//
// Created by lucad on 10/01/2024.
//
#include "KNN.h"
#include <algorithm>
#include <cmath>


KNN::KNN():
        k(1)
{
}

KNN::KNN(int _k):
        k(_k)
{
}

vector<int> KNN::findNearestNeighbours(vector<variant<double, string>> trainData, variant<double, string> &target) {
    return vector<int>();
}

double KNN::similarityMeasure(variant<double, string> &, variant<double, string> &) {
    return 0;
}


