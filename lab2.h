#include<iostream>
#include<string>
using namespace std;
class Bmi{
public:
 void setHeight(float a);
 void setWeight(float b);
 float getBmi();
 string gary(float bmi); 
private:
 float height,weight;
};
