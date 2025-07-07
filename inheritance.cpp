#include <bits/stdc++.h>
using namespace std;
class employee{
private:
long long int salary;
public:
string name;
string position;
char level;
employee(string x,string y,char z){
    name=x;
    position=y;
    level=z;
}
void setsalary(long long int s){
    salary=s;
}
long long int getsalary(){
    return salary;
}
};
class software_employee:public employee{

};
int main(){
    employee e1("Samyak","CEO",'A');
    software_employee e2();
    
    return 0;
}