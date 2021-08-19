/* Name:Mazhar Hussain     Reg No:20MDELE098
email: 20MDELE098@uetmardan.edu.pk.*/
// calculate vowels in string //
#include<stdio.h>
int main(){
	char string[]="I am soo tired at home";
	int i;
	int count=0;
	for (i=0;i<sizeof(string);i++){
if(string[i]=='A' ||string[i]=='E' ||string[i]=='I' ||string[i]=='O' ||string[i]=='U'
        		||string[i]=='a' ||string[i]=='e' ||string[i]=='i' ||string[i]=='o' ||string[i]=='u')
	count++;}
	printf("%d times vowels\n",count);
	return 0;
}
