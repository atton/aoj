#include <iostream>

int solve (int);

int main(int argc, char const* argv[])
{
    int times = 0;

    while (true) {
        if(solve(++times) == 1) break;
    }
    return 0;
}

int solve(int times) {
    int max_weight, item_count;
    int prices[1000] = {0};
    int weights[1000] = {0};

    std::cin >> max_weight;
    if (max_weight == 0) return 1;

    std::cin >> item_count;

    for(int i = 0; i < item_count; i++) {
        int p, w;
        char c;
        std::cin >> p >> c >> w;

        prices[i]  = p;
        weights[i] = w;
    }

    int dp[1010] = {0};


    for (int i = 0; i < item_count; i++) {
        int tmp_dp[1010] = {0};

        tmp_dp[weights[i]] = prices[i];

        for (int j = 0; j < 1001; j++) {
            if (dp[j] == 0) continue;

            int plus_weight = j + weights[i];
            int plus_price  = dp[j] + prices[i];
            if (plus_weight > max_weight) continue;
            if (plus_weight >= 1001) continue;
            tmp_dp[plus_weight] = plus_price;
        }

        for (int i = 0; i <= max_weight; i++) {
            dp[i] = std::max(dp[i], tmp_dp[i]);
        }
    }

    int min_weight = 99999;
    int max_price  = 0;
    for (int i = 0; i <= max_weight; i++) {
        if (max_price < dp[i]) {
            max_price  = dp[i];
            min_weight = i;
        } else if (max_price == dp[i]) {
            min_weight = std::min(i, min_weight);
        }
    }

    std::cout << "Case " << times << ":" << std::endl;
    std::cout << max_price << std::endl;
    std::cout << min_weight << std::endl;

    return 0;
}
