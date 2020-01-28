#include <iostream>

class Operation
{
public:
    Operation(double o1, double o2):
        op1(o1), op2(o2)
    {}
    
    double calculate(char operation)
    {
        double result;
        if (operation == '+')
            result = op1 + op2;
        else if (operation == '/')
            result = op1 / op2;
        else if (operation == '*')
            result = op1 * op2;
        else if (operation == '-')
            result = op1 - op2;
        return result;
    }
private:
    double op1, op2;
};
int main()
{
    while (true)
    {
    std::cout << "Calculate!--> ";
    char operation;
    double operand1, operand2;
    std::cin >> operand1 >> operation >> operand2;
    Operation op(operand1, operand2);
    std::cout << "Answer: " << operand1 << operation << operand2 
        << " = " << op.calculate(operation) << " \n";
    }
}
