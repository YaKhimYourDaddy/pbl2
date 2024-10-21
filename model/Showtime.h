#ifndef SHOWTIME_H
#define SHOWTIME_H

#include <iostream>
using namespace std;

class Showtime {
private:
    string idShowtime;
    string idRoom;
    string idScreenModeInMovie;
    string onScreenDateTime;

public:
    Showtime(const string &idShowtime, const string &idRoom, const string &idScreenModeInMovie, const string &onScreenDateTime);
    string getId() const;
    string getRoomId() const;
    string getScreenModeInMovieId() const;
    string getOnScreenDateTime() const;
    void setOnScreenDateTime(const string &onScreenDateTime);
};

#endif // SHOWTIME_H
