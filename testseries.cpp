#include <iostream>

int main()
{
  int *ans, *r;
  int t;

  std::cin >> t;
  if (t <= 1000 && t >= 1)
  {
    ans = new int[t];
    r = new int[5];

    for (int i = 0; i < t; ++i)
    {
      int ind = 0, eng = 0;
      std::cin >> r[0] >> r[1] >> r[2] >> r[3] >> r[4];
      for (int j = 0; j < 5; ++j)
      {
        if (!(r[j] >= 0 && r[j] <= 2))
        {
          return 0;
        }

        if (r[j] == 1)
        {
          ++ind;
        }
        else if (r[j] == 2)
        {
          ++eng;
        }
        else if (r[j] == 0)
        {
          ++ind;
          ++eng;
        }
        else
        {
          return 0;
        }
      }

      if (ind == eng)
      {
        ans[i] = 0;
      }
      else if (ind > eng)
      {
        ans[i] = 1;
      }
      else if (ind < eng)
      {
        ans[i] = 2;
      }
    }
    for (int i = 0; i < t; ++i)
    {
      if (ans[i] == 0)
      {
        std::cout << "DRAW";
      }
      else if (ans[i] == 1)
      {
        std::cout << "INDIA";
      }
      else if (ans[i] == 2)
      {
        std::cout << "ENGLAND";
      }
      else
      {
        return 0;
      }
      std::cout << "\n";
    }
    delete[] ans;
    delete[] r;
  }
  return 0;
}