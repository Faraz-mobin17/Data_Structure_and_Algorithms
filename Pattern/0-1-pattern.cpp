#include <iostream>

int main(int argc, char const *argv[])
{
    
    int N;
    std::cin >> N;  
    for (int i = 0; i < N; i += 1)
    {
        for (int j = 0; j <= i; j += 1)
        {
            if ((i + j) % 2 == 0)
            {
                std::cout << " 1";
            } 
            else 
            {
                std::cout << " 0";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}
