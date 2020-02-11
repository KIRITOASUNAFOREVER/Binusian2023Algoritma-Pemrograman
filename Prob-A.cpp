#include<stdio.h>
struct mhs
{
	char name[102];
	char nim[10];
	int age;
	char kodePos[10];
	char pob[102];
	char dob[102];
	char hs[102];
	int sibling;
	int cm;
	char rekening[10];
} maha;

int main()
{
	int banyak;
	struct mhs maha;
	
	scanf("%d",&banyak);getchar();
	for(int i=0;i<banyak;i++)
	{
		scanf(" %[^\n] ",maha.name);
		scanf(" %[^\n]",maha.nim);
		scanf(" %d", &maha.age);getchar();
		scanf(" %[^\n]",maha.kodePos);
		scanf(" %[^\n]",maha.pob);
		scanf(" %[^\n]",maha.dob);
		scanf(" %[^\n]",maha.hs);
		scanf(" %d", &maha.sibling);getchar();
		scanf(" %d", &maha.cm);getchar();
		scanf(" %[^\n]",maha.rekening);
		
		printf("Mahasiswa ke-%d:\n",i+1);
		printf("Nama: %s\n", maha.name);
		printf("NIM: %s\n", maha.nim);
		printf("Umur: %d\n", maha.age);
		printf("Kode Pos: %s\n", maha.kodePos);
		printf("Tempat Lahir: %s\n", maha.pob);
		printf("Tanggal Lahir: %s\n", maha.dob);
		printf("Almamater SMA: %s\n", maha.hs);
		printf("Jumlah Saudara Kandung: %d\n", maha.sibling);
		printf("Tinggi Badan: %d\n", maha.cm);
		printf("NOMOR REKENING: %s\n", maha.rekening);
	}
	return 0;
}
