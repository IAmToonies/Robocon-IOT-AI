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

