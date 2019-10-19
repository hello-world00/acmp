#include <bits/stdc++.h>


bool inField(std::vector<std::pair<int, int>> &field, std::pair<int, int> l);

int main()
{
    int N, M, k, time = 0, total;
    int i, j;
    std::cin >> N >> M;
    total = N * M;
    
    
    std::cin >> k;
    std::vector<std::pair<int, int>> field(k);
    for (int p = 0; p < k; p++)
    {
        std::cin >> i >> j;
        field[p] = std::make_pair(i, j);
    }



    int oldSize = 0;
    while (total != field.size())
    {
        int newSize = field.size();
        
        for (int i = oldSize; i < newSize; i++)
        {
            if (field[i].first > 1)
            {
                auto l = std::make_pair(field[i].first - 1, field[i].second);
                if (!inField(field, l))
                    field.push_back(l);
            }
            if (field[i].first < N)
            {
                auto l = std::make_pair(field[i].first + 1, field[i].second);

                if (!inField(field, l))
                    field.push_back(l);
            }

            if (field[i].second > 1)
            {
                auto l = std::make_pair(field[i].first, field[i].second - 1);

                if (!inField(field, l))
                    field.push_back(l);
            }


            if (field[i].second < M)
            {
                auto l = std::make_pair(field[i].first, field[i].second + 1);

                if (!inField(field, l))
                    field.push_back(l);
            }
         
        }
        oldSize = newSize;
        ++time;
    }

    std::cout << time << std::endl;
    return 0;

}

bool inField(std::vector<std::pair<int, int>> &field, std::pair<int, int> l)
{

    for (auto a : field)
    {
        if (l == a)
            return true;
    }
    return false;
}