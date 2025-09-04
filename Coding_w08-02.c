#include <stdio.h>

int main() {
    int start, stop; // ประกาศตัวแปรสำหรับเก็บค่าเริ่มต้นและค่าสุดท้าย

    // รับค่าจากผู้ใช้
    printf("Enter start number: ");
    scanf("%d", &start); // รับค่า start จากคีย์บอร์ด

    printf("Enter stop number: ");
    scanf("%d", &stop); // รับค่า stop จากคีย์บอร์ด

    // แสดงค่าที่ผู้ใช้กรอก
    printf("Start number is %d and stop number is %d\n", start, stop);

    printf("________________\n");

    // แสดงลำดับตัวเลขจาก start ถึง stop
    printf("Sequence from start to stop: ");
    for (int i = start; i <= stop; i++) { 
        printf("%d ", i); // แสดงค่า i ทีละ 1
    }

    printf("Thank you.\n"); // แสดงข้อความปิดท้าย

    return 0;
}

/*
อธิบายการทำงานของโปรแกรม:
1. ประกาศตัวแปร start และ stop เพื่อเก็บค่าตัวเลขเริ่มต้นและตัวเลขสุดท้ายที่ผู้ใช้กรอกเข้ามา
2. ใช้ printf() แสดงข้อความให้ผู้ใช้กรอกค่า แล้วใช้ scanf() รับค่าจากคีย์บอร์ด
3. แสดงข้อความยืนยันค่าเริ่มต้นและค่าสุดท้าย
4. พิมพ์เส้นคั่น "________________"
5. ใช้ for loop เริ่มจากตัวเลข start และเพิ่มค่า i ทีละ 1 จนถึง stop 
   เพื่อแสดงลำดับตัวเลขทั้งหมดในบรรทัดเดียวกัน
6. แสดงข้อความ "Thank you." เมื่อจบการทำงาน
*/