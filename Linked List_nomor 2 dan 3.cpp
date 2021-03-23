#include <iostream>
#include <conio.h>
using namespace std;
struct node {
	char nama[200],alamat[100];
	double ip;
	int nrp;
	node *next;
};
	node *pos;
	int pilihan = 0;
class linkedlist{
	private:
		node *a;
	public :
		linkedlist(){
		a = NULL;
		}
	void TambahAwal()
		{
			node *n;
			n = new node;
			
		cout<<"========================================:"<<endl;
		cout << "Masukkan Nama\t: ";
		cin >> n->nama;
		cout << "Masukkan NRP\t: ";
		cin >> n->nrp;
		cout << "Masukkan Alamat\t: ";
		cin >> n->alamat;
		cout << "Masukkan IP\t: ";
		cin >> n->ip;
		n->next = NULL;
		if(a == NULL)
		{
			a=n;
			a->next = NULL;
		}
		else
		{
		n->next = a;
		a = n;
		}		
		}		

		void TambahTengah()
    	{    		
		node *n, *Help;
 		int pos;
		if(a != NULL)
		{
			cout<<"Akan disisip setelah Data Ke : ";
			cin>>pos;
			Help=a;
			n = new node;
			for(int i=0;i<pos;i++) {
				if(Help->next != NULL)
					Help=Help->next;
				else
					break;
}
			cout<<"============================================ "<<endl;
			cout<< "Masukkan Nama\t: ";
			cin>> n->nama;
			cout<< "Masukkan Nrp\t: ";
			cin>> n->nrp;
			cout<< "Masukkan Alamat\t: ";
			cin>> n->alamat;
			cout<< "Masukkan Ip\t: ";
			cin>> n->ip;
			n->next=Help->next;
			Help->next=n;
			}
			else
			{
			cout<<"Belum ada data, silahkan masukkan datanya terlebih dahulu...\n";
			getch();
		}
		}
		void HapusTengah()
		{
			int Jumlahdata,p,poshapus;
			node *hapus, *bantu;
			if(a != NULL)
		{
			cout<<" Akan dihapus pada data ke : ";
			cin>>p;
			Jumlahdata=1;
			bantu=a;
			while(bantu->next != NULL)
{
			bantu=bantu->next;
			Jumlahdata++;
}
			if((p<1)||(p>Jumlahdata))
{
			cout<<"Belum ada data, silahkan masukkan datanya terlebih dahulu...\n";
