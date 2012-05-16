// menu.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;



int _tmain(int argc, _TCHAR* argv[])
{
int const k=6;
int selected_item=0;
string menu [k];

	m:
menu [0]= "rabota s failami";
menu [1]= "prosmotr";
menu [2]= "dobavlenie elementov";
menu [3]= "udalenie";
menu [4]= "redaktirovanie";
menu [5]= "exit";

int const podmenu1=3;
int selected_item1=0;
string pm1 [podmenu1];
pm1[0]=" ololo";
pm1[1]=" olkj";
pm1[2]="ururur";

int const podmenu2=3;
int selected_item2=0;
string pm2 [podmenu2];
pm2[0]=" prosmotr vsego spiska";
pm2[1]=" prosmotr po kluchy";
pm2[2]="back";

int const podmenu3=4;
int selected_item3=0;
string pm3 [podmenu3];
pm3[0]=" dobavlenie v nachalo spiska";
pm3[1]=" dobavlenie v seredinu spiska";
pm3[2]=" dobavlenie posle kazhdogo elementa";
pm3[3]=" back";

int const podmenu4=3;
int selected_item4=0;
string pm4 [podmenu4];
pm4[0]=" ololo";
pm4[1]=" ururur";
pm4[2]=" back";

int const podmenu5=3;
int selected_item5=0;
string pm5 [podmenu5];
pm5[0]=" izmenenie zapisi";
pm5[1]=" peremena mest";
pm5[2]=" back";

int const ex=2;
int selected_item6=0;
string Exit[ex];
Exit[0]="yes";
Exit[1]="no";

char sure;
while(true) {
			system("cls");
for(int i=0;i<k;i++){
		if (i==selected_item){
		cout<<"> ";
		}
		else {
		cout<<"  ";
		}
		if(i==k-1)
			cout<<" 0. "<<menu[i];
		else cout<<" "<<i+1<<". "<<menu[i]<<endl;
		}


switch(getch()) {
case 72://ââåðõ
	selected_item --;
	if (selected_item<0){
		selected_item=k-1;
	}
	break;
	case 80://âíèç
		if (selected_item==k-1){
		selected_item=-1;
		}
		selected_item++;
	break;
	case 27:
		/*system ("cls");
		cout<<"Exit? (y/n)";
		cin>>sure;
		if (sure=='y') {
			exit(0);
		}
		else if (sure=='n') {
		}*/
				while(true) {
			system("cls");
			cout<<"Exit?"<<endl;
for(int i=0;i<ex;i++){
		if (i==selected_item6){
		cout<<"> ";
		}
		else {
		cout<<"  ";
		}
		if(i==ex-1)
			cout<<" 2. "<<Exit[i];
		else cout<<" "<<i+1<<". "<<Exit[i]<<endl;
		}


switch(getch()) {
case 72://ââåðõ
	selected_item6 --;
	if (selected_item6<0){
		selected_item6=ex-1;
	}
	break;
	case 80://âíèç
		if (selected_item6==ex-1){
		selected_item6=-1;
		}
		selected_item6++;
	break;
	case 27:
		/*system ("cls");
		cout<<"Exit? (y/n)";
		cin>>sure;
		if (sure=='y') {
			exit(0);
		}
		else if (sure=='n') {
		}*/
		goto m;
break;
	case 13://Enter
		switch(selected_item6) {
		case 0:
			exit(0);
			break;
		case 1:
			goto m;
			break;
	break;
	}
	break;

	case 49:
		exit(0);
		break;
	case 50:
		goto m;
		break;

} }
break;
	case 13://Enter
	switch(selected_item) {
	case 0: //ïåðâîå ïîäìåíþ
		//system("cls");


		/*for(int i=0; i<podmenu1;i++) {
			cout<<endl<<i+1<<" "<<pm1[i];
		} */

		while(true) {
			system("cls");
			cout<< "menu raboty s failami"<<endl;
for(int i=0;i<podmenu1;i++){
		if (i==selected_item1){
		cout<<"> ";
		}
		else {
		cout<<"  ";
		}

		if(i==podmenu1-1){
			cout<<" 0. "<<pm1[i];}
		else cout<<" "<<i+1<<". "<<pm1[i]<<endl;
}
		switch(getch()) {
			case 72://ââåðõ
	selected_item1 --;
	if (selected_item1<0){
		selected_item1=podmenu1-1;
	}
	break;

	case 80://âíèç
		if (selected_item1==podmenu1-1){
		selected_item1=-1;
		}
		selected_item1++;

	break;
	case 27:
		/*cout<<"Exit? (y/n)";
		cin>>sure;
		if (sure=='y') {
			exit(0);
		}
		else if (sure=='n') {
		} */
		goto m;
		break;
	case 13:
		switch(selected_item1) { //ïî ñòðåëêàì
		case 0:
			break;
		case 1:
			break;
		case 2:
			goto m;
		/*cout<<"back? (y/n)";
		cin>>sure;
		if (sure=='y') {

			exit(0);
		}
		else if (sure=='n') {
		}
	break; */
	}
	break;
	//ïî íîìåðàì
			case 49://1
		selected_item1=0;
		break;
	case 50://2
		selected_item1=1;
		break;

	case 48:
		selected_item1=2;
		/*cout<<"back? (y/n)";
		cin>>sure;
		if (sure=='y') {
			return 0;
		}
		else if (sure=='n') {
		} */
			goto m;
		} }


	case 1://ïîäìåíþ íîìåð 2
		while(true) {
			system("cls");
			cout<< "menu prosmotra"<<endl;
for(int i=0;i<podmenu2;i++){
		if (i==selected_item2){
		cout<<"> ";
		}
		else {
		cout<<"  ";
		}

		if(i==podmenu2-1){
			cout<<" 0. "<<pm2[i];}
		else cout<<" "<<i+1<<". "<<pm2[i]<<endl;
}
		switch(getch()) {
			case 72://ââåðõ
	selected_item2 --;
	if (selected_item2<0){
		selected_item2=podmenu2-1;
	}
	break;

	case 80://âíèç
		if (selected_item2==podmenu2-1){
		selected_item2=-1;
		}
		selected_item2++;

	break;
	case 27:
		/*cout<<"Exit? (y/n)";
		cin>>sure;
		if (sure=='y') {
			exit(0);
		}
		else if (sure=='n') {
		} */
		goto m;
		break;

	case 13:
		switch(selected_item2) {
		case 0:
			break;
		case 1:
			break;
		case 2:
			/*cout<<"back? (y/n)";
		cin>>sure;
		if (sure=='y') {

			exit(0);
		}
		else if (sure=='n') {
		}*/
			goto m;
	break;
	}
	break;
			case 49://1
		selected_item2=0;
		break;
	case 50://2
		selected_item2=1;
		break;

	case 48:
		selected_item2=2;
		/*cout<<"back? (y/n)";
		cin>>sure;
		if (sure=='y') {
			return 0;
		}
		else if (sure=='n') {
		} */
		goto m;

		} }
		break;
	case 2://ïîäìåíþ íîìåð 3
			while(true) {
			system("cls");
			cout<< "menu dobavleniya elementov"<<endl;
for(int i=0;i<podmenu3;i++){
		if (i==selected_item3){
		cout<<"> ";
		}
		else {
		cout<<"  ";
		}

		if(i==podmenu3-1){
			cout<<" 0. "<<pm3[i];}
		else cout<<" "<<i+1<<". "<<pm3[i]<<endl;
}
		switch(getch()) {
			case 72://ââåðõ
	selected_item3 --;
	if (selected_item3<0){
		selected_item3=podmenu3-1;
	}
	break;

	case 80://âíèç
		if (selected_item3==podmenu3-1){
		selected_item3=-1;
		}
		selected_item3++;

	break;
	case 27:
		/*cout<<"Exit? (y/n)";
		cin>>sure;
		if (sure=='y') {
			exit(0);
		}
		else if (sure=='n') {
		} */
		goto m;
		break;
	case 13:
		switch(selected_item3) {
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			/*cout<<"back? (y/n)";
		cin>>sure;
		if (sure=='y') {

			exit(0);
		}
		else if (sure=='n') {
		} */
			goto m;
	break;
	}
	break;
	case 49://1
		selected_item3=0;
		break;
	case 50://2
		selected_item3=1;
		break;
	case 51:
		selected_item3=2;
		break;

	case 48:
		selected_item3=3;
		/*cout<<"back? (y/n)";
		cin>>sure;
		if (sure=='y') {
			return 0;
		}
		else if (sure=='n') {
		}*/
		goto m;

		} }
		break;
	case 3://ïîäìåíþ íîìåð 4
			while(true) {
			system("cls");
			cout<< "menu udaleniya"<<endl;
for(int i=0;i<podmenu4;i++){
		if (i==selected_item4){
		cout<<"> ";
		}
		else {
		cout<<"  ";
		}

		if(i==podmenu4-1){
			cout<<" 0. "<<pm4[i];}
		else cout<<" "<<i+1<<". "<<pm4[i]<<endl;
}
		switch(getch()) {
			case 72://ââåðõ
	selected_item4 --;
	if (selected_item4<0){
		selected_item4=podmenu4-1;
	}
	break;

	case 80://âíèç
		if (selected_item4==podmenu4-1){
		selected_item4=-1;
		}
		selected_item4++;

	break;
		case 27:
		/*cout<<"Exit? (y/n)";
		cin>>sure;
		if (sure=='y') {
			exit(0);
		}
		else if (sure=='n') {
		}*/
			goto m;
		break;
	case 13:
		switch(selected_item4) {
		case 0:
			break;
		case 1:
			break;
		case 2:
			/*cout<<"back? (y/n)";
		cin>>sure;
		if (sure=='y') {

			exit(0);
		}
		else if (sure=='n') {
		} */
			goto m;
	break;
	}
	break;
	case 49://1
		selected_item4=0;
		break;
	case 50://2
		selected_item4=1;
		break;

	case 48:
		selected_item4=2;
		/*cout<<"back? (y/n)";
		cin>>sure;
		if (sure=='y') {
			return 0;
		}
		else if (sure=='n') {
		}
			*/
		goto m;
		} }
		break;

	case 4://ïîäìåíþ íîìåð 5
			while(true) {
			system("cls");
			cout<< "menu redaktirovaniya"<<endl;
for(int i=0;i<podmenu5;i++){
		if (i==selected_item5){
		cout<<"> ";
		}
		else {
		cout<<"  ";
		}

		if(i==podmenu5-1){
			cout<<" 0. "<<pm5[i];}
		else cout<<" "<<i+1<<". "<<pm5[i]<<endl;
}
		switch(getch()) {
			case 72://ââåðõ
	selected_item5 --;
	if (selected_item5<0){
		selected_item5=podmenu5-1;
	}
	break;

	case 80://âíèç
		if (selected_item5==podmenu5-1){
		selected_item5=-1;
		}
		selected_item5++;

	break;
		case 27:
		/*cout<<"Exit? (y/n)";
		cin>>sure;
		if (sure=='y') {
			exit(0);
		}
		else if (sure=='n') {
		}*/
			goto m;
		break;
	case 13:
		switch(selected_item5) {
		case 0:
			break;
		case 1:
			break;
		case 2:
		/*cout<<"back? (y/n)";
		cin>>sure;
		if (sure=='y') {

			exit(0);
		}
		else if (sure=='n') {
		} */
			goto m;
	break;
	}
	break;
	case 49://1
		selected_item5=0;
		break;
	case 50://2
		selected_item5=1;
		break;

	case 48:
		selected_item5=2;
		/*cout<<"back? (y/n)";
		cin>>sure;
		if (sure=='y') {
			return 0;
		}
		else if (sure=='n') {
		} */
		goto m;

		} }
		break;
	case 5://âûõîä
		//system("cls");
		/*cout<<"Exit?"<<endl;
		cin>>sure;
		if (sure=='y') {

			exit(0);
		}
		else if (sure=='n') {
		}*/
		while(true) {
			system("cls");
			cout<<"Exit?"<<endl;
for(int i=0;i<ex;i++){
		if (i==selected_item6){
		cout<<"> ";
		}
		else {
		cout<<"  ";
		}
		if(i==ex-1)
			cout<<" 2. "<<Exit[i];
		else cout<<" "<<i+1<<". "<<Exit[i]<<endl;
		}


switch(getch()) {
case 72://ââåðõ
	selected_item6 --;
	if (selected_item6<0){
		selected_item6=ex-1;
	}
	break;
	case 80://âíèç
		if (selected_item6==ex-1){
		selected_item6=-1;
		}
		selected_item6++;
	break;
	case 27:
		/*system ("cls");
		cout<<"Exit? (y/n)";
		cin>>sure;
		if (sure=='y') {
			exit(0);
		}
		else if (sure=='n') {
		}*/
		goto m;
break;
	case 13://Enter
		switch(selected_item6) {
		case 0:
			exit(0);
			break;
		case 1:
			goto m;
			break;
	break;
	}
	break;

	case 49:
		exit(0);
		break;
	case 50:
		goto m;
		break;

} } }
	case 49://1
		selected_item=0;
		break;
	case 50://2
		selected_item=1;
	break;
	case 51://3
		selected_item=2;
		break;
	case 52://4
		selected_item=3;
		break;
	case 53://5
		selected_item=4;
		break;
	case 48://
		//system("cls");
		selected_item=5;
		/*cout<<"Exit? (y/n)";
		cin>>sure;
		if (sure=='y') {
			exit(0);
		}
		else if (sure=='n') {
		}*/
				while(true) {
			system("cls");
			cout<<"Exit?"<<endl;
for(int i=0;i<ex;i++){
		if (i==selected_item6){
		cout<<"> ";
		}
		else {
		cout<<"  ";
		}
		if(i==ex-1)
			cout<<" 2. "<<Exit[i];
		else cout<<" "<<i+1<<". "<<Exit[i]<<endl;
		}


switch(getch()) {
case 72://ââåðõ
	selected_item6 --;
	if (selected_item6<0){
		selected_item6=ex-1;
	}
	break;
	case 80://âíèç
		if (selected_item6==ex-1){
		selected_item6=-1;
		}
		selected_item6++;
	break;
	case 27:
		/*system ("cls");
		cout<<"Exit? (y/n)";
		cin>>sure;
		if (sure=='y') {
			exit(0);
		}
		else if (sure=='n') {
		}*/
		goto m;
break;
	case 13://Enter
		switch(selected_item6) {
		case 0:
			exit(0);
			break;
		case 1:
			goto m;
			break;
	break;
	}
	break;

	case 49:
		exit(0);
		break;
	case 50:
		goto m;
		break;

} } }

}}
