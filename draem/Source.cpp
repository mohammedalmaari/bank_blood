#include<iostream>
#include<string>
using namespace std;
int item;
int sum =0;
//intilazie function
string food();
int sum_price(int);
void print_price(int);
void link();
void display();
// struct linked list
struct node {
	string data;
	node*p;
};
node*head = NULL;
// main function
string food()
{

	cout << "\n\t------------------menu section------------------\t\n";
	cout << "1) RICE AND CHICKEN AND MEAT \t ";
	cout << "2) TEA AND BRAED \t";
	cout << "3) FLAFL AND SHAORMA \t\t\n";
	cout << "\n\n4) SALADS AND GLABAT\t\t ";
	cout << "5) DRINKS AND ACE CREAM\t";
	cout << "\n\n\t \t\t -(..PLZ CHOICE LIST FAVORITE YOU  OF FOODS..)- \t \t\t\n\n";
	cin >> item;
//start rice
	switch (item)
	{
#define sl1  2500
#define sl2  6000 
#define sl3  1700
#define sl4  3000 
#define sl5  1000 
#define sl6  3000
#define sl7  2500 
#define sl8  2300
#define sl9  5500
#define sl10  4700 
#define sl11  4500
	case 1:
		cout << "\n\t------------------MENU RICE AND CHICKEN AND MEAT------------------\t\n";
		cout << "\n\n1) RICE WITH CHICKEN\t\t ";
		cout << "2) RICE WITH MEAT \n";
		cout << "3) RICE WITH FISH SIADEA\t";
		cout << "4) RICE WITH FISH WHITE \n";
		cout << "5) RICE WITH LAKHAM \t\t";
		cout << "6) CHICKEN MASHOWY \n";
		cout << "7) CHICKEN FAHUM \t\t";
		cout << "8) CHICKEN KABSA \n";
		cout << "9) MEAT MADHPY\t\t\t";
		cout << "10) MEAT MASHOY \n";
		cout << "11) CHICKEN MAGLY \t\n";
		cout << "---------------------------------------------------------------------\n";
		cout << "\n\n\t \t\t -(..PLZ CHOICE LIST FAVORITE YOU  OF MENU..)- \t \t\t\n\n";
		cin >> item;

		switch (item)
		{

		case 1:
		{string name1;
		cout << "\n RICE WITH CHICKEN \t\t...(" << sl1 << " R-Y )...\t\n";
		cout << "---------------------------------------------------------------------\n";
		name1 = "\n\t\t RICE WITH CHICKEN \t\t...( 2500 R-Y )...\t\n";
		print_price(sl1);
		return name1;
		}
		case 2:
		{string name2;
		cout << "\n RICE WITH MEAT \t\t...(" << sl2 << "R-Y )...\t\n";
		cout << "---------------------------------------------------------------------\n";
		name2 = "\n\t\t RICE WITH MEAT \t\t...(6000R-Y )...\t\n";
		print_price(sl2);
		return name2;
		break; }
		case 3:
		{string name3;
		cout << "\n RICE WITH FISH SIADEA \t\t...(" << sl3 << " R-Y )...\t\n";
		name3 = "\n\t\t RICE WITH FISH SIADEA \t\t...(1700 R-Y )...\t\n";
		print_price(sl3);
		return name3;
		}
		case 4:
		{string name4;
		cout << "\n RICE WITH FISH WHITE \t\t...(" << sl4 << " R-Y )...\t\n";
		name4 = "\n\t\t RICE WITH FISH WHITE \t\t...(3000 R-Y )...\t\n";
		print_price(sl4);
		return name4;
		}
		case 5:
		{string name5;
		cout << "\n RICE WITH LAKHAM \t\t...(" << sl5 << "R-Y )...\t\n";
		name5 = "\n\t\t RICE WITH LAKHAM \t\t...(1000 R-Y )...\t\n";
		print_price(sl5);
		return name5;
		}
		case 6:
		{string name6;
		cout << "\n  CHICKEN MASHOY \t\t...(" << sl6 << " R-Y )...\t\n";
		name6 = "\n\t\t  CHICKEN MASHOY \t\t...(3000 R-Y )...\t\n";
		print_price(sl6);
		return name6;
		}
		case 7:
		{string name7;
		cout << "\n CHICKEN FAHYM \t\t...(" << sl7 << "R-Y )...\t\n";
		name7 = "\n\t\t CHICKEN FAHYM \t\t...(2500 R-Y )...\t\n";
		print_price(sl7);
		return name7;
		break; }
		case 8:
		{
			string name8;
			cout << "\n CHICKEN KABSA \t\t...(" << sl8 << " R-Y )...\t\n";
			name8 = "\n\t\t CHICKEN KABSA \t\t...(2300 R-Y )...\t\n";
			print_price(sl8);
			return name8;
		}
		case 9:
		{string name9;
		cout << "\n MEAT MADHBY \t\t...(" << sl9 << " R-Y )...\t\n";
		name9 = "\n\t\t  MEAT MADHBY \t\t...(5500 R-Y )...\t\n";
		print_price(sl9);
		return name9;
		}
		case 10:
		{string name10;
		cout << "\n MEAT MASHOY \t\t...(" << sl10 << "R-Y )...\t\n";
		name10 = "\n\t\t MEAT MASHOY \t\t...(4700 R-Y )...\t\n";
		print_price(sl10);
		return name10;
		break; }
		case 11:
		{string name11;
		cout << "\n MEAT MAGALY \t\t...(" << sl11 << " R-Y )...\t\n";
		name11 = "\n\t\t MEAT MAGALY \t\t...(4500 R-Y )...\t\n";
		print_price(sl11);
		return name11;
		}
		
		}

//end rice and chicken and maet

//start tea and braed
	case 2:

		cout << "\n\t------------------MENU TEA AND BREAD------------------\t\n";
		cout << "\n\n1) TEA RED \t ";
		cout << "2) TEA WHITE \n";
		cout << "3) TEA ADANY \t";
		cout << "4) TEA BALHEEL  \n";
		cout << "5) BREAD RED  \t";
		cout << "6) BREAD WHITE  \n";
		cout << "7) BREAD DOUBLE  ";
		cout << "8) BREAD SINGAL  \n";
		cout << "---------------------------------------------------------------------\n";
		cout << "\n\n\t \t\t -(..PLZ CHOICE LIST FAVORITE YOU  OF RICE..)- \t \t\t\n\n";
		cin >> item;

		switch (item)
		{
#define sl1  200
#define sl2  500
#define sl3  700
#define sl4  600
#define sl5  110
#define sl6  90
#define sl7  1600
#define sl8  800
		case 1:
		{	string name1;
			cout << "\n TEA RED \t\t...(" << sl1 << " R-Y )...\t\n";
			name1= "\n\t\t TEA RED \t\t...(200 R-Y )...\t\n";
			print_price(sl1);
			return name1;
		}
		case 2:
		{string name2;
			cout << "\n TEA WHITE \t\t...(" << sl2 << "R-Y )...\t\n";
			name2= "\n\t\t TEA WHITE \t\t...(500 R-Y )...\t\n";
			print_price(sl2);
			return name2; }
		case 3:
		{string name3;
			cout << "\n TEA ADANY \t\t...(" << sl3 << " R-Y )...\t\n";
			name3= "\n\t\t TEA ADANY \t\t...(700 R-Y )...\t\n";
			print_price(sl3);
		return name3;
		}
		case 4:
		{string name4;
			cout << "\n TEA BALHELL \t\t...(" << sl4 << " R-Y )...\t\n";
			name4= "\n\t\t TEA BALHELL \t\t...(600 R-Y )...\t\n";
			print_price(sl4);
			return name4;
		}
		case 5:
		{string name5;
			cout << "\n BREAD RED \t\t...(" << sl5 << " R-Y )...\t\n";
			name5= "\n\t\t BREAD RED \t\t...(110 R-Y )...\t\n";
			print_price(sl5);
		return name5;
		}
		case 6:
		{string name6;
			cout << "\n BREAD WHITE \t\t...(" << sl6 << " R-Y )...\t\n";
			name6= "\n\t\t BREAD WHITE \t\t...(90 R-Y )...\t\n";
			print_price(sl6);
		return name6;
		}case 7:
		{string name7;
			cout << "\n BREAD DOUBLE \t\t...(" << sl7 << " R-Y )...\t\n";
			name7= "\n\t\t BREAD DOUBLE \t\t...(1600 R-Y )...\t\n";
			print_price(sl7);
		return name7;
		}
		case 8:
		{string name8;
			cout << "\n BREAD SINGAL \t\t...(" << sl8 << " R-Y )...\t\n";
			name8= "\n\t\t BREAD SINGAL \t\t...(800 R-Y )...\t\n";
			print_price(sl8);
		return name8;
		}
		}
//end tea and bread 

//start flafl and shaorma
	case 3:
		{
#define sl1  500
#define sl2  700 
#define sl3  900
#define sl4  1500
#define sl5  350
#define sl6  1100
#define sl7  1200

			cout << "\n\t------------------MENU	FLAFL AND SHAORMA------------------\t\n";
			cout << "\n\n1) FLAFL AADY \t\t ";
			cout << "2) FLAFL BAJOBEN \n";
			cout << "3) FLAFL MALAKY\t\t";
			cout << "4) FLAFL SAHEN \n";
			cout << "5) SHAORMA CHICKEN \t";
			cout << "6) SHAORMA FAHUM \n";
			cout << "7) SHAORMA SAHEN \n";
			cout << "---------------------------------------------------------------------\n";
			cout << "\n\n\t \t\t -(..PLZ CHOICE LIST FAVORITE YOU  OF RICE..)- \t \t\t\n\n";
			cin >> item;

			switch (item)
			{

			case 1:
			{string name1;
				cout << "\n FLAFL AADY \t\t...(" << sl1 << " R-Y )...\t\n";
				name1= "\n\t\t  FLAFL AADY \t\t...(500 R-Y )...\t\n";
				print_price(sl1);
				return name1;
			}
			case 2:
			{string name2;
				cout << "\nFLAFL BALJABEN \t\t...(" << sl2 << "R-Y )...\t\n";
				name2= "\n\t\t FLAFL BALJABEN \t\t...(700 R-Y )...\t\n";
				print_price(sl2);
				return name2;
				break; }
			case 3:
			{string name3;
				cout << "\n FLAFL MALAKY \t\t...(" << sl3 << " R-Y )...\t\n";
				name3= "\n\t\t FLAFL MALAKY \t\t...(900 R-Y )...\t\n";
				print_price(sl3);
			return name3;
			}
			case 4:
			{string name4;
				cout << "\n FLAFL SAHEN \t\t...(" << sl4 << " R-Y )...\t\n";
				name4= "\n\t\t FLAFL SAHEN \t\t...(1500 R-Y )...\t\n";
				print_price(sl4);
			return name4;
			}
			case 5:
			{string name5;
				cout << "\n SHAORMA CHICKEN \t\t...(" << sl5 << " R-Y )...\t\n";
				name5= "\n\t\t SHAORMA CHICKEN \t\t...(350 R-Y )...\t\n";
				print_price(sl5);
			return name5;
			}
			case 6:
			{string name6;
				cout << "\n SHAORMA FAHUM \t\t...(" << sl6 << " R-Y )...\t\n";
				name6 = "\n\t\t SHAORMA FAHUM \t\t...(1100 R-Y )...\t\n";
				print_price(sl6);
			return name6;
			}
			case 7:
			{string name7;
				cout << "\n SHAORMA SAHEN \t\t...(" << sl7 << " R-Y )...\t\n";
				name7= "\n\t\t SHAORMA SAHEN \t\t...(1200 R-Y )...\t\n";
				print_price(sl7);
			return name7;
			}
			}

		}

//end flafl and shaorma

//start salatat and glabat
	case 4:
	{
#define sl1  350
#define sl2  600 
#define sl3  1400
#define sl4  1450
#define sl5  850
#define sl6  1050
#define sl7  650 
#define sl8  700
#define sl9  900
		cout << "\n\t------------------MENU SALATAT AND GLABAT------------------\t\n";
		cout << "\n\n1) SAHAOG BALJOBEN \t\t ";
		cout << "2) KHIAR MA GAZER MA KHAS \n";
		cout << "3) GLABAT CHICKEN \t\t";
		cout << "4) GLABAT MEAT  \n";
		cout << "5) GLABAT FASOLIA \t\t";
		cout << "6) GLABAT TUNA  \n";
		cout << "7) GLABAT FOUL\t\t\t";
		cout << "8) GLABAT BZALA \n";
		cout << "9) SHAKSHOKA \t\n";
		cout << "---------------------------------------------------------------------\n";
		cout << "\n\n\t \t\t -(..PLZ CHOICE LIST FAVORITE YOU  OF MENU..)- \t \t\t\n\n";
		cin >> item;

		switch (item)
		{

		case 1:
		{string name1;
			cout << "\n SAHAOG BALJOBEN\t\t...(" << sl1 << " R-Y )...\t\n";
			name1= "\n\t\t SAHAOG BALJOBEN\t\t...(350 R-Y )...\t\n";
			print_price(sl1);
			return name1;
		}
		case 2:
		{string name2;
			cout << "\n KHIAR MA GAZER MA KHAS\t\t...(" << sl2 << "R-Y )...\t\n";
			name2= "\n\t\t KHIAR MA GAZER MA KHAS\t\t...(600 R-Y )...\t\n";
			print_price(sl2);
			return name2;
			break; }
		case 3:
		{string name3;
			cout << "\n GLABAT CHICKEN \t\t...(" << sl3 << " R-Y )...\t\n";
			name3= "\n\t\t GLABAT CHICKEN \t\t...(1400 R-Y )...\t\n";
			print_price(sl3);
		return name3;
		}
		case 4:
		{string name4;
			cout << "\n GLABAT MEAT \t\t...(" << sl4 << " R-Y )...\t\n";
			name4= "\n\t\t GLABAT MEAT \t\t...(1450 R-Y )...\t\n";
			print_price(sl4);
		return name4;
		}
		case 5:
		{string name5;
			cout << "\n GLABAT FASOLIA  \t\t...(" << sl5 << "R-Y )...\t\n";
			name5= "\n\t\t GLABAT FASOLIA  \t\t...(850 R-Y )...\t\n";
			print_price(sl4);
		return name5;
		}
		case 6:
		{string name6;
			cout << "\n  GLABAT TUNA  \t\t...(" << sl6 << " R-Y )...\t\n";
			name6= "\n\t\t  GLABAT TUNA  \t\t...(1050 R-Y )...\t\n";
			print_price(sl6);
			return name6;
		}
		case 7:
		{string name7;
			cout << "\n GLABAT FOUL \t\t...(" << sl7 << "R-Y )...\t\n";
			name7= "\n\t\t GLABAT FOUL \t\t...(650 R-Y )...\t\n";
			print_price(sl7);
			return name7;
			break; }
		case 8:
		{string name8;
			cout << "\n GLABAT BZALA \t\t...(" << sl8 << " R-Y )...\t\n";
			name8= "\n\t\t GLABAT BZALA \t\t...(700 R-Y )...\t\n";
			print_price(sl8);
		return name8;
		}
		case 9:
		{string name9;
			cout << "\n  SHAKSHOKA \t\t...(" << sl9 << " R-Y )...\t\n";
			name9= "\n\t\t  SHAKSHOKA \t\t...(900 R-Y )...\t\n";
			print_price(sl9);
			return name9;
		}
		}
	}
//end salatat and glabat

//start drink and ice cream
	case 5:
		cout << "\n\t------------------MENU DRINK AND ICE CREAM------------------\t\n";
		cout << "\n\n1) LEEM \t  ";
		cout << "2) SUN QEECK \n";
		cout << "3) VEMTO \t  ";
		cout << "4) FUAKAH MSHACKL \n";
		cout << "5) MOAZ BALHALEEB ";
		cout << "6) ICE CHOCO  \n";
		cout << "7) ICE ARACIY \n";
		cout << "---------------------------------------------------------------------\n";
		cout << "\n\n\t \t\t -(..PLZ CHOICE LIST FAVORITE YOU  OF RICE..)- \t \t\t\n\n";
		cin >> item;
		switch (item)
		{
#define sl1  200
#define sl2  300
#define sl3  250
#define sl4  500
#define sl5  300
#define sl6  700
#define sl7  1300
		case 1:
		{string name1;
		cout << "\n LEMM \t\t...(" << sl1 << " R-Y )...\t\n";
		name1 = "\n\t\t LEEM \t\t...(200 R-Y )...\t\n";
		print_price(sl1);
		return name1;
		}
		case 2:
		{
			string name2;
			cout << "\n SUN QEECK \t\t...(" << sl2 << " R-Y )...\t\n";
			name2 = "\n\t\t SUN QEECK \t\t...(300 R-Y )...\t\n";
			print_price(sl2);
			return name2;
		}
		case 3:
		{
			string name3;
			cout << "\n VEMTO \t\t...(" << sl3 << " R-Y )...\t\n";
			name3 = "\n\t\t VEMTO \t\t...(250 R-Y )...\t\n";
			print_price(sl3);
			return name3;
		}
		case 4:
		{
			string name4;
			cout << "\n FUAKH MSHACKL \t\t...(" << sl4 << " R-Y )...\t\n";
			name4 = "\n\t\t FUAKH MSHACKL \t\t...(500 R-Y )...\t\n";
			print_price(sl4);
			return name4;
		}
		case 5:
		{
			string name5;
			cout << "\n MOAZ BALHALEEB \t\t...(" << sl5 << " R-Y )...\t\n";
			name5 = "\n\t\t MOAZ BALHALEEB \t\t...(300 R-Y )...\t\n";
			print_price(sl5);
			return name5;
		}
		case 6:
		{
			string name6;
			cout << "\n ICE CHOCO \t\t...(" << sl6 << " R-Y )...\t\n";
			name6 = "\n\t\t ICE CHOCO \t\t...(700 R-Y )...\t\n";
			print_price(sl6);
			return name6;
		}
		case 7:
		{
			string name7;
			cout << "\n ICE ARACIY \t\t...(" << sl7 << " R-Y )...\t\n";
			name7 = "\n\t\t ICE ARACIY \t\t...(1300 R-Y )...\t\n";
			print_price(sl7);
			return name7;
		}
		
		}
//DRINKS AND ICE CREAM
	}
}
//sum price
int sum_price(int w)
{
	sum += w;
	return sum;
}
// link between list
void link()
{
	string v = food();
	node*add = new node();
	add->data = v;

	if (head == NULL)
	{
		head = add;
		add->p = NULL;
	}
	else
	{
		node*temp = head;
		while (temp->p != NULL)
		{
			temp = temp->p;
		}
		temp->p = add;
		add->p = NULL;
	}
}
//dispaly of list
void display()
{
	node*temp = head;
	if (head = NULL)
	{
		cout << "linked list are empty \n";
	}
	else
	{
		cout << "\t\t\t\t\t\t----------------------------------\n";
		while (temp != NULL)
		{
			cout << "\t\t\t\t\t\t" << temp->data << endl;
			temp = temp->p;
		}
		cout << "\t\t\t\t\t\t----------------------------------\n";
		cout << " \t\t\t\t\t\t[- ALMAARI RESTURANT  -]\n";
		cout << " \t\t\t\t\t\t--> THANKS FOR CHOICE US <--\n";
	}
}
//print total of price
void print_price(int y)
{
	cout << "\t\t\t\t\t\t[ THE TOTAL PRICE ....(" << sum_price(y) << " R.Y ]" << endl;
}
int main()
{ //start information for you
	string user, location;
	int num, id, item, card;
	first:
	cout << "\t\t\-------- ALMAARI RESTURANT ---------- \n";
	cout << "PLZ ENTER YOUR NAME : \n";
	cin >> user;
	cout << user << " WELCOME TO ALMAARI RESTURANT  \n";
	cout << "\nPLZ ENTER YOUR LOCATION : \n";
	cin >> location;
	cout << "\nPLZ ENTER YOUR NUMBER : \n";
	cin >> num;
	cout << "\n DO YOU WANT TO PAY THE AMOUNT CASH ENTER [1]  : \n";
	cout << "\n DO YOU WANT TO PAY THE AMOUNT OF THE ACCOUNT ENTER [2]  : \n";
	cin >> id;
	switch (id)
	{
	case 1:
	{
		cout << "PAY THE AMOUNT WILL BE CASH \n";
		break;
	}
	case 2:
	{
		cout << "PLZ ENTER YOUR ID OF CARD \n";
		cin >> card;
		cout << "PAY THE AMOUNT WILL BE OF THE ACCOUNT \n";
		break;
	}
	}
	cout << "YOUR NAME IS :" << user << endl;
	cout << "YOUR LOCATION IS :" << location << endl;
	cout << "YOUR NUMBER IS :" << num << endl;

	cout << "\n IF YOUR INFORMATION IS CORECT ENTER [1]  : \n";
	cout << "\n IF  YOUR INFORMATION IS NO CORECT ENTER [2]  : \n";
	cin >> id;
	switch (id)
	{
	case 1:
	{
		cout << "----------------------------------------------------\n";
		break;
	}
	case 2:
	{
		goto first;
		break;
	}
	}
 //end information for you
 	do {
			link();
			cout << "TO CONTINUE ENTER (1) OR TO EXIT ENTER (0) \n";
			cin >> item;
		} while (item != 0);
		display();
	system("pause");
	return 0;
}