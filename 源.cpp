#include<stdio.h>  
#include <malloc.h>
#include<string.h> 
#include <math.h>
#define INPUT 0xA6
//char* GetMemory(void)
//{
//    char p[] = "hello world";
//    return p;
//}
//unsigned char bit_reverse(unsigned char input) {
//	unsigned char res = 0;
//	int bit = 8;
//	while (bit--) {
//		res |= ((input & 0x01) << bit);
//		input >>= 1;
//	}
//	return res;
//}

//找出一个字符串中一个最长的连续数字，并标注出位置和长度
//char* find(char* a, int* size) {
//	char *in, *temp, *pos = NULL;
//	int count = 0 ,max = 0;
//	in = a;
//	while (*in != '\0')
//	{
//		if (*in >= '0' && *in <= '9') {
//			temp = in;
//			while (*in >= '0' && *in <= '9') {
//				count += 1;
//				in++;
//			}
//			if (count > max) {
//				pos = temp;
//				max = count;
//			}
//			count = 0;
//
//		}
//		in++;
//	}
//	*size = max;
//	return pos;
//}
//int main() {
//	 
//	char str[] = "AWE2R2Qs653434EFq355";
//	char* pos = NULL;
//	int max_size = 0;
//    pos = find(str, &max_size);
//	unsigned int Pos = pos - str;
//	printf("返回的最长连续数字的位置为:%d, 长度为:%d\n", Pos, max_size);
//
//	return 0;
//
//}
//int IsPrime(unsigned int p) {
//	unsigned int i;
//	if (p <= 1) {
//		printf("请输入大于1的自然数.\n");
//		return -1;
//	}
//	for (i = 2; i < sqrt(p) ; i++) {
//		if (p % i == 0) {
//			printf("该数不是质数。\n");
//			return 0;
//		}
//	}
//	printf("该数是质数。\n");
//	return 0;
//
//}
//int endian_convert(int input) {
//	int result = 0;
//	int size = sizeof(input);
//	while (size--) {
//		result |= (input & 0xFF) << (8 *size);
//		input >>= 8;
//	}
//	return result;
//}
float fff = 1.234;
char buf[128];
int main(void)
{
    sprintf(buf, "%.3f\n\r", fff);//A
    while (1);
}