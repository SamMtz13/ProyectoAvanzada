#include <string>
#include "BookData.h";
using namespace std;

//DEFAULT CONSTRUCTOR
BookData::BookData(int bookNumberValue, const string& Name,
	const string& AuthorName, int pages,
	const string& Editorial, int yearValue, const string& genre,int copies) {
	setbookNumber(bookNumberValue);
	setName(Name);
	setAuthorsName(AuthorName);
	setpages(pages);
	setEditorial(Editorial);
	setyear(yearValue);
	setgenre(genre);
	setCopies(copies);
	
}
// accessor functions for accountNumber
int BookData::getbookNumber() const {return bookNumber;}
// set bookNumber value
void BookData::setbookNumber(int bookNumberValue) {bookNumber = bookNumberValue;}
//get name
string BookData::getName() const {return Name;}
//set name
void BookData::setName(const string& NameString) {
	// copy at most 15 characters from string to Name
	int length{ static_cast<int>(NameString.size()) };
	length = (length < 15 ? length : 14);
	NameString.copy(Name, length);
	Name[length] = '\0'; // append null character to Name
}

//PAGES
void BookData::setpages(int)
{
}
double BookData::getpages() const
{
	return 0.0;
}
//AUTHOR NAME
void BookData::setAuthorsName(const string& AuthorNameString) {
	// copy at most 15 characters from string to Name
	int length{ static_cast<int>(AuthorNameString.size()) };
	length = (length < 15 ? length : 14);
	AuthorNameString.copy(AuthorName, length);
	AuthorName[length] = '\0'; // append null character to Name
}

std::string BookData::getAuthorsName() const
{
	return std::string();
}

//EDITORIAL
void BookData::setEditorial(const string& EditorialString) {
	// copy at most 15 characters from string to Name
	int length{ static_cast<int>(EditorialString.size()) };
	length = (length < 15 ? length : 14);
	EditorialString.copy(Editorial, length);
	Editorial[length] = '\0'; // append null character to Name

}

std::string BookData::getEditorial() const
{
	return std::string();
}

//YEAR
void BookData::setyear(int)
{
}
int BookData::getyear() const
{
	return 0;
}

//GENRE
void BookData::setgenre(const std::string&)
{
}

std::string BookData::getgenre() const
{
	return std::string();
}

//COPIES
void BookData::setCopies(int)
{
}
int BookData::getCopies() const
{
	return 0;
}