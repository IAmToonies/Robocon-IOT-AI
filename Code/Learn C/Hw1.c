/* Bài 1: 
Nhập vào 2 số A, B. Viết một hàm con trỏ đối số đầu vào là địa chỉ của 2 số A, B, trong hàm xử lí cộng trực tiếp A vào B
*/

# include<stdio.h>
int sum(int *a, int *b){
 	return *a + *b;
 }
void main(){
	int a,b ;
	printf("Input a and b: ");
	scanf("%d %d",&a, &b);
	printf("Total of a and b: %d ", sum(&a,&b));
	
}
