#include <stdio.h>
#include "pi_calculator.h"

int main() {
    // 调用模块初始化
    init_module();

    // 测试不同精度值下的π计算
    int precisions[] = { 10, 100, 1000, 10000, 100000 };
    int num_tests = sizeof(precisions) / sizeof(precisions[0]);

    for (int i = 0; i < num_tests; i++) {
        double pi_approx = calculate_pi(precisions[i]);
        printf("Precision %d: pi ≈ %.15f\n", precisions[i], pi_approx);
    }

    // 清理模块资源
    cleanup_module();

    return 0;
}
