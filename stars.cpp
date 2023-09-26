#include "stars.h"
#include <fstream>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

const double PI = 3.1415926535897932384626433832795028841971693993;

stars::stars(int nPoints, int freak, double offset){

    numPoints = nPoints;
    frequency = freak;
    pointArray = new double[nPoints]; 

    for(int i = 0; i < nPoints; i++){
        int pairHolder = i*2;
        pointArray[pairHolder] = (cos(((i+1)/nPoints)*2*PI));
        pointArray[pairHolder+1] = (sin(((i+1)/nPoints)*2*PI));
    }

}

string stars::lineMaker(int pointOne, int pointTwo){



}

void stars::formatOutput(){

}