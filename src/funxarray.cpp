#include <iostream>
#include <climits>
#include <functional>


int add (int num1, int num2) {return num1 + num2;}
int divide (int num1, int num2) {return num1 / num2;}
int multiply (int num1, int num2) {return num1 * num2;}
int subtract (int num1, int num2) {return num1 - num2;}

//typedef int (*func_t) (int, int);
typedef std::function<int(int,int)> func_t;

struct operation_t {
    char operation;
    func_t func;
};

int main(){

    int a = INT_MAX;
    int b = 2;
    
    operation_t operations[] {
         {'A', add},
         {'D', divide},
         {'M', multiply},
         {'S', subtract}
    };

    for (int i = 0; i < 4; ++i){
         std::cout << "Function "<< operations[i].operation << " : "<< 
             operations[i].func(a,b) << std::endl;
    }
}
