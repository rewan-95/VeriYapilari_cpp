#include <iostream>
#include "İntDinamikDizi.h"


int main()
{

	İntDinamikDizi d;


	for (int i = 0;i<10;i++) {

		d.Ekle(i);

	}



	d.Kaydir(3, 60);
	d.Kaydir(6, 450);



	for (int i = 0;i<12;i++) {

		cout << d.ElemanGetir(i) << endl;
	}




	system("pause");






}