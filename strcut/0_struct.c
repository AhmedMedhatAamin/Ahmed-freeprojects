#include <stdio.h>
#include <string.h>

/*determin the struct
 * confirm the personal 
*/

struct personal_inf {
	char name [20];
	char email [50];
	int age;

};

int main () {
	struct personal_info ahmed;
	strcpy(ahmed.name, "ahmed medhat amin");
	strcpy(ahmed.email, "ahmedmedhat.ahmed011@gmail.com");
	ahmed.age = 27;

	printf("my name is %s and I am %d years old. If you want to speak with me, you can send me a direct email: %s", ahmed.name, ahmed.age, ahmed.email);
		    
	    return 0;

	}
