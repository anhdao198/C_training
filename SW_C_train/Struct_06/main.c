#include<stdio.h>
#include<conio.h> 
#include<stdlib.h>
#include<string.h>

static char content[40];
char vowel[5]={'u','e','o','a','i'}; //cac chu nguyen am


enum Action {
	action1 = 1,
	action2,
	action3,
	action4,
	action5,
	action6 = 6
};

int vowels(const char* content) {
	int dem=0;
	for(int i=0;i<strlen(content);i++)
	{
		for(int j=0;j<5;j++)
		{
			if(content[i]==vowel[j]) 
			dem++;
		}
	}
    printf("So luong nguyen am trong chuoi:%s la %d\n", content,dem);
	return dem;
}

//tim phu am
void consonants(char* content)
{
	int tong=vowels(content);
	printf("So luong phu am trong chuoi: %s la %d\n", content,(strlen(content)-tong-1));
}

//
void uppercase(char* content)
{
	strupr(content);
    printf("\nChuoi dang chu hoa: %s", content);
}

void lowercase(char* content)
{
	strlwr(content);
    printf("\nChuoi dang chu thuong: %s", content);
}

void anotherstring(char* content){
	char content2[1000];
    printf("nhap chuoi: ");
	fflush(stdin);
    fgets(content2,sizeof(content2), stdin);
	if(strlen(content2)>40)
	{
		printf("Warning!!! Chuoi vua nhap qua dai(>40length) \n");
	}
	for(int i=0;i<strlen(content);i++)
		content[i]=content2[i];
	printf("Chuoi vua nhap la: %s\n", content);	
}

int main() {		
		printf("nhap chuoi: ");
		fflush(stdin);
		fgets(content, sizeof(content), stdin);
        int selected;

	while(1) {
		printf("\n1. Get number of vowels in the string\n");
		printf("2. Get number of consonants in the string\n");
		printf("3. Convert the string to uppercase\n");
		printf("4. Convert the string to lowercase\n");
		printf("5. Enter another string\n");
		printf("6. Exit the program\n");
		printf("\nSelect an action: ");
		scanf ("%d", &selected);

		switch(selected) {
			case action1:
				vowels(content);
				break;
			case action2:
				consonants(content);
				break;	
			case action3:
				uppercase(content);
				break;	
			case action4:
				lowercase(content);
				break;	
			case action5:
				anotherstring(content);
				break;	
			case action6:
				printf("Exit!!!!\n");
				exit(0);
			default:
				break;
		}
	}
    return 0;
}
