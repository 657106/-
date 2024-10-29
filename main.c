#include <stdio.h>
#include "pi_calculator.h"

int main() {
    // ����ģ���ʼ��
    init_module();

    // ���Բ�ͬ����ֵ�µĦм���
    int precisions[] = { 10, 100, 1000, 10000, 100000 };
    int num_tests = sizeof(precisions) / sizeof(precisions[0]);

    for (int i = 0; i < num_tests; i++) {
        double pi_approx = calculate_pi(precisions[i]);
        printf("Precision %d: pi �� %.15f\n", precisions[i], pi_approx);
    }

    // ����ģ����Դ
    cleanup_module();

    return 0;
}
