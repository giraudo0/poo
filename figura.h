// figura.h
#pragma once
#include <string>
using namespace std;

class figura
{
  protected:
    string tipo;
  public:
    figura();
    figura(string t);
    string get_tipo();
    void set_tipo(string t);
};
