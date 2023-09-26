
/*
We can just have the constructor set two private integers for the number of points, frequency, and (optional) shift
    Constructor should also clear the .txt file


Then, a function that takes each point and makes the lines, which calls:
    a function that calculates the slope and info of each line (which calls)
        a function that puts the points into desmos format in a .txt file
*/


class stars {

public:

stars(int, int, double);
string lineMaker(int, int);
void formatOutput();

private:

double *pointArray;
int numPoints;
int frequency;
double shiftFactor;


};