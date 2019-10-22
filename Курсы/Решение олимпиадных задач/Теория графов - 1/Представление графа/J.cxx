#include <iostream>
#include <vector>

int main()
{
    int N;
    int A, B;
    std::vector<int> arr;
    std::vector<int> result;
    std::cin >> N;
    std::cin >> A >> B;
    
    for (int i = 0; i < N - 1;i++)
    {
        int k;
        std::cin >> k;
        arr.push_back(k);
    }

    for (int i = A - 2; i >= 0;)
    {
        if (arr[i] == B)
        {
            std::cout << B << std::endl;
            return 0;
        }
        result.push_back(arr[i]);
        i = arr[i] - 2;
    }


    for (int i = B - 2; i >= 0;)
    {
        if (arr[i] == A)
        {
            std::cout <<  A << std::endl;
            return 0;
        }

        for (int j = 0; j < result.size(); j++)
        {
            
            if (result[j] == arr[i])
            {
                std::cout << arr[i] << std::endl;
                return 0;            
            }

        }
        i = arr[i] - 2;
    }

    std::cout << 1 << std::endl;
    return 0;
}