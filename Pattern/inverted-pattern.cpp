#include <iostream>

int main(int argc, char const *argv[])
{
    /* code */
    int N;
    std::cin >> N;

    for (int i = 0; i < N; i += 1)
    {
        for (int j = 0; j < N + 1 - i; j += 1)
        {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
