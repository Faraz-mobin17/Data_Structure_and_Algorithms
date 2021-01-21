/*

write a program to formulate linear programming problem of the farmer problems which is given as 

suppose that a farmer has a piece of farm land, say A square km large to be planted with either wheat or barley or some ciombination of the two.The farmer has a limited permissible amount F of fertilizers and P of insecticide which can be used each of which is required in different amounts per unit area for whaeat (F1,P1) and barley (f2,p2).lET s1 BE THE SELLING PRICE OF WHEAT , AND s2 THE PRICE OF BARLEY IF WE DENOTE THE AREA PLANTED WITH WHEAT AND BARLEY WITH X1 AND X2 RESPECTIVELY, THEN THE OPTIMAL NUMBER OF SQUARE km to plant with wheat vs barley can be expressed as a linear programming problem: 


take constant 
x1 and x2
input -> f1 
input -> p1

input -> f2
input -> p2

input -> s1
input -> s2

*/
#include <iostream>
using namespace std;

int main() {
    int p1,p2,f1,f2,s1,s2,z,F,P,A,x1,x2;
    cout << "maximize z = s1x1+s2x2 (maximize the revenue-this is the objection function)" << endl;
    cout << "subject to: x1+x2 <=A (limit on total area)" << endl;
    cout << "f1x1+f2x2<=F(limit on fertilizer)" << endl;
    cout << "x1>=0,x2>=0(cannot plant a negative area)" << endl;
    cout << "Enter the value of p1 and p2: " << endl;
    cin >> p1 >> p2;

    cout << "Enter the value of f1 and f2: " << endl;
    cin >> f1 >> f2;

    cout << "Enter the value of s1 and s2: " << endl;
    cin >> s1 >> s2;

    cout << "Enter A F P: " << endl;
    cin >> A >> F >> P;

cout<<"Maximize Z="<<s1<<"x1+"<<s2<<"x2 (maximize the revenue-this is the objective function)";
    cout<<"\nsubject to: x1+x2<="<<A<<" (limit on total area)";
    cout<<"\n"<<f1<<"x1+"<<f2<<"x2<="<<F<<" (limit on fertilizer)";
    cout<<"\n"<<p1<<"x1+"<<p2<<"x2<="<<P<<" (limit on insecticide)";
    cout<<"\nx1>=0,x2>=0 (cannot plant a negative area)";



    return 0;
}
