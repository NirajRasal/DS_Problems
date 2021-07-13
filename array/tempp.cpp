#include <iostream>
//using namespace std;

int main()
{
    int positive = 0, negative = 0, zero = 0, count;

    std::cout << "Enter the total count of numbers : " << std::endl;
    std::cin >> count;

    int values[count];

    std::cout << "Enter the numbers one by one separated by space : " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cin >> values[i];
    }

    for (int i = 0; i < count; i++)
    {
        if (values[i] > 0)
        {
            positive++;
        }
        else if (values[i] < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }

    std::cout << "Positive : " << positive << ", Negative : " << negative << ", Zero : " << zero << std::endl;
}