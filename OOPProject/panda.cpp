#include "panda.hpp"

Panda* Panda::getinstance(){
    if (!instance)
      instance = new Panda;
      return instance;}

int Panda::getData(){
    return this -> data;

}

void Panda::setData(int data){
    this -> data = data;

}
