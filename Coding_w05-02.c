#include <stdio.h>  

int main() {
    // ข้อมูลนักเรียน
    char name[30] = "Oum";      // ประกาศตัวแปร name เก็บชื่อ โดยใช้ array ของ char ขนาด 30 ตัวอักษร
    int age = 19;               // เก็บอายุของนักเรียนเป็นจำนวนเต็ม
    float height = 153.0;       // เก็บความสูงเป็นเลขทศนิยม

    // ข้อมูลผลการเรียน
    char subject = 'M';         // รหัสวิชา เช่น M หมายถึงวิชา Math
    float grade = 4.00;         // เกรดของวิชานั้น เช่น 4.00
    char symbol = 'A';          // สัญลักษณ์ที่แทนเกรด เช่น A

    // แสดงผลข้อมูลทางหน้าจอ
    printf("%s is %d years old and %.1f centimeters tall.\n", name, age, height);

    printf("In subject %c, %s got %.2f which is symbolized as '%c'.\n", subject, name, grade, symbol);

    return 0;
}