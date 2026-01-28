
#include <stdio.h>
#include <string.h>
// DOESNT WORK GETCH DON'T WORK
/*void maskPassword(char password[]){
	char ch; int i=0;
	while((ch=_getch() ) !=13){
		printf("*");
		password[i] = ch; i++;
}
password[i]='\0';
}
*/

void encrypt(char password[], int key) {
	for(int i=0; i<strlen(password); i++){
		password[i] = password[i] - key;
}
}

void decrypt(char password[], int key) {
for(int i=0; i<strlen(password); i++) {
password[i] = password[i] + key;
}
}

int main() {
char password[20];
printf("Enter your password : ");
scanf("%s", password);
//maskPassword(password);
encrypt(password, 0XAED);
printf("\n%s", password);
decrypt(password, 0XAED);
printf("\n%s", password);
return 0;
}
