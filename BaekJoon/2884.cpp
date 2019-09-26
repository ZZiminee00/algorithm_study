#include<iostream>
using namespace std;

int main() {
	int hour, minute;
	cin >> hour >> minute;

	if (minute >= 45) { 
		minute -= 45;
		cout << hour << " " << minute;
	}
	else if (minute < 45) {
		if (hour == 0) {
			--hour;
			hour = 24 + hour;
		}
		else{--hour;}
		minute = 60 - (45 - minute);
		cout << hour << " " << minute;
	}
}