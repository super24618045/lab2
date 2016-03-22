#include"lab2.h"
void Bmi::setHeight(float a){
  height=a/100;
}
void Bmi::setWeight(float b){
  weight=b;
}
float Bmi::getBmi(){
  return weight/(height*height);
}
string Bmi::gary(float bmi){
 if(bmi>15&&bmi<16)
 {return"severely underweight";}
 if(bmi>16&&bmi<18.5)
 {return"underweight";}
 if(bmi>18.5&&bmi<25)
 {return"normal";}
 if(bmi>25&&bmi<30)
 {return"overweight";}
 if(bmi>30&&bmi<35)
 {return"obese class I";}
 if(bmi>35&&bmi<40)
 {return"obese class II";}
 if(bmi>=40)
 {return"obese class III";}
}
