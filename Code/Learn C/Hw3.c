# include<stdio.h>
int promax(int *a, int *n, int *max){
	for(int i = 0; i < *n ;i++){
		if (a[i]>*max){
			*max = a[i];
		}
	}
	
	printf("________________________");
    printf("\n Max = %d \n", *max);
    printf("________________________");
	for ( int i = 0; i < *n; i++){
		a[i] *= *max;
		printf("\nPtu %d sau khi nhan max:", i+1);
		printf("%d",a[i]);
	}
	return 1;
}
void main(){
	int n;
	
	printf("Input size of vector a: " );
	scanf("%d", &n);
	int a[n];

	for ( int i = 0; i < n; i++){
		printf("Input the %dth element: ", i+1);
		scanf("%d",&a[i]);
	}
	int max;
	max = a[0];
    promax(&a, &n, &max);
}

