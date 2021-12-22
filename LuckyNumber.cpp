#include <iostream>

int main()
{
  int *ans;
  int t;
  int a, b, c;

  std::cin >> t;
  if (t <= 1000 && t >= 1)
  {
    ans = new int[t];
    for (int i = 0; i < t; ++i)
    {
      std::cin >> a >> b >> c;
      if (a >= 0 && a <= 9 && b >= 0 && b <= 9 && c >= 0 && c <= 9)
      {
        if (a == 7)
        {
          ans[i] = 1;
        }
        else if (b == 7)
        {
          ans[i] = 1;
        }
        else if (c == 7)
        {
          ans[i] = 1;
        }
        else
        {
          ans[i] = 0;
        }
      }
    }

    for (int i = 0; i < t; ++i)
    {
      if (ans[i])
      {
        std::cout << "YES";
      }
      else
      {
        std::cout << "NO";
      }

      std::cout << "\n";
    }
    delete[] ans;
  }
  return 0;
}