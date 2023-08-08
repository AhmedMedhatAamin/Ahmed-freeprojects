#include <stdio.h>
#include <stdlib.h>

//driver code
int main(){
// file pointer declared
	FILE* ptr;
	ptr = fopen("./Hello.txt", "w");

	//failed condition
	if(ptr == NULL){
	   printf("error occured while creating the file");
	   exit(1);
	}
	//file closed
	fclose(ptr);
	//data is finally inserted
	printf("file created\n\n");
	return 0;
}
