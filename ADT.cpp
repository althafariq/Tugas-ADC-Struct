#include <stdio.h>
#include <conio.h>
#include <string.h>

struct mahasiswa{
	char nama [30];
	char npm [20];
	char ttl [30];
};

int main (){
	struct mahasiswa mhs[2];
	int i;
	for(i=0; i<2; i++){
	
	printf("%i Nama : ",i+1); gets(mhs[i].nama);
	printf("  NPM : "); gets(mhs[i].npm);
	printf("  TTL : "); gets(mhs[i].ttl);
	};
	
	printf("\nData Tempat Tanggal Lahir Mahasiswa\n");
	for(i=0; i<2; i++){
		printf("%i Nama : %s\n", i+1, mhs[i].nama);
		printf("  NPM : %s\n", mhs[i].npm);
		printf("  TTL : %s\n", mhs[i].ttl);	
	}
return 0;
}
