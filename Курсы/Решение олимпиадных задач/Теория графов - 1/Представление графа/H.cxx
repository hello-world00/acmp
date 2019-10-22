#include <iostream>
#include <vector>

int main()
{

    int N;
    std::cin >> N;

    std::vector<std::vector<int>> G(N, std::vector<int>(N, 0));
    std::vector<int> dst(N), src(N);
    int dst_counter = 0, src_counter = 0;
    int dst_sum = 0, src_sum = 0;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            std::cin >> G[i][j];
    

    for (int i = 0; i < N;i++)
    {
        dst_sum = src_sum = 0;
        for (int j = 0; j < N; j++)
        {
            src_sum += G[j][i];
            dst_sum += G[i][j];
        }
        if (src_sum == 0) 
        {   src[i] = 1; 
            src_counter++;
        }
        if (dst_sum == 0) 
        {
            dst[i] = 1; 
            dst_counter++;
        }
    }

    std::cout << src_counter << ' ';
    for (int i = 0; i < N; i++)
        if (src[i])
            std::cout << i + 1 << ' ';
    std::cout << std::endl;

    std::cout << dst_counter << ' ';
    for (int i = 0; i < N; i++)
        if (dst[i])
            std::cout << i + 1 << ' ';
    std::cout << std::endl;


    return 0;
}