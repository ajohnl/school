#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
bool found=false;
cout << "LEFT BY REST\n";
int i=1,up,by,rest;
cin >> up >> by >> rest;
while(found==false){
	if(((up*i)%by)==rest){found=true;}
	i++;
}
cout << i << "\n";
return 0;
}
