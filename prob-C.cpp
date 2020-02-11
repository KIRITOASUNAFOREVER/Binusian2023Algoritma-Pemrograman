#include<stdio.h>
struct mahasiswa{
	char nim[40];
	char nama[40];
	char jenisKelamin1[40];
	char ayah[40];
	char ibu[40];
	int saudara;
};
struct dosen{
	char kode[35];
	char namaDosen[35];
	char jenisKelamin[15];
	int jumlahMahasiswa;
	struct mahasiswa mhs[105];
};
struct dosen dos[105];
int main()
{
	int m;
	int i,j; 
	scanf("%d",&m);getchar();
	for (i=0;i<m;i++){
		scanf("%s",dos[i].kode);getchar();
		scanf("%s",dos[i].namaDosen);getchar();
		scanf("%s",dos[i].jenisKelamin);getchar();
		scanf("%d",&dos[i].jumlahMahasiswa);getchar();
			for (j=1;j<=dos[i].jumlahMahasiswa;j++){
				scanf("%s",dos[i].mhs[j].nim);getchar();
				scanf("%s",dos[i].mhs[j].nama);getchar();
				scanf("%s",dos[i].mhs[j].jenisKelamin1);getchar();
				scanf("%s",dos[i].mhs[j].ayah);getchar();
				scanf("%s",dos[i].mhs[j].ibu);getchar();
				scanf("%d",&dos[i].mhs[j].saudara);getchar();
			}	
	}
	int l;
	scanf("%d",&l); getchar();
	printf("Kode Dosen: %s\n",dos[l-1].kode);
	printf("Nama Dosen: %s\n",dos[l-1].namaDosen);
	printf("Gender Dosen: %s\n",dos[l-1].jenisKelamin);
	printf("Jumlah Mahasiswa: %d\n",dos[l-1].jumlahMahasiswa);
		for (int c=1;c<=dos[l-1].jumlahMahasiswa;c++){
			printf("Kode Mahasiswa: %s\n",dos[l-1].mhs[c].nim);
			printf("Nama Mahasiswa: %s\n",dos[l-1].mhs[c].nama);
			printf("Gender Mahasiswa: %s\n",dos[l-1].mhs[c].jenisKelamin1);
			printf("Nama Ayah: %s\n",dos[l-1].mhs[c].ayah);
			printf("Nama Ibu: %s\n",dos[l-1].mhs[c].ibu);
			printf("Jumlah Saudara Kandung: %d\n",dos[l-1].mhs[c].saudara);
		}
	return 0;
}

