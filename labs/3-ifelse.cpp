#include <iostream>


//according to the score of the student, print the level of the student

//[95,100] A+
//[90,95) A 
//[85,90) A- 
//[80,85) B+ 
//[75,80) B
//[70,75) B-
//[60,70) C
//[0,60)  F
int main() {
    int score;

    std::cout << "请输入学生的分数（0-100）：";
    std::cin >> score;

    // 检查分数有效性
    if (score < 0 || score > 100) {
        std::cout << "输入无效，请输入 0 到 100 之间的分数。" << std::endl;
    } else {

    }

    return 0;
}
