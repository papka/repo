// menu.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;


struct Elem1
{int data;
string name;
Elem1* next; //указатель на следующий
};
class odnonaprav{
public:
	Elem1*first; //указатель на первый
	odnonaprav(); //konstruktor
	void addfront1(); //прототип функции добавления в начало
	bool Print1(); //прототип функции вывода на экран
	bool addser1(); //прототип функции добавления по айди
};
odnonaprav::odnonaprav(){
	first=NULL;}
void odnonaprav::addfront1()// добавление в начало
{int d;
cout<<"Vvedite id elementa"<<endl;
cin>>d;
string nam;
cout<<"Vvedite pole elementa"<<endl;
cin>>nam;

if(first==NULL){ //если список пуст
	first=new Elem1;
	first->next=first;
	first->data=d;
	first->name=nam;
	return;
}
Elem1* last=first;
while(last->next!=first)
	last=last->next;
Elem1* n= new Elem1;
n->next=first;
first=n;
last->next=first;
first->data=d;
first->name=nam;
return;
}

bool odnonaprav::Print1() //вывод на экран
{if(first==NULL){
	cout<<"pustoi spisok"<<endl;
	return false;
}
	Elem1*q=first;
	do{
		cout<<q->data<<"\t"<<q->name<<endl;
		q=q->next;}while(q!=first);
cout<<endl<<endl;
return true;
}


bool odnonaprav::addser1()//добавление после указанного id
{if(first==NULL){ //если список пуст
	cout<<"pustoi spisok";
	return false;}
Elem1* last=first;
cout<<"Vvedite id dlya poiska"<<endl; //ищем id, после которого мы добавим элемент
int search; //id необходимого элемента
cin >>search;
while(last->next!=first)
	last=last->next;
Elem1* cur=first;
while (cur->data!=search){
	cur=cur->next;}
Elem1* n= new Elem1;
int d;
cout<<"Vvedite indeks novogo elementa"<<endl;
cin>>d;
string nam;
cout<<"Vvedite pole name"<<endl;
cin>>nam;
n->name=nam;
n->data=d;
if(cur->data==search)
{
	n->next=cur->next;
	cur->next=n;
	return true;}
return true;}

int _tmain(int argc, _TCHAR* argv[])
{
	odnonaprav *tes = new odnonaprav;
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
pm1[0]=" open file";
pm1[1]=" save file";
pm1[2]="back";

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
pm3[2]=" dobavlenie posle elementa";
pm3[3]=" back";

int const podmenu4=3;
int selected_item4=0;
string pm4 [podmenu4];
pm4[0]=" delete first";
pm4[1]=" delete for number";
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
case 72://вверх
	selected_item --;
	if (selected_item<0){
		selected_item=k-1;
	}
	break;
	case 80://вниз
		if (selected_item==k-1){
		selected_item=-1;
		}
		selected_item++;
	break;
	case 27: //выход по esc
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
case 72://вверх
	selected_item6 --;
	if (selected_item6<0){
		selected_item6=ex-1;
	}
	break;
	case 80://вниз
		if (selected_item6==ex-1){
		selected_item6=-1;
		}
		selected_item6++;
	break;
	case 27://назад по esc
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
	case 0: //в подменю 1
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
			case 72://вверх
	selected_item1 --;
	if (selected_item1<0){
		selected_item1=podmenu1-1;
	}
	break;

	case 80://вниз
		if (selected_item1==podmenu1-1){
		selected_item1=-1;
		}
		selected_item1++;

	break;
	case 27://назад по esc
		goto m;
		break;
	case 13:
		switch(selected_item1) { //для подменю 1
		case 0:
			break;
		case 1:
			break;
		case 2://назад
			goto m;
	}
	break;

			case 49://1
		selected_item1=0;
		break;
	case 50://2
		selected_item1=1;
		break;

	case 48:
		selected_item1=2;
			goto m;
		} }


	case 1://po klavishe 2
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
			case 72://вверх
	selected_item2 --;
	if (selected_item2<0){
		selected_item2=podmenu2-1;
	}
	break;

	case 80://вниз
		if (selected_item2==podmenu2-1){
		selected_item2=-1;
		}
		selected_item2++;

	break;
	case 27://назад по esc
		goto m;
		break;

	case 13:
		switch(selected_item2) {
		case 0: //вызов вывода на экран
			system("cls");
			tes->Print1();
			getchar();
			goto m;
			break;
		case 1:
			break;
		case 2:
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
		goto m;

		} }
		break;
	case 2://po klavishe 3
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
			case 72://вверх
	selected_item3 --;
	if (selected_item3<0){
		selected_item3=podmenu3-1;
	}
	break;

	case 80://вниз
		if (selected_item3==podmenu3-1){
		selected_item3=-1;
		}
		selected_item3++;

	break;
	case 27://назад по esc
		goto m;
		break;
	case 13:
		switch(selected_item3) {
		case 0://вызов добавления в начало
			system("cls");
			tes->addfront1();
			getchar();
			goto m;
			break;
		case 1:
			break;
		case 2: //вызов добавления после указанного id
			system("cls");
			tes->addser1();
			getchar();
			goto m;
			break;
		case 3://назад
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
		goto m;

		} }
		break;
	case 3://po klavishe 4
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
			case 72://вверх
	selected_item4 --;
	if (selected_item4<0){
		selected_item4=podmenu4-1;
	}
	break;

	case 80://вниз
		if (selected_item4==podmenu4-1){
		selected_item4=-1;
		}
		selected_item4++;

	break;
		case 27://назад по esc
			goto m;
		break;
	case 13:
		switch(selected_item4) {
		case 0:
			break;
		case 1:
			break;
		case 2://назад
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
		goto m;
		} }
		break;

	case 4://po klavishe 5
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
			case 72://вверх
	selected_item5 --;
	if (selected_item5<0){
		selected_item5=podmenu5-1;
	}
	break;

	case 80://вниз
		if (selected_item5==podmenu5-1){
		selected_item5=-1;
		}
		selected_item5++;

	break;
		case 27:
			goto m;
		break;
	case 13:
		switch(selected_item5) {
		case 0:
			break;
		case 1:
			break;
		case 2://назад
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
		goto m;

		} }
		break;
	case 5://выход
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
case 72://вверх
	selected_item6 --;
	if (selected_item6<0){
		selected_item6=ex-1;
	}
	break;
	case 80://вниз
		if (selected_item6==ex-1){
		selected_item6=-1;
		}
		selected_item6++;
	break;
	case 27://назад по esc
		goto m;
break;
	case 13://Enter
		switch(selected_item6) {
		case 0:
			exit(0);
			break;
		case 1://назад
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
	case 48://0
		selected_item=5;
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
case 72://вверх
	selected_item6 --;
	if (selected_item6<0){
		selected_item6=ex-1;
	}
	break;
	case 80://вниз
		if (selected_item6==ex-1){
		selected_item6=-1;
		}
		selected_item6++;
	break;
	case 27://назад по esc
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

