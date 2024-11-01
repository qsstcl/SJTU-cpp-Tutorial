#include <iostream>

int main() {
    int score;

    std::cout << "请输入学生的分数（0-100）：";
    std::cin >> score;

    // 检查分数有效性
    if (score < 0 || score > 100) {
        std::cout << "输入无效，请输入 0 到 100 之间的分数。" << std::endl;
    } else {
        // 判断等级
        if (score >= 90) {
            std::cout << "等级：A" << std::endl;
        } else if (score >= 80) {
            std::cout << "等级：B" << std::endl;
        } else if (score >= 70) {
            std::cout << "等级：C" << std::endl;
        } else if (score >= 60) {
            std::cout << "等级：D" << std::endl;
        } else {
            std::cout << "等级：F" << std::endl;
        }
    }

    return 0;
}
