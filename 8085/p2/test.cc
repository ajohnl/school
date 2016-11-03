#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
int size=20;
int array[30]={1,2,3,3,3,3,4,5,6,7,7,7,5,5,5,5,3,3};
int number = array[0];
int mode = number;
int count = 1;
int countMode = 1;

for (int i=1; i<size; i++)
{
      if (array[i] == number) 
      {
         count++;
      }
      else
      {
            if (count > countMode) 
            {
                  countMode = count;
                  mode = number;
            }
           count = 1;
           number = array[i];
  }
}

cout << "mode : " << mode << endl;}
