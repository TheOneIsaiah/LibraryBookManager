//Assignment 3 Library Book Manager
//Isaiah Doran

#include <iostream>
#include <conio.h>

using namespace std;

struct Book {
	string title;
	string author;
	int yearPublished;
	int numPages;

};


int main() {

	const int SIZE = 4;
	Book books[SIZE]{
		{"Eragon", "Christopher Paolini", 2002,500},
		{"Eldest","Christopher Paolini", 2005,668},
		{"Brisingr","Christopher Paolini",2008,748},
		{"Inheritance", "Christopher Paolini",2011,849}
	};

	for (int i = 0; i < SIZE; i++)
	{
		cout << i + 1 << ". " << books[i].title << "\n";
		cout << "Author: " << books[i].author << "\n";
		cout << "Year Published: " << books[i].yearPublished << "\n";
		cout << "Number of Pages: " << books[i].numPages << "\n\n";
	}

	string authorChange;
	int yearChange = 0;
	int pagesChange = 0;
	int bookId = 0;
	string saveChanges;

	cout << "Enter the ID of the book you would like to update (1-4): ";
	cin >> bookId;

	if (bookId > 4) cout << "This book is not in the library";
	else {
		cout << bookId << ". " << books[bookId - 1].title << "\n";
		cout << "Enter the Author (" << books[bookId-1].author << "):";
		cin >> authorChange;
		cout << "\nEnter the Year Published (" << books[bookId-1].yearPublished << "):";
		cin >> yearChange;
		cout << "\nEnter the Number of Pages (" << books[bookId-1].numPages << "):";
		cin >> pagesChange;
		cout << "\nSave these Changes? (Y/N): ";
		cin >> saveChanges;

		//cout << saveChanges;

		if (saveChanges == "y" || saveChanges == "Y") {
			books[bookId-1].author = authorChange;
			books[bookId-1].yearPublished = yearChange;
			books[bookId-1].numPages = pagesChange;

			cout << bookId << ". " << books[bookId-1].title << "\n";
			cout << "Author: " << books[bookId-1].author << "\n";
			cout << "Year Published: " << books[bookId-1].yearPublished << "\n";
			cout << "Number of Pages: " << books[bookId-1].numPages << "\n\n";
			(void)_getch();
		}

	}

	return 0;
}