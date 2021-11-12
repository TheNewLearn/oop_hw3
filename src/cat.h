
#ifndef CAT_H
#define CAT_H
#include <string>

class Cat {
public:
  
  
  Cat(std::string name, double weight) {
    _name = name;
    _weight = weight;
  }
  
  ~Cat() {
    //delete [] _toyCollections;
  }

  std::string getName() {
    return _name;
  }

  double getWeight() {
    return _weight;
  }
  

  void addNewToy(std::string toyName) {

    if(_toyAmount == 0){
      _toyCollections = new std::string[_toyAmount+1];
      _toyCollections[_toyAmount] =  toyName;
      _toyAmount+=1;
    }else{

    std::string* array;
    array = _toyCollections;
    _toyCollections = new std::string[_toyAmount+1];
    for(int i=0;i<_toyAmount;i++){
      _toyCollections[i] = array[i];
    }
    _toyCollections[_toyAmount] =  toyName;
    _toyAmount+=1;
    delete[] array;
    
    }
    
    
    
    
    
    
  }

  std::string getToy(int index) {
    if(index<0 || sizeof(_toyCollections) ==0 || index>_toyAmount - 1){
      throw std::string("undefined");
    }
    else{
      return _toyCollections[index];
    }
     
  
  }
  

private:
  std::string _name;
  double _weight;
  std::string * _toyCollections;
  int _toyAmount =0;

};
#endif