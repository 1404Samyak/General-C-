#include <bits/stdc++.h>  
using namespace std;
class employee{
private:
long long int salary; //private attributes only accessed inside the class function
public: //public attributes can be accessed in the main function also
string name;
string position;
char level;
//constructor with its parameters
employee(string x,string y,char z){
    name=x;
    position=y;
    level=z;
}
//setter function(to provide values to private attributes using setter function)
void setsalary(long long int s){
    salary=s;
}
//getter function (for accessing values of private attributes using getter function)
long long int getsalary(){
    return salary;
}
};
int main(){
    employee e1("Samyak","Ceo",'A');//e1 is the object of the class employee
    e1.setsalary(10000000);
    cout<<e1.name<<" the "<<e1.position<<" of our compnay has a whooping salary of "<<e1.getsalary()<<endl;
    return 0;
}
