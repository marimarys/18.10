#include <iostream>
using namespace std;
int main() { 
	setlocale(LC_ALL, "rus");
	// 2 ???? ????? M ? ???????????.????????? ???????? ??????? ??????,
// ????? ?????????? ?????? ???? ? ???(1 ????? = 1000 ??).
/*int m;
cout << "??????? ???-?? ??" << endl;
cin >> m;
int ton = m / 1000;
cout << "????? ????" << ton << endl;*/
// 3 ??? ?????? ????? ? ??????.????????? ???????? ??????? ??????,
// ????? ?????????? ?????? ??????????, ??????? ???????? ?????? ????
// (1 ???????? = 1024 ?????).
/*int b;
cout << "??????? ???-?? ????" << endl;
cin >> b;
int kb = b / 1024;
cout << "????? ???????????" << endl;*/
/* 5 ???? ????? ????????????? ????? A ? B(A > B).?? ??????? ????? A
????????? ??????????? ????????? ?????????? ???????? ????? B(???
?????????).????????? ???????? ?????? ??????? ?? ??????? ??????, ?????
????? ????????? ????? ??????? A.*/
/*int a, b;
cin >> a >> b;
int ost = a % b;
cout << "???????" << ost << endl;*/
	// 6 ???? ?????????? ?????.??????? ??????? ??? ????? ?????(???????), ? ????? ? ??? ?????? ?????(???????).??? ?????????? ????????
	 //???????????? ???????? ??????? ??????, ??? ?????????? ?????? ? ???????? ?????? ??????? ?? ???????.
		/*int num;
		cout << "??????? ?????????? ?????" << endl;
		cin >> num;
		int d = num / 10;
		int e = num % 10;
		cout << "???????:" << d << endl;
		cout << "???????:" << e << endl;*/
	//???? ?????????? ?????.????? ????? ? ???????????? ??? ????.
	int num;
		cout << "??????? ?????????? ?????" << endl;
		cin >> num;
    int d = num / 10;
	int e = num % 10;
	double s = d + e;
	double p = d * e;
	cout << s << endl;
	cout << p << endl;
}