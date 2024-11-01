#include <iostream>

int main() {
    int N;
    std::cout << "请输入一个正整数 N：";
    std::cin >> N;

    int sum = 0;
    std::cout << "被加到总和的数字有：";

    for (int i = 1; i <= N; i++) {
        // 如果 i 是 10，终止循环
        if (i == 10) {
            break;
        }

        // 如果 i 是 5 的倍数，跳过这个数字
        if (i % 5 == 0) {
            continue;
        }

        // 加入总和
        sum += i;
        std::cout << i << " ";  // 输出被加的数字
    }

    std::cout << "\n总和为： " << sum << std::endl;

    return 0;
}
