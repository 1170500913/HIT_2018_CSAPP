#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

typedef unsigned char* byte_p;

int showByte(byte_p pt);
bool isLittleEndian(void);

int main()
{
    if(isLittleEndian())
        printf("Little Endian\n");
    else
        printf("Big Endian");
    return 0;
}

bool isLittleEndian(void)
{
    int32_t num = 1;
    byte_p p = (byte_p)&num;
    if(showByte(p))          //���ֵΪ 1 �����ͱ��������ֽ��Ƿ�Ϊ 1
        return true;
    else
        return false;
}

int showByte(byte_p pt)
{
    return (int)(*pt);
}
