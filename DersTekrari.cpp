// DersTekrari.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

using namespace std;

//int main() {
//    int myAge;
//    int votingAge=18;
//    cout << "How old are you?" << '\n';
//     
//    cin >> myAge;
//
//    if (myAge >= votingAge) {
//        cout << "Old enough to vote!";
//    }
//    else {
//        cout << "Not old enough to vote.";
//    }
//    return 0;
//}

//int main() {
//    int i = 0;
//    while (i < 5) {
//        cout << i << "\n";
//        i++;
//    }
//    return 0;
//}


//int main() {
//    for (int i = 0; i < 5; i++) {
//        cout << i << "\n";
//    }
//    return 0;
//}

//İç içe döngü
//int main() {
//    // Outer loop
//    for (int i = 1; i <= 2; ++i) {
//        cout << "Outer: " << i << "\n";  // Executes 2 times
//
//        // Inner loop
//        for (int j = 1; j <= 3; ++j) {
//            cout << " Inner: " << j << "\n";  // Executes 6 times (2 * 3)
//        }
//    }
//    return 0;
//}

//int main() {
//    int myNumbers[5] = { 10, 20, 30, 40, 50 };
//    for (int i : myNumbers) {
//        cout << i << "\n";
//    }
//    return 0;
//}
//
//int main() {
//    int i = 0;
//    while (i < 10) {
//        if (i == 4) {
//            i++;
//            continue;
//        }
//        cout << i << "\n";
//        i++;
//    }
//    return 0;
//}

//int main() {
//    string cars[5] = { "Volvo", "BMW", "Ford", "Mazda", "Tesla" };
//    for (int i = 0; i < 5; i++) {
//        cout << cars[i] << "\n";
//    }
//    return 0;
//}

//int main() {
//    string cars[5] = { "Volvo", "BMW", "Ford", "Mazda", "Tesla" };
//    for (int i = 0; i < 5; i++) {
//        cout << i << " = " << cars[i] << "\n";
//    }
//    return 0;
//}

//int main() {
//    int myNumbers[5] = { 10, 20, 30, 40, 50 };
//    for (int i = 0; i < 5; i++) {
//        cout << myNumbers[i] << "\n";
//    }
//    return 0;


//int main() {
//    int myNumbers[5] = { 10, 20, 30, 40, 50 };
//    for (int i : myNumbers) {
//        cout << i << "\n";
//    }
//    return 0;
//}

//Dizi Boyutu
//int main() {
//    int myNumbers[5] = { 10, 20, 30, 40, 50 };
//    int getArrayLength = sizeof(myNumbers) / sizeof(int);
//    cout << getArrayLength;
//    return 0;
//}

//int main() {
//    int myNumbers[5] = { 10, 20, 30, 40, 50 };
//    for (int i = 0; i < sizeof(myNumbers) / sizeof(int); i++) {
//        cout << myNumbers[i] << "\n";
//    }
//    return 0;
//}

//int main() {
//    int myNumbers[5] = { 10, 20, 30, 40, 50 };
//    for (int i : myNumbers) {
//        cout << i << "\n";
//    }
//    return 0;
//}

//Çok boyutlu diziler
//int main() {
//    string letters[2][4] = {
//      { "A", "B", "C", "D" },
//      { "E", "F", "G", "H" }
//    };
//
//    cout << letters[0][2];
//    return 0;
//}

//int main() {
//    string letters[2][4] = {
//      { "A", "B", "C", "D" },
//      { "E", "F", "G", "H" }
//    };
//
//    for (int i = 0; i < 2; i++) {
//        for (int j = 0; j < 4; j++) {
//            cout << letters[i][j] << "\n";
//        }
//    }
//    return 0;
//}


//int main() {
//    string letters[2][2][2] = {
//      {
//        { "A", "B" },
//        { "C", "D" }
//      },
//      {
//        { "E", "F" },
//        { "G", "H" }
//      }
//    };
//
//    for (int i = 0; i < 2; i++) {
//        for (int j = 0; j < 2; j++) {
//            for (int k = 0; k < 2; k++) {
//                cout << letters[i][j][k] << "\n";
//            }
//        }
//    }
//    return 0;
//}

//int main() {
//    // We put "1" to indicate there is a ship.
//    bool ships[4][4] = {
//      { 0, 1, 1, 0 },
//      { 0, 0, 0, 0 },
//      { 0, 0, 1, 0 },
//      { 0, 0, 1, 0 }
//    };
//
//    // Keep track of how many hits the player has and how many turns they have played in these variables
//    int hits = 0;
//    int numberOfTurns = 0;
//
//    // Allow the player to keep going until they have hit all four ships
//    while (hits < 4) {
//        int row, column;
//
//        cout << "Selecting coordinates\n";
//
//        // Ask the player for a row
//        cout << "Choose a row number between 0 and 3: ";
//        cin >> row;
//
//        // Ask the player for a column
//        cout << "Choose a column number between 0 and 3: ";
//        cin >> column;
//
//        // Check if a ship exists in those coordinates
//        if (ships[row][column]) {
//            // If the player hit a ship, remove it by setting the value to zero.
//            ships[row][column] = 0;
//
//            // Increase the hit counter
//            hits++;
//
//            // Tell the player that they have hit a ship and how many ships are left
//            cout << "Hit! " << (4 - hits) << " left.\n\n";
//        }
//        else {
//            // Tell the player that they missed
//            cout << "Miss\n\n";
//        }
//
//        // Count how many turns the player has taken
//        numberOfTurns++;
//    }
//
//    cout << "Victory!\n";
//    cout << "You won in " << numberOfTurns << " turns";
//
//    return 0;
//}

//02.09.2023
// 
// STRUCT
//int main() {
//    struct {
//        int myNum;
//        string myString;
//    } myStructure;
//
//    myStructure.myNum = 1;
//    myStructure.myString = "Hello World!";
//
//    cout << myStructure.myNum << "\n";
//    cout << myStructure.myString << "\n";
//    return 0;
//}
// 
// 
//int main() {
//    struct {
//        string brand;
//        string model;
//        int year;
//    } myCar1, myCar2; // We can add variables by separating them with a comma here
//
//    // Put data into the first structure
//    myCar1.brand = "BMW";
//    myCar1.model = "X5";
//    myCar1.year = 1999;
//
//    // Put data into the second structure
//    myCar2.brand = "Ford";
//    myCar2.model = "Mustang";
//    myCar2.year = 1969;
//
//    // Print the structure members
//    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
//    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
//    return 0;
//}

// Declare a structure named "car"
//struct car {
//	string brand;
//	string model;
//	string name;
//	int year;
//};
//
//int main() {
//	// Create a car structure and store it in myCar1;
//	car myCar1;
//	myCar1.brand = "BMW";
//	myCar1.model = "X5";
//	myCar1.year = 1999;
//
//   
//
//	// Create another car structure and store it in myCar2;
//	car myCar2;
//	myCar2.brand = "Ford";
//	myCar2.model = "Mustang";
//	myCar2.year = 1969;
//
//	// Print the structure members
//	cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
//	cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
//
//	return 0;
//}

//& OPERATÖRÜ
//int main() {
//	string food = "Pizza";
//	string& meal = food;
//
//	cout << food << "\n";
//	cout << meal << "\n";
//	return 0;
//}

//int main() {
//	string food = "Pizza";
//
//	cout << &food;
//	return 0;
//}

//POİNTER
//int main() {
//	string food = "Pizza";  // A string variable
//	string* ptr = &food;  // A pointer variable that stores the address of food
//
//	// Output the value of food
//	cout << food << "\n";
//
//	// Output the memory address of food
//	cout << &food << "\n";
//
//	// Output the memory address of food with the pointer
//	cout << ptr << "\n";
//	return 0;
//}

//Adresteki Değeri Değiştirme


//int main() {
//	string food = "Pizza";
//	string* ptr = &food;
//
//	// Output the value of food
//	cout << food << "\n";
//
//	// Output the memory address of food
//	cout << &food << "\n";
//
//	// Access the memory address of food and output its value
//	cout << *ptr << "\n";
//
//	// Change the value of the pointer
//	*ptr = "Hamburger";
//
//	// Output the new value of the pointer
//	cout << *ptr << "\n";
//
//	// Output the new value of the food variable
//	cout << food << "\n";
//	return 0;
//}


//FONKSİYONLAR

//void myFunction() {
//	cout << "I just got executed!";
//}
//
//int main() {
//	myFunction();
//	return 0;
//}


// Function declaration
//void myFunction();
//
//// The main method
//int main() {
//	myFunction();  // call the function
//	return 0;
//}
//
//// Function definition
//void myFunction() {
//	cout << "I am happy babygirl in here!";
//}

//Parametreler
//void myFunction(string fname) {
//	cout << fname << " Gedik\n";
//}
//
//int main() {
//	myFunction("Beyza");
//	myFunction("Emir");
//	myFunction("Mete");
//	return 0;
//}
//Default Parameters
//void myFunction(string country = "Norway") {
//	cout << country << "\n";
//}
//
//int main() {
//	myFunction("Türkiye");
//	myFunction("India");
//	myFunction();
//	myFunction("USA");
//	return 0;
//}

//void myFunction(string fname, int age) {
//	cout << fname << " Refsnes. " << age << " years old. \n";
//}
//
//int main() {
//	myFunction("Liam", 3);
//	myFunction("Jenny", 14);
//	myFunction("Anja", 30);
//	return 0;
//}

//REturn Values
//int myFunction(int x, int y) {
//	return x + y;
//}
//
//int main() {
//	cout << myFunction(5, 3);
//	return 0;
//}

//Pass By Reference
// Yer değiştirme 
//void swapNums(int& x, int& y) {
//	int z = x;
//	x = y;
//	y = z;
//}
//
//int main() {
//	int firstNum = 10;
//	int secondNum = 20;
//
//	cout << "Before swap: " << "\n";
//	cout << firstNum <<  secondNum << "\n";
//
//	swapNums(firstNum, secondNum);
//
//	cout << "After swap: " << "\n";
//	cout << firstNum <<  secondNum << "\n";
//
//	return 0;
//}



//Diziyi fonk.na aktarma
//void myFunction(int myNumbers[5]) {
//    for (int i = 0; i < 5; i++) {
//        cout << myNumbers[i] << "\n";
//    }
//}
//
//int main() {
//    int myNumbers[5] = { 10, 20, 30, 40, 50 };
//    myFunction(myNumbers);
//    return 0;
//}

//Aşırı Yükleme
//
//int plusFunc(int x, int y) {
//	return x + y;
//}
//
//double plusFunc(double x, double y) {
//	return x + y;
//}
//
//int main() {
//	int myNum1 = plusFunc(8, 5);
//	double myNum2 = plusFunc(4.3, 6.26);
//	cout << "Int: " << myNum1 << "\n";
//	cout << "Double: " << myNum2;
//	return 0;
//}

//Özyineleme
int sum(int k) {
    if (k > 0) {
        return k + sum(k - 1);
    }
    else {
        return 0;
    }
}

int main() {
    int result = sum(10);
    cout << result;
    return 0;
}