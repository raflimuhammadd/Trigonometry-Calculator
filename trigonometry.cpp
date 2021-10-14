#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <sstream>

#define STRING(num) #num

using namespace std;


int main(int, char**)
{
	bool quit;
	char kondisi;
	cout << "===|| Program Perhitungan Trigonometri ||===" << endl;
	cout << "" << endl;
	cout << "Daftar Nomor yang akan anda Pilih" << endl;
	cout << "" << endl;

	do
	{
		float sinus, cosinus, tangen, cotangen, cosecan, secan;
		float rad, derajat;
		rad = derajat = 0.0;
		string sudutDicari;
		int pilih;

		//sine=cosine=tangent=cotangent=cosecant=secant = 0.0;
		cout << "1. Temukan rasio trigonometri menggunakan ukuran radian : " << endl;
		cout << "2. Temukan rasio trigonometri menggunakan panjang sisi : " << endl;
		cout << "" << endl;

		cout << "Masukkan pilihan anda : ";
		cin >> pilih;

		if (pilih == 1)
		{
			cout << "Masukkan sudut dalam derajat : ";
			cin >> derajat;

			std::ostringstream ss;
			ss << derajat;
			std::string s(ss.str());
			sudutDicari = s;

			rad = (derajat / 180) * 3.14;

			sinus = sin(rad);
			cosinus = cos(rad);
			tangen = tan(rad);
			secan = 1 / cosinus;
			cosecan = 1 / sinus;
			cotangen = cosinus / sinus;

		}
		else if (pilih == 2)
		{
			float opposite, adjacent, hypotenuse;
			sudutDicari = 'C';

			cout << "Masukkan Panjang setiap sisi! " << endl;
			cout << "Panjang setiap sisi(AB)? : " << endl;
			cin >> opposite;

			cout << "Panjang yang berdekatan(BC)? : " << endl;
			cin >> adjacent;

			cout << "Panjang sisi miring (AC)? : " << endl;
			cin >> hypotenuse;

			sinus = opposite / hypotenuse;
			cosinus = adjacent / hypotenuse;
			tangen = opposite / adjacent;
			secan = 1 / cosinus;
			cosecan = 1 / sinus;
			cotangen = cosinus / sinus;


		}
		else
		{

			cout << "SALAH ! Pilih input yang benar : " << endl;

		}
		cout << "\nderajat = " << derajat << endl;
		//periksa nilai yang valid dari sin,cos,tan,cosec,sec,cot sebelum cetak
		if (sinus >= -1.0 || sinus <= 1.0)
		{

			cout << "Sinus" << " " << sudutDicari << " = " << sinus << endl;
			cout << "" << endl;
		}
		else
		{
			cout << "Sinus" << " " << sudutDicari << " = " << "Undefined" << endl;
		}

		if (cosinus >= -1.0 || cosinus <= 1.0)
		{

			cout << "Cosinus" << " " << sudutDicari << " = " << cosinus << endl;
			cout << "" << endl;
		}
		else
		{
			cout << "Cosinus" << " " << sudutDicari << " = " << "Undefined" << endl;
		}

		if (derajat != 90)
		{
			cout << "Tangen" << " " << sudutDicari << " = " << tangen << endl;
			cout << "" << endl;
		}
		else
		{

			cout << "Tangen" << " " << sudutDicari << " = " << "Undefined" << endl;
		}

		if (derajat != 90)
		{
			cout << "Secan" << " " << sudutDicari << " = " << secan << endl;
			cout << "" << endl;
		}
		else
		{
			cout << "Secan" << " " << sudutDicari << " = " << "Undefined" << endl;

		}

		if (derajat != 0 && cosecan <= -1.0 || cosecan >= 1.0)
		{
			cout << "Cosecan" << " " << sudutDicari << " = " << cosecan << endl;
			cout << "" << endl;
		}
		else
		{

			cout << "Cosecan" << " " << sudutDicari << " = " << "Undefined" << endl;
		}

		if (derajat != 0)
		{
			cout << "Cotangen" << " " << sudutDicari << " = " << cotangen << endl;
			cout << "" << endl;
		}
		else
		{
			cout << "Cotangen" << " " << sudutDicari << " = " << "Undefined" << endl;
		}
	

	bool quitQuestion;
	do {
		cout << "" << endl;
		cout << "Mencoba Lagi (1 = ya, 2 = tidak) = ";
		cin >> kondisi;
		if (kondisi == '1') {
			quit = false;
			quitQuestion = true;
			system("CLS");
		}
		else if (kondisi == '2') {
			quit = true;
			quitQuestion = true;
		}
		else {
			cout << "Input salah\n";
			quitQuestion = false;
		}
	} while (!quitQuestion);
	} while (!quit);

	system("pause");
	return 0;


	return EXIT_SUCCESS;
}
