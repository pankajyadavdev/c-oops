#include<iostream>
using namespace std;
class car
{
    public:
    string name ;
    int price ;
    int speed ;
};
void input(car &c1){
    cin>>c1.name>>" ">>c1.price>>" ">>c1.speed>>" ";
};
void display(car c1){
    cout<<c1.name<<" "<<c1.price<<" "<<c1.speed<<" "<<endl;
}

int main()
{
   // car c1;
   // c1.name = "audi";
   // c1.price = 1000000;
   // c1.speed = 250;
    display( c1);
}