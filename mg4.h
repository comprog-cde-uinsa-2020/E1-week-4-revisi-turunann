int turunan_Volume_terhadap_jari()
{
	printf("pembagian");
	int a,b,hasil;
	//cout<<"Masukkan Turunan Laju pertambahan Volume udara : ";
	printf("Masukkan Turunan Laju pertambahan Volume Udara : ");
	scanf("%d", a);
	//cout<<"Masukkan Turunan Laju pertambahan Jari-jari : ";
	//cin>>b;
	printf("Masukkan Turunan Laju pertambahan Jari-Jari : ");
	scanf("%d",b);
	hasil=a/b;
	printf(hasil);
	return hasil;
	//cout<<endl;
}
/*int main(){
printf("\n");
turunan_Volume_terhadap_jari();
return 0;
}*/
/*void volume(){
    float phi=3.14;
    float L;
    float jari_bola;
    printf("Masukkan Jari-Jari Bola = ");
	scanf("%d",&jari_bola);
    L= 4*phi*jari_bola*jari_bola;
    printf("%d",L);
}*/
