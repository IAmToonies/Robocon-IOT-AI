/*
Bài 2:
Nhập vào 1 số n, xong sau đó nhập vào 1 mảng gồm n phần tử.
Viết hàm xử lí, đưa mảng vừa nhập vào hàm. Xử lí và trả về giá trị lớn nhất trong mảng
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
*/


# include<stdio.h>
int max(int *a, int *n){
	int max=a[0];
	for(int i = 0; i < *n ;i++){
		if (a[i]>max){
			max = a[i];}
	}
	return max;
}
void main(){
	int n;
	
	printf("Input size of vector a: " );
	scanf("%d", &n);
	int a[n];
	
	// Nhap phan tu cua vector
	for ( int i = 0; i < n; i++){
		printf("Input the %dth element: ", i+1);
		scanf("%d",&a[i]);
	}
	
	
	printf("_____End_____");
	printf("\nMax value of vector is: %d", max(&a,&n));
}

