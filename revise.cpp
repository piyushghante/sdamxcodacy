#include <iostream>
#include <string>

class shape{
public:
virtual int area()=0;

};
class circle:shape{
int rd;

public:

void setrd(int r){
    rd=r;
}

int area()
{
    return 3.14*rd*rd;
}

};
int main(){

circle set1;
set1.setrd(1);
int k=set1.area();

std::cout<<k;

}