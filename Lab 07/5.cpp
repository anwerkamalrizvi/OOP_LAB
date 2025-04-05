#include <iostream>
#include <string>
using namespace std;

class Media {
protected:
    string t;
    string pubD;
    string uID;
    string pub;

public:
    Media(string tt, string pDate, string u_id, string pblsh)
        : t(tt), pubD(pDate), uID(u_id), pub(pblsh) {}

    virtual void disp() {
        cout << "Title: " << t << "\nPublisher: " << pub 
             << "\nDate: " << pubD << "\nID: " << uID << endl;
    }

    virtual void checkOut() {
        cout << "Checking out: " << t << endl;
    }

    virtual void returnItem() {
        cout << "Returning: " << t << endl;
    }

    virtual bool search(string k, string v) {
        if (k == "title" && t == v) return true;
        if (k == "publisher" && pub == v) return true;
        if (k == "uniqueID" && uID == v) return true;
        return false;
    }
};

class Book : public Media {
private:
    string auth;
    string ISBN;
    int pgs;

public:
    Book(string tt, string pDate, string u_id, string pblsh, string a, string isbn, int pages)
        : Media(tt, pDate, u_id, pblsh), auth(a), ISBN(isbn), pgs(pages) {}

    void disp() override {
        Media::disp();
        cout << "Author: " << auth << "\nISBN: " << ISBN << "\nPages: " << pgs << endl;
    }

    bool search(string k, string v) override {
        if (k == "author" && auth == v) return true;
        return Media::search(k, v);
    }
};

class DVD : public Media {
private:
    string dir;
    int dur;
    string rate;

public:
    DVD(string tt, string pDate, string u_id, string pblsh, string d, int du, string r)
        : Media(tt, pDate, u_id, pblsh), dir(d), dur(du), rate(r) {}

    void disp() override {
        Media::disp();
        cout << "Director: " << dir << "\nDuration: " << dur << " mins\nRating: " << rate << endl;
    }

    bool search(string k, string v) override {
        if (k == "director" && dir == v) return true;
        return Media::search(k, v);
    }
};

class CD : public Media {
private:
    string art;
    int tracks;
    string genre;

public:
    CD(string tt, string pDate, string u_id, string pblsh, string a, int trks, string gen)
        : Media(tt, pDate, u_id, pblsh), art(a), tracks(trks), genre(gen) {}

    void disp() override {
        Media::disp();
        cout << "Artist: " << art << "\nTracks: " << tracks << "\nGenre: " << genre << endl;
    }

    bool search(string k, string v) override {
        if (k == "artist" && art == v) return true;
        return Media::search(k, v);
    }
};

class Magazine : public Media {
private:
    string issue;
    string freq;

public:
    Magazine(string tt, string pDate, string u_id, string pblsh, string iss, string f)
        : Media(tt, pDate, u_id, pblsh), issue(iss), freq(f) {}

    void disp() override {
        Media::disp();
        cout << "Issue: " << issue << "\nFrequency: " << freq << endl;
    }

    bool search(string k, string v) override {
        if (k == "issueNumber" && issue == v) return true;
        return Media::search(k, v);
    }
};

int main() {
    Book b1("Kabhi Khushi Kabhi Gham", "2001", "B001", "Dharma Productions", "Karan Johar", "978-93-90275-33-3", 500);
    DVD d1("Lagaan", "2001", "D001", "Aamir Khan Productions", "Ashutosh Gowariker", 224, "U");
    CD c1("Dil Dil Pakistan", "1987", "C001", "CBS Records", "Vital Signs", 10, "Pop");
    Magazine m1("Herald", "June 2023", "M001", "Dawn Media Group", "June", "Monthly");

    b1.disp();
    d1.disp();
    c1.disp();
    m1.disp();

    string searchTitle = "Lagaan";
    cout << "Searching for media with title: " << searchTitle << endl;
    if (d1.search("title", searchTitle)) {
        cout << "Found DVD with title: " << searchTitle << endl;
    }

    string searchAuthor = "Karan Johar";
    cout << "\nSearching for books by author: " << searchAuthor << endl;
    if (b1.search("author", searchAuthor)) {
        cout << "Found book by author: " << searchAuthor << endl;
    }

    string searchArtist = "Vital Signs";
    cout << "\nSearching for CD by artist: " << searchArtist << endl;
    if (c1.search("artist", searchArtist)) {
        cout << "Found CD by artist: " << searchArtist << endl;
    }

    string searchIssueNumber = "June";
    cout << "\nSearching for magazine by issue number: " << searchIssueNumber << endl;
    if (m1.search("issueNumber", searchIssueNumber)) {
        cout << "Found magazine with issue number: " << searchIssueNumber << endl;
    }

    return 0;
}
