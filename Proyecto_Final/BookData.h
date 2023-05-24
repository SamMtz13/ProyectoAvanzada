#include <iostream>
#include <string>


class BookData {
public:
    //DEFAULT CONSTRUCTOR
    BookData(int=0,const std::string& ="",
        const std::string& = "", int = 0, const std::string& = "", int = 0, const std::string& = "",int=0);
    //BookData(int bookNumberValue, const string& Name, const string& AuthorName, int pages, const string& Editorial, int yearValue, const string& genre);

    // set and get functions for accountNumber
    void setbookNumber(int);
    int getbookNumber() const;

    /*void setbookNumber(int);
    int getbookNumber() const;*/

    // set and get functions for Name
    void setName(const std::string&);
    std::string getName() const;

    // set and get functions for Authors Name
    void setAuthorsName(const std::string&);
    std::string getAuthorsName() const;

    // set and get functions for pages
    void setpages(int);
    double getpages() const;
    //accesor functions for editorial
    void setEditorial(const std::string&);
    std::string getEditorial() const;
    //set and get functions for year
    void setyear(int);
    int getyear() const;
    //set and get functions for genre
    void setgenre(const std::string&);
    std::string getgenre() const;
    //set and get functions for Copies
    void setCopies(int);
    int getCopies() const;


private:
    int bookNumber;
    char Name[15];
    char AuthorName[15];
    int pages;
    char Editorial[15];
    int year;
    char genre[15];
    int Copies;
};