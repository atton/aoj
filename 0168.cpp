#include <iostream>

int main(int argc, char const* argv[])
{
    int dp[35] = {0};



    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 1;

    for (int i = 1; i < 31; i++) {
        if(i >= 1) dp[i] += dp[i-1];
        if(i >= 2) dp[i] += dp[i-2];
        if(i >= 3) dp[i] += dp[i-3];
    }

    while (true) {
        int n;
        std::cin >> n;
        if (n == 0) break;

        int year = 0;
        year = dp[n-1] / 3650;
        if ((dp[n-1] % 3650) > 0) year +=1;
        std::cout << year << std::endl;
    }

    return 0;
}

