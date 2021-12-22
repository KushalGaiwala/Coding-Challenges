#include <iostream>
#include <cmath>

int ableToBuy(int, int *, int);
int *sortHouse(int *, int);
int main()
{
    int cases = 0, noOfHouse = 0, budget = 0;
    static int temp = 0;
    int *house;
    std::cin >> cases;
    if (cases >= 1 && cases <= 100)
    {
        while (cases > 0)
        {
            std::cin >> noOfHouse >> budget;
            house = new int[noOfHouse];
            for (int i = 0; i < noOfHouse; ++i)
            {
                std::cin >> house[i];
            }

            std::cout << "Case #" << ++temp << ": " << ableToBuy(budget, house, noOfHouse) << std::endl;
            --cases;
        }
    }
    delete[] house;
    return 0;
}

int *sortHouse(int *hse, int no)
{
    for (int i = 0; i < no; ++i)
    {
        for (int j = i + 1; j < no - 1; ++j)
        {
            if (hse[i] > hse[j])
            {
                hse[i] = hse[i] + hse[j];
                hse[j] = hse[i] - hse[j];
                hse[i] = hse[i] - hse[j];
            }
        }
    }
    return hse;
}

int ableToBuy(int budget, int *hse, int no)
{
    int *count = 0;
    for (int i = 0; i < no; ++i)
    {
        hse = sortHouse(hse, no);
        if (hse[i] <= budget)
        {
            budget -= hse[i];
            ++count;
        }
    }
    return *count;
}