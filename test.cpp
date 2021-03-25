#include<iostream>

// add 0 to 100 

int main(){

  double total=0.0;

  for(int i=0;i<=100; i++){
    total+=i;
  }

  std::cout<<total<<std::endl;
  return 0;
}
