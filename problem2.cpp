
#include <iostream>
using namespace std;

/*
  Problem: For each array given, what is the largest value?

  Use loops and conditionals!

*/ 

int main(){
  int arr1[6] = {3,6,5,5,2,1}; // the answer should be 6
  string arr2[4] = {"z", "a", "b", "c"}; // the answer should be "z"

  // put your code in here
  int largestnum = 0;
  for (int i = 0; i < 6; i++){
    if (arr1[i] > largestnum){
        largestnum = arr1[i];
    }
  }
  cout << largestnum;
  cout << "\n";

  int lastletter = 97;
  for (int i = 0; i < 4; i++){    
    if ((int)(arr2[i].c_str()[0]) > lastletter){ 
        lastletter = (int)arr2[i].c_str()[0];
    }
  }
  cout << char(lastletter);
  cout << "\n";

}