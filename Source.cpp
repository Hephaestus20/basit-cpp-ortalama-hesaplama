// -_- Algoritma, Sözel Kod -_-

// 1) Başla
// 2) Birinci sözlü notu alınız (birincinot,b)
// 3) İkinci sözlü notu alınız (ikincinot,i)
// 4) Performans notu alınız (performans,p)
// 5) tüm notları topla (b+i+p = topla)
// 6) toplanan sayıları üçe böl (topla / 3 = ortalama)
// 7) ortalama eğer 60dan büyük ise geçti değil ise kaldı yazısı yansıt. (ortalama 60 > veya <)
// 8) Bitir.



#include<iostream>

using namespace std;


int main() {
	int birincinot, ikincinot, performans, toplam, ortalama;

	cout << "Lutfen birinci notu giriniz: ";
	cin >> birincinot;

	cout << "Lutfen ikinci notu giriniz: ";
	cin >> ikincinot;

	cout << "Lutfen performans notu giriniz: ";
	cin >> performans;

	toplam = birincinot + ikincinot + performans;
	ortalama = toplam / 3;


	if (ortalama > 60) {
		cout << "Ortalamaniz: " << ortalama << endl;
		cout << "Tebrikler sinifi gectiniz.";
	}
	else {
		cout << "Ortalamaniz: " << ortalama << endl;
		cout << "Sinifta Kaldiniz...";
	}

	return 0;
}
