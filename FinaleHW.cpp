#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main ()
{
	int month, date, year;
	bool abort = false;
	
	do
	{
		cout << "Enter Month: \n";
		cin >> month;
		
		cout << "Enter Day: \n";
		cin >> date;
		
		cout << "Enter Year: \n";
		cin >> year;
		
		if (month == 0 || month >= 13 || date == 0 || date >= 32 || year == 0 || month == 2 && date >= 29 || month == 1 && month == 3 && month == 5 && month == 7 && month == 8 && month == 10 && month == 12 && date >=31 || month == 4 && month == 6 && month == 9 && month == 11 && date >= 30)
		{
	
			cout << "\nInvalid date!" << endl;
		break;
	}

   switch(month)
   {
   	case 1: if (month=1)
  		cout<< "January " << date << " " << year << endl;	
    	break;

   case 2: if (month=2)
   	{
		cout<< "February " << date << " " << year << endl;
		break;
}

	case 3: if (month=3)
	{
		cout<< "March " << date << " " << year << endl;
		break;
}
	case 4: if (month=4)
	{
  		cout<< "April " << date << " " << year << endl;
		break;
}
	case 5: if (month=5)
	{
   		cout<< "May " << date << " " << year << endl;
		break;
}
	case 6: if (month=6)
	{
   		cout<< "June " << date << " " << year << endl;
		break;
}
	case 7: if (month=7)
	{
   		cout<< "July " << date << " " << year << endl;
		break;
}
	case 8: if (month=8)
	{
   		cout<< "August " << date << " " << year << endl;
		break;
}
	case 9: if (month=9)
	{
   		cout<< "September " << date << " " << year << endl;
		break;
}
	case 10: if (month=10)
	{
   		cout<< "October " << date << " " << year << endl;
		break;
}
	case 11: if (month=11)
	{
   		cout<< "November " << date << " " << year << endl;
		break;
}
	case 12: if (month=12)
		{
   		cout<< "December " << date << " " << year << endl;
		break;
}
	
}		

} while (!abort);

   return 0;
}
