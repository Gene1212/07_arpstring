#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void avg (int* arr,int size) {
	double sum=0;
	int i;
	for (i=0; i < size; i++) {
		sum += *(arr+i);
	}
	double avg = sum/size;
	printf("This is the average %f\n", avg);
}

void copy (int* a1, int* a2, int size) {
	int i;
	for (i=0; i < size; i++) {
		*(a2+i)=*(a1+i);
	}	

	int j;	
	for (j=0; j < size; j++) {
		printf("Index %d of newarray: %d \n",j, *(a2+j));
		
	}
}


void len (char txt[]) {
	char* p = txt;
	int i=0;
	while (*p) {
		i++;
		p++;		
	}
	printf("Length is %d\n",i);
} 


int main() {
	int arr1[5];
	arr1[0]=1;
	arr1[1]=2;
	arr1[2]=3;
	arr1[3]=4;
	arr1[4]=6;
	avg(arr1,5);


	int arr2[5];
	arr2[0]=100;
	arr2[1]=100;
	arr2[2]=100;
	arr2[3]=100;
	arr2[4]=100;
	copy(arr1,arr2,5);
	

	char s[] = "Tuesday";
	len(s);

	char x[100];
	char test[] = "Hello"; 
	strcpy(x,test);
	printf("%s\n",x);

	char t1[] = "Peanut";
	char t2[] = "Butter";

	strcat(t1,t2);
	printf("%s\n",t1);

	char x1[] = "test";
	char x2[] = "test";
	printf("%d\n",strcmp(x1,x2));

	char block[] = "This is a test";
	char z = 'i';
	char* point = strchr(block,z);
	printf("Pointer found  at %p\n", &point);

	return 0;

}