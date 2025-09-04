#include <stdio.h>

int main() {
    int i;

    // ใช้ while loop
    i = 2;
    while (i <= 10) {
        printf("%d ", i); // แสดงค่าของ i
        i += 2; // บวกเพิ่มทีละ 2 เพื่อให้ได้เลขคู่
    }
    printf("\nEnd of loop (while)\n\n");

    return 0;
}
//อธิบายการทำงาน:

// while loop:
//   - เริ่มต้น i = 2
//   - ตรวจสอบเงื่อนไข (i <= 10) ถ้าจริงจะแสดงค่า i แล้วบวกเพิ่มทีละ 2
//   - ทำซ้ำจนกว่า i จะมากกว่า 10