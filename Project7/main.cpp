#include "func.h"

int main() {
	int task;
	cout << "Enter task number: ";
	cin >> task;

	switch (task)
	{
		case 1:
			firsttask();
			break;
		case 2:
			secondtask();
			break;
		case 3:
			thirdtask();
			break;
		case 4:
			fourthtask();
			break;
		case 5:
			fifthtask();
			break;
		case 6:
			sixthtask();
			break;
		case 7:
			seventhtask();
			break;
		case 8:
			eighthtask();
			break;
		case 9:
			ninthtask();
			break;
		case 10:
			tenthtask();
			break;
		case 11:
			eleventhtask();
			break;
	default:
		break;
	}
	return 0;
}