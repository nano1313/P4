// Utilidades
#ifndef UTILS_HH
#define UTILS_HH
#include <string>

using namespace std;

int StrToInt(string s){
  if(s=="1")
    return 1;
  else if(s=="2")
    return 2;
  else if(s=="3")
    return 3;
  else if(s=="4")
    return 4;
  else if(s=="5")
    return 5;
  else if(s=="6")
    return 6;
  else if(s=="7")
    return  7;
  else if(s=="8")
    return  8;
  else if(s=="9")
    return  9;
  else if(s=="10")
    return  10;
  else if(s=="0")
    return 0;
  else
    return -1;
}


string IntToStr(int s){
  if(s==1)
    return "1";
  else if(s==2)
    return "2";
  else if(s==3)
    return "3";
  else if(s==4)
    return "4";
  else if(s==5)
    return "5";
  else if(s==6)
    return "6";
  else if(s==7)
    return  "7";
  else if(s==8)
    return  "8";
  else if(s==9)
    return  "9";
  else if(s==10)
    return  "10";
  else if(s==0)
    return "0";
  else
    return "-1";
}
#endif
