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
//int main()
//{
//    int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//    memcpy(a + 3, a, 9);
//    for (int i = 0; i < 10; i++)
//    {
//        printf("%d", a[i]);
//    }
//}
//void count() {
//    int x, y, z, number;
//    number = 0;
//    for (x = 0; x <= 100; x++) {
//        for (y = 0; y <= 50; y++)
//        {
//            if (100 - x - y * 2 >= 0 && (100 - x - y * 2) % 5 == 0) {
//                number++;
//            }
//            
//        }
//    }
//    printf("%d\t", number);
//}
//
//int do_dup(int a[], int N)
//{
//    int temp = 0;
//    while (a[0] != a[a[0]])
//    {
//        temp = a[0];
//        a[0] = a[temp];
//        a[temp] = temp;
//    }
//    return a[0];
//    
//}

void quick_sort(int* num, int start_num, int end_num)
{
    if (start_num < end_num)
    {
        int i = start_num;
        int j = end_num;
        int temp = num[start_num];  // 以第一个元素为基准  
        while (i < j)
        {
            while (i < j && num[j] > temp)  // 从后往前寻找比基准小的元素  
                j--;
            if (i < j)
                num[i++] = num[j];      // 插在基准元素前面的空位上  
            while (i < j && num[i] <= temp) // 从前往后找比基准大的元素  
                i++;
            if (i < j)
                num[j--] = num[i];       // 插在基准元素后面的空位上  
        }
        num[i] = temp;                 // 基准元素归位  
        quick_sort(num, start_num, i - 1);  //递归地对基准元素左边的数据排序  
        quick_sort(num, i + 1, end_num);   //递归地对基准元素右边的数据排序  
    }
}

int main()
{
    int a[5] = {2,1,3,4,3};
    int i = 0;
    quick_sort(a, 0, 4);
    for (i; i < 5; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}