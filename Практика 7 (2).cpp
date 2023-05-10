#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
using namespace std;
void Crypt()
{
	srand(time(NULL));
	char pass[64];
	//char* pass = new char[64];
	for (int i = 0; i < 64; ++i) {
		switch (rand() % 3) {
		case 0:
			pass[i] = rand() % 10 + '0';
			break;
		case 1:
			pass[i] = rand() % 26 + 'A';
			break;
		case 2:
			pass[i] = rand() % 26 + 'a';
		}
	}
	string command = "openssl\\bin\\openssl.exe enc -aes-256-cbc -salt -in hello.bin -out hello.bin.enc -pass pass:";
		command += pass;
	system(command.c_str());
	if (remove("hello.bin") != 0) {
		cout << "[ERROR] - deleting file" << endl;
	}
	ofstream file;
	file.open("key.txt", ios::binary);
	file.write(pass, 64);
	file.close();
	command = "openssl\\bin\\openssl.exe rsautl -encrypt -inkey rsa.public -pubin -in key.txt -out key.txt.enc";
		system(command.c_str());
	if (remove("key.txt") != 0) {
		cout << "[ERROR] - deleting file" << endl;
	}
	
}
void Decrypt()
{
	string command = "openssl\\bin\\openssl.exe rsautl -decrypt -inkey rsa.private -in key.txt.enc -out key.txt";
		system(command.c_str());
	if (remove("key.txt.enc") != 0) {
		cout << "[ERROR] - deleting file" << endl;
	}
	char pass[64];
	//char* pass = new char[64];
	ifstream file;
	file.open("key.txt", ios::binary);
	file.read(pass, 64);
	file.close();
	if (remove("key.txt") != 0) {
		cout << "[ERROR] - deleting file" << endl;
	}
	command = "openssl\\bin\\openssl.exe enc -aes-256-cbc -d -in hello.bin.enc -out hello.bin -pass pass:";
		command += pass;
	system(command.c_str());
	if (remove("hello.bin.enc") != 0) {
		cout << "[ERROR] - deleting file" << endl;
	}
	system("cls");
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Crypt();
	Decrypt();
	char input[30] = "hello world!";
	ofstream out;
	out.open("hello.bin", ios::binary );
	out.write((char*)input, sizeof(input));
	out.close();
	
	char output[30]="";
	ifstream in("hello.bin", ios::binary || ios::in);
	in.read((char*)output,sizeof(output));
	in.close();
	cout << output << endl;
//	Crypt();	
}

#include <iostream>
#include <stdio.h>
#include<string.h>
int main(){
    setlocale(LC_ALL,"Russian");
    char s1[1000];
    char s2[1000];
    printf("Ââåäèòå s1\n");
    gets(s1);
    printf("Ââåäèòå s2\n");
    gets(s2);
    char res[2000];
    int l = strlen(s2);
    char temp1[1000],temp2[1000],temp3[1000];
    for (int i=0;i<l/2;i++){
        *(temp1+i)=*(s2+i);
    }
    for (int i=0;i<strlen(s1);i++){
        *(temp2+i)=*(s1+i);
    }
    for (int i=l/2;i<l;i++){
        *(temp3+(i-l/2))=*(s2+i);
    }
    char ans[3000];
    strcat(ans,temp1);
    strcat(ans,temp2);
    strcat(ans,temp3);
    printf("%s",ans);
}
