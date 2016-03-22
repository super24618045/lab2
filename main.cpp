#include<iostream>
#include<fstream>
#include<string>
#include"lab2.h"
#include<cstdlib>
using namespace std;
int main(){
Bmi tmr1;
float d,e,f;
ifstream inFile("file.in",ios::in);
ofstream outFile("file.out",ios::out);
if(!outFile){
 cerr<<"Failed opening"<<endl;
 exit(1);
}
if(!inFile){
 cerr<<"Failed opening"<<endl;
 exit(1);
}
while(inFile>>d>>e){
if(d==0)
{break;}
tmr1.setHeight(d);
tmr1.setWeight(e);
f=tmr1.getBmi();
outFile<<f<<"\t"<<tmr1.gary(f)<<endl;
}
return 0;
}
