#include<iostream>

using namespace std;
class boy{
public:
    int age;
    string name;
    float height;
};
int main(){
    boy b1;
    b1.age = 20;
    b1.name = "ram";
    b1.height = 6.0;
    cout<<b1.age<<endl;
    cout<<b1.name<<endl;
    cout<<b1.height<<endl;

}
