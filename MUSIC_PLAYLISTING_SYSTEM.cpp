#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>
#include <limits>
using namespace std;

void systemTitle() {
    cout << "\n================================================\n::::::::::::::::::::::::::::::::::::::::::::::::";
    cout << "\n\n\t  | MUSIC PLAYLISTING SYSTEM |\n";
    cout << "\n::::::::::::::::::::::::::::::::::::::::::::::::\n================================================";
    cout << "\n\n\tCourse Title";
    cout << "\n\n================================================\n\n\tBy: \n\n\tCode-X";
    cout << "\n\n================================================";
    cout << "\n\n         Press Enter to continue  ";
    _getch();
}

struct User {
    string name, username, pass;
    struct myplaylist1 {
        string songname, genre, artist, plname;
    } pl1[50];
    struct myplaylist2 {
        string songname, genre, artist, plname;
    } pl2[50];
    struct myplaylist3 {
        string songname, genre, artist, plname;
    } pl3[50];
    struct myplaylist4 {
        string songname, genre, artist, plname;
    } pl4[50];
    struct myplaylist5 {
        string songname, genre, artist, plname;
    } pl5[50];
} account[1];

int main() {
    systemTitle();
    int choice, nextchoice, plchoice, n = 0, i = 0, k = 0, j = 0, l = 0, m = 0, b = 0, a = 0, d = 0, f=0, c = 0, e = 0, z = 0, found = 0, found2 = 0, found3 = 0, found4 = 0, found5 = 0;
    string un[10], pw[10], pln, delsong;

account:
    system("cls");
    cout << "\n================================================";
    cout << "\n     ::::::::::| USER ACCOUNT |::::::::::";
    cout << "\n================================================";
    cout << "\n\n     [1] Registration";
    cout << "\n\n     [2] Login";
    cout << "\n\n================================================";
    cout << "\n\nEnter your choice: ";
    cin >> choice;
    switch (choice) {
    case 1:
    {
        system("cls");
        if (account[0].name != ""){
          cout << "\n================================================";
          cout << "\n\n        ::::::::| REGISTRATION |::::::::::";
          cout << "\n\n================================================";
          cout << "\n\nYou already registered! Please proceed to login";
          cout << "\n\n================================================";
          cout << "\n\n    Press ENTER to go back to user account \n";
          _getch();
          goto account;
        } else {
        cout << "\n================================================";
        cout << "\n\n        ::::::::| REGISTRATION |::::::::::";
        cout << "\n\n================================================";
        cin.ignore();
        cout << "\n\nEnter your name: "; getline(cin, account[n].name);
        cout << "\nSelect a username: "; cin >> account[n].username;
        cout << "\nSelect a password: "; cin >> account[n].pass;
        //n++;
        cout << "\n\n================================================";
        cout << "\n\n\t     REGISTRATION SUCCESSFUL! \n\n================================================ \n\nPress ENTER to continue ";
        _getch();
        goto account;
    }
  }
    break;

    case 2:
    {
        system("cls");
        cout << "\n================================================";
        cout << "\n\n           ::::::::| LOGIN |::::::::::";
        cout << "\n\n================================================";
        cout << "\n\nEnter username: "; cin >> un[i];
        cout << "\nEnter password: "; cin >> pw[i];


        for (k = 0; k < 10; k++) {
            if (un[k] != account[k].username && pw[k] != account[k].pass) {
                cout << "\nAccount not found! Please try again.\n";
                cout << "\n================================================";
                cout << "\n\nPress ENTER to go back to account menu \n";
                _getch();
                system("cls");
                goto account;
            }
            else {
                cout << "\n\n================================================";
                cout << "\n\n\t        LOGIN SUCCESSFUL!\n";
                cout << "\n================================================";
                cout << "\n\nPress ENTER to continue \n";
                _getch();
                goto mainmenu;
            }
        }
    }

    default:
        cout << "\nInvalid choice! Please ENTER to continue \n";
        _getch();
        goto account;
        break;
    }


mainmenu:system("cls");
    cout << "\n================================================";
    cout << "\n       ::::::::::| MAIN MENU |::::::::::";
    cout << "\n================================================";
    cout << "\n\n    [1] Create a new playlist";
    cout << "\n\n    [2] Search playlist";
    cout << "\n\n    [3] Update playlist";
    cout << "\n\n    [4] Display all playlist";
    cout << "\n\n    [5] Delete songs in playlist";
    cout << "\n\n    [6] Exit";
    cout << "\n\n================================================";
    cout << "\n\nEnter your choice: ";
    cin >> nextchoice;

    switch (nextchoice) {
    case 1:
    plmenu:system("cls");
        cout << "\n================================================";
        cout << "\n    ::::::::::| CREATE PLAYLIST |::::::::::";
        cout << "\n================================================";
        cout << "\n\n    [1] PLAYLIST 1";
        cout << "\n\n    [2] PLAYLIST 2";
        cout << "\n\n    [3] PLAYLIST 3";
        cout << "\n\n    [4] PLAYLIST 4";
        cout << "\n\n    [5] PLAYLIST 5";
        cout << "\n\n    [6] Go back to main menu";
        cout << "\n\n================================================";
        cout << "\n\nEnter your choice: ";
        cin >> plchoice;
        switch (plchoice) {
        case 1:
            system("cls");
            for (l = 0; l < 50; l++) {
                if (account[0].pl1[l].plname == "" && account[0].pl1[l].genre == "" && account[0].pl1[l].songname == "" && account[0].pl1[l].artist == "") {
                    cout << "\n================================================";
                    cout << "\n    ::::::::::| CREATE PLAYLIST |::::::::::";
                    cout << "\n================================================";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "\n\nPlaylist name: ";
                    getline(cin, account[0].pl1[l].plname);
                    cout << "\n(Genres: KPOP, OPM, POP, JAZZ, COUNTRY) \n\nGenre: ";
                    getline(cin, account[0].pl1[l].genre);
                    cout << "\n\n::::::::::: Press ENTER to add songs :::::::::::";
                    j++;
                addsong1:
                    while (account[0].pl1[l].songname == "" && account[0].pl1[l].artist == "") {
                        repeat: cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "\nSong name: ";
                        getline(cin, account[0].pl1[l].songname);
                        for (f=0; f<l; f++){
                          if (account[0].pl1[f].songname == account[0].pl1[l].songname){
                            cout << "\nSong already exist! Press ENTER to continue ";
                            goto repeat;
                          } else {
                            goto next;
                          }
                        }
                        next: cout << "\nArtist: ";
                        getline(cin, account[0].pl1[l].artist);

                        if (account[0].pl1[l].songname != "" && account[0].pl1[l].artist != "") {
                            l++;
                        }
                        cout << "\n================================================";
                        cout << "\nDo you want to add more song? \n(y/n): ";
                        char addsongc;
                        cin >> addsongc;
                        if (addsongc == 'y') {
                            goto addsong1;
                        }
                        else if (addsongc == 'n') {
                            cout << "\n================================================";
                            cout << "\n\nPress ENTER to go back to playlist menu \n";
                            _getch();
                            goto plmenu;
                        }
                    }
                }
                else if (account[0].pl5[1].plname == "") {
                    cout << "\n================================================";
                    cout << "\n    ::::::::::| CREATE PLAYLIST |::::::::::";
                    cout << "\n================================================";
                    cout << "\n\n     Playlist has been already created!";
                    cout << "\n\n================================================";
                    cout << "\n\nPress ENTER to go back to playlist menu \n";
                    _getch();
                    goto plmenu;
                  }
            }
            break;

        case 2:
            system("cls");
            for (l = 0; l < 50; l++) {
                if (account[0].pl2[l].plname == "" && account[0].pl2[l].genre == "" && account[0].pl2[l].songname == "" && account[0].pl2[l].artist == "") {
                    cout << "\n================================================";
                    cout << "\n    ::::::::::| CREATE PLAYLIST |::::::::::";
                    cout << "\n================================================";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "\n\nPlaylist name: ";
                    getline(cin, account[0].pl2[l].plname);
                    cout << "\n(Genres: KPOP, OPM, POP, JAZZ, COUNTRY) \n\nGenre: ";
                    getline(cin, account[0].pl2[l].genre);
                    cout << "\n\n::::::::::: Press ENTER to add songs :::::::::::";
                    j++;

                addsong2:
                    while (account[0].pl2[l].songname == "" && account[0].pl2[l].artist == "") {
                      repeat2: cin.ignore(numeric_limits<streamsize>::max(), '\n');
                      cout << "\nSong name: ";
                      getline(cin, account[0].pl2[l].songname);
                      for (f=0; f<l; f++){
                        if (account[0].pl2[f].songname == account[0].pl2[l].songname){
                          cout << "\nSong already exist! Press ENTER to continue ";
                          goto repeat2;
                        } else {
                          goto next2;
                        }
                      }
                      next2:
                        cout << "\nArtist: ";
                        getline(cin, account[0].pl2[l].artist);

                        if (account[0].pl2[l].songname != "" && account[0].pl2[l].artist != "") {
                            l++;
                        }
                        cout << "\n================================================";
                        cout << "\nDo you want to add more song? \n(y/n): ";
                        char addsongc;
                        cin >> addsongc;
                        if (addsongc == 'y') {
                            goto addsong2;
                        }
                        else if (addsongc == 'n') {
                            cout << "\n================================================";
                            cout << "\n\nPress ENTER to go back to playlist menu \n";
                            _getch();
                            goto plmenu;
                        }
                    }
                } else if (account[0].pl5[1].plname == "") {
                    cout << "\n================================================";
                    cout << "\n    ::::::::::| CREATE PLAYLIST |::::::::::";
                    cout << "\n================================================";
                    cout << "\n\n     Playlist has been already created!";
                    cout << "\n\n================================================";
                    cout << "\n\nPress ENTER to go back to playlist menu \n";
                    _getch();
                    goto plmenu;
                  }
            }
            break;
        case 3:
            system("cls");
            for (l = 0; l < 50; l++) {
                if (account[0].pl3[l].plname == "" && account[0].pl3[l].genre == "" && account[0].pl3[l].songname == "" && account[0].pl3[l].artist == "") {
                    cout << "\n================================================";
                    cout << "\n    ::::::::::| CREATE PLAYLIST |::::::::::";
                    cout << "\n================================================";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "\n\nPlaylist name: ";
                    getline(cin, account[0].pl3[l].plname);
                    cout << "\n(Genres: KPOP, OPM, POP, JAZZ, COUNTRY) \n\nGenre: ";
                    getline(cin, account[0].pl3[l].genre);
                    cout << "\n\n::::::::::: Press ENTER to add songs :::::::::::";
                    j++;

                addsong3:
                    while (account[0].pl3[l].songname == "" && account[0].pl3[l].artist == "") {
                      repeat3: cin.ignore(numeric_limits<streamsize>::max(), '\n');
                      cout << "\nSong name: ";
                      getline(cin, account[0].pl3[l].songname);
                      for (f=0; f<l; f++){
                        if (account[0].pl3[f].songname == account[0].pl3[l].songname){
                          cout << "\nSong already exist! Press ENTER to continue ";
                          goto repeat3;
                        } else {
                          goto next3;
                        }
                      }
                      next3:
                        cout << "\nArtist: ";
                        getline(cin, account[0].pl3[l].artist);

                        if (account[0].pl3[l].songname != "" && account[0].pl3[l].artist != "") {
                            l++;
                        }
                        cout << "\n================================================";
                        cout << "\nDo you want to add more song? \n(y/n): ";
                        char addsongc;
                        cin >> addsongc;
                        if (addsongc == 'y') {
                            goto addsong3;
                        }
                        else if (addsongc == 'n') {
                            cout << "\n================================================";
                            cout << "\n\nPress ENTER to go back to playlist menu \n";
                            _getch();
                            goto plmenu;
                        }
                    }
                  } else if (account[0].pl5[1].plname == "") {
                      cout << "\n================================================";
                      cout << "\n    ::::::::::| CREATE PLAYLIST |::::::::::";
                      cout << "\n================================================";
                      cout << "\n\n     Playlist has been already created!";
                      cout << "\n\n================================================";
                      cout << "\n\nPress ENTER to go back to playlist menu \n";
                      _getch();
                      goto plmenu;
                    }
            }
            break;

        case 4:
            system("cls");
            for (l = 0; l < 50; l++) {
                if (account[0].pl4[l].plname == "" && account[0].pl4[l].genre == "" && account[0].pl4[l].songname == "" && account[0].pl4[l].artist == "") {
                    cout << "\n================================================";
                    cout << "\n    ::::::::::| CREATE PLAYLIST |::::::::::";
                    cout << "\n================================================";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "\n\nPlaylist name: ";
                    getline(cin, account[0].pl4[l].plname);
                    cout << "\n(Genres: KPOP, OPM, POP, JAZZ, COUNTRY) \n\nGenre: ";
                    getline(cin, account[0].pl4[l].genre);
                    cout << "\n\n::::::::::: Press ENTER to add songs :::::::::::";
                    j++;

                addsong4:
                    while (account[0].pl4[l].songname == "" && account[0].pl4[l].artist == "") {
                      repeat4: cin.ignore(numeric_limits<streamsize>::max(), '\n');
                      cout << "\nSong name: ";
                      getline(cin, account[0].pl4[l].songname);
                      for (f=0; f<l; f++){
                        if (account[0].pl4[f].songname == account[0].pl4[l].songname){
                          cout << "\nSong already exist! Press ENTER to continue ";
                          goto repeat4;
                        } else {
                          goto next4;
                        }
                      }
                      next4:
                        cout << "\nArtist: ";
                        getline(cin, account[0].pl4[l].artist);

                        if (account[0].pl4[l].songname != "" && account[0].pl4[l].artist != "") {
                            l++;
                        }
                        cout << "\n================================================";
                        cout << "\nDo you want to add more song? \n(y/n): ";
                        char addsongc;
                        cin >> addsongc;
                        if (addsongc == 'y') {
                            goto addsong4;
                        }
                        else if (addsongc == 'n') {
                            cout << "\n================================================";
                            cout << "\n\nPress ENTER to go back to playlist menu \n";
                            _getch();
                            goto plmenu;
                        }
                    }
                } else if (account[0].pl5[1].plname == "") {
                    cout << "\n================================================";
                    cout << "\n    ::::::::::| CREATE PLAYLIST |::::::::::";
                    cout << "\n================================================";
                    cout << "\n\n     Playlist has been already created!";
                    cout << "\n\n================================================";
                    cout << "\n\nPress ENTER to go back to playlist menu \n";
                    _getch();
                    goto plmenu;
                  }
            }
            break;

        case 5:
            system("cls");
            for (l = 0; l < 50; l++) {
                if (account[0].pl5[l].plname == "" && account[0].pl5[l].genre == "" && account[0].pl5[l].songname == "" && account[0].pl5[l].artist == "") {
                    cout << "\n================================================";
                    cout << "\n    ::::::::::| CREATE PLAYLIST |::::::::::";
                    cout << "\n================================================";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "\n\nPlaylist name: ";
                    getline(cin, account[0].pl5[l].plname);
                    cout << "\n(Genres: KPOP, OPM, POP, JAZZ, COUNTRY) \n\nGenre: ";
                    getline(cin, account[0].pl5[l].genre);
                    cout << "\n\n::::::::::: Press ENTER to add songs :::::::::::";
                    j++;

                addsong5:
                    cin.ignore();
                    while (account[0].pl5[l].songname == "" && account[0].pl5[l].artist == "") {
                      repeat5: cin.ignore(numeric_limits<streamsize>::max(), '\n');
                      cout << "\nSong name: ";
                      getline(cin, account[0].pl5[l].songname);
                      for (f=0; f<l; f++){
                        if (account[0].pl5[f].songname == account[0].pl5[l].songname){
                          cout << "\nSong already exist! Press ENTER to continue ";
                          goto repeat5;
                        } else {
                          goto next5;
                        }
                      }
                      next5:
                        cout << "\nArtist: ";
                        getline(cin, account[0].pl5[l].artist);

                        if (account[0].pl5[l].songname != "" && account[0].pl5[l].artist != "") {
                            l++;
                        }
                        cout << "\n================================================";
                        cout << "\nDo you want to add more song? \n(y/n): ";
                        char addsongc;
                        cin >> addsongc;
                        if (addsongc == 'y') {
                            goto addsong5;
                        }
                        else if (addsongc == 'n') {
                            cout << "\n================================================";
                            cout << "\n\nPress ENTER to go back to playlist menu \n";
                            _getch();
                            goto plmenu;
                        }
                    }
                } else if (account[0].pl5[1].plname == "") {
                    cout << "\n================================================";
                    cout << "\n    ::::::::::| CREATE PLAYLIST |::::::::::";
                    cout << "\n================================================";
                    cout << "\n\n     Playlist has been already created!";
                    cout << "\n\n================================================";
                    cout << "\n\nPress ENTER to go back to playlist menu \n";
                    _getch();
                    goto plmenu;
                  }
            }
            break;

        case 6:
            goto mainmenu;
            break;

        default:
            cout << "\n================================================";
            cout << "\n\nInvalid choice! Please ENTER to retry \n";
            _getch();
            goto plmenu;
            break;
        }
        break;


    case 2:
        //search
        system("cls");
        cout << "\n================================================";
        cout << "\n    ::::::::::| SEARCH PLAYLIST |::::::::::";
        cout << "\n================================================";
        cin.ignore();
        cout << "\n\nEnter playlist name: ";
        getline(cin, pln);
        for (e = 0; e < 50; e++) {
            if (account[0].pl1[e].plname == pln) {
                //if found in pl1
                cout << "\n================================================";
                cout << "\n\nPlaylist name: " << account[0].pl1[e].plname;
                cout << "\n\nGenre: " << account[0].pl1[e].genre;
                cout << "\n\n================================================";
                for (e = 0; e < 50; e++) {
                    if (account[0].pl1[e].songname != "" && account[0].pl1[e].artist != "") {
                        cout << "\n\nSong name: " << account[0].pl1[e].songname;
                        cout << "\n\nArtist: " << account[0].pl1[e].artist;
                        cout << "\n\n------------------------------------------------";
                    }
                }
            }
            else if (account[0].pl2[e].plname == pln) {
                //if found in pl2
                cout << "\n================================================";
                cout << "\n\nPlaylist name: " << account[0].pl2[e].plname;
                cout << "\n\nGenre: " << account[0].pl2[e].genre;
                cout << "\n\n================================================";
                for (e = 0; e < 50; e++) {
                    if (account[0].pl2[e].songname != "" && account[0].pl2[e].artist != "") {
                        cout << "\n\nSong name: " << account[0].pl2[e].songname;
                        cout << "\n\nArtist: " << account[0].pl2[e].artist;
                        cout << "\n\n------------------------------------------------";
                    }
                }
            }
            else if (account[0].pl3[e].plname == pln) {
                //if found in pl3
                cout << "\n================================================";
                cout << "\n\nPlaylist name: " << account[0].pl3[e].plname;
                cout << "\n\nGenre: " << account[0].pl3[e].genre;
                cout << "\n\n================================================";
                for (e = 0; e < 50; e++) {
                    if (account[0].pl3[e].songname != "" && account[0].pl3[e].artist != "") {
                        cout << "\n\nSong name: " << account[0].pl3[e].songname;
                        cout << "\n\nArtist: " << account[0].pl3[e].artist;
                        cout << "\n\n------------------------------------------------";
                    }
                }
            }
            else if (account[0].pl4[e].plname == pln) {
                //if found in pl4
                cout << "\n================================================";
                cout << "\n\nPlaylist name: " << account[0].pl4[e].plname;
                cout << "\n\nGenre: " << account[0].pl4[e].genre;
                cout << "\n\n================================================";
                for (e = 0; e < 50; e++) {
                    if (account[0].pl4[e].songname != "" && account[0].pl4[e].artist != "") {
                        cout << "\n\nSong name: " << account[0].pl4[e].songname;
                        cout << "\n\nArtist: " << account[0].pl4[e].artist;
                        cout << "\n\n------------------------------------------------";
                    }
                }
            }
            else if (account[0].pl5[e].plname == pln) {
                //if found in pl5
                cout << "\n================================================";
                cout << "\n\nPlaylist name: " << account[0].pl5[e].plname;
                cout << "\n\nGenre: " << account[0].pl5[e].genre;
                cout << "\n\n================================================";
                for (e = 0; e < 50; e++) {
                    if (account[0].pl5[e].songname != "" && account[0].pl5[e].artist != "") {
                        cout << "\n\nSong name: " << account[0].pl5[e].songname;
                        cout << "\n\nArtist: " << account[0].pl5[e].artist;
                        cout << "\n\n------------------------------------------------";
                    }
                }
            }
            else {
                cout << "\n================================================";
                cout << "\n\nPlaylist not found!";
                cout << "\n\nPress ENTER to go back to main menu ";
                _getch();
                goto mainmenu;
            }
        }
        cout << "\n\nPress ENTER to go back to main menu ";
        _getch();
        goto mainmenu;

    case 3:
        //update playlist
        system("cls");
        cout << "\n================================================";
        cout << "\n     ::::::::::| UPDATE PLAYLIST |::::::::::";
        cout << "\n================================================";
        cin.ignore();
        cout << "\n\nEnter playlist name : ";
        getline(cin, pln);
        for (e = 0; e < 50; e++) {
            if (account[0].pl1[e].plname == pln) {
              //if found in pl1
              cout << "\n================================================";
              cout << "\n\nPlaylist name : " << account[0].pl1[e].plname;
              cout << "\n\nGenre : " << account[0].pl1[e].genre;
              cout << "\n\n================================================";
              for (e = 0; e < 50; e++) {
                  if (account[0].pl1[e].songname != "" && account[0].pl1[e].artist != "") {
                      cout << "\n\nSong name : " << account[0].pl1[e].songname;
                      cout << "\n\nArtist : " << account[0].pl1[e].artist;
                      cout << "\n\n================================================";
                  }
              }
              cout << "\n\n::::::::::: Press ENTER to add songs :::::::::::";
              //cin.ignore(numeric_limits<streamsize>::max(), '\n');
              uppl1:
              for (l=0; l<50; l++){
              if (account[0].pl1[l].songname == "" && account[0].pl1[l].artist == "") {
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                  cout << "\n\nSong name : ";
                  getline(cin, account[0].pl1[l].songname);
                  cout << "\nArtist : ";
                  getline(cin, account[0].pl1[l].artist);

//                    if (account[0].pl2[l].songname != "" && account[0].pl2[l].artist != "") {
//                        l++;
//                    }
                  cout << "\n================================================";
                  cout << "\nDo you want to add more song? \n(y/n) :";
                  char addsongc;
                  cin >> addsongc;
                  if (addsongc == 'y') {
                      goto uppl1;
                  }
                  else if (addsongc == 'n') {
                      cout << "\n================================================";
                      cout << "\n\nPress ENTER to go back to main menu\n";
                      _getch();
                      goto mainmenu;
                  }
              }
            }
          }
            else if (account[0].pl2[e].plname == pln) {
                //if found in pl2
                cout << "\n================================================";
                cout << "\n\nPlaylist name : " << account[0].pl2[e].plname;
                cout << "\n\nGenre : " << account[0].pl2[e].genre;
                cout << "\n\n================================================";
                for (e = 0; e < 50; e++) {
                    if (account[0].pl2[e].songname != "" && account[0].pl2[e].artist != "") {
                        cout << "\n\nSong name : " << account[0].pl2[e].songname;
                        cout << "\n\nArtist : " << account[0].pl2[e].artist;
                        cout << "\n\n================================================";
                    }
                }
                cout << "\n\n::::::::::: Press ENTER to add songs :::::::::::";
                uppl2:
                for (l=0; l<50; l++){
                if (account[0].pl2[l].songname == "" && account[0].pl2[l].artist == "") {
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "\n\nSong name : ";
                    getline(cin, account[0].pl2[l].songname);
                    cout << "\nArtist : ";
                    getline(cin, account[0].pl2[l].artist);

//                    if (account[0].pl2[l].songname != "" && account[0].pl2[l].artist != "") {
//                        l++;
//                    }
                    cout << "\n================================================";
                    cout << "\nDo you want to add more song? \n(y/n) :";
                    char addsongc;
                    cin >> addsongc;
                    if (addsongc == 'y') {
                        goto uppl2;
                    }
                    else if (addsongc == 'n') {
                        cout << "\n================================================";
                        cout << "\n\nPress ENTER to go back to main menu\n";
                        _getch();
                        goto mainmenu;
                    }
                }
              }
            }
            else if (account[0].pl3[e].plname == pln) {
              //if found in pl3
              cout << "\n================================================";
              cout << "\n\nPlaylist name : " << account[0].pl3[e].plname;
              cout << "\n\nGenre : " << account[0].pl3[e].genre;
              cout << "\n\n================================================";
              for (e = 0; e < 50; e++) {
                  if (account[0].pl3[e].songname != "" && account[0].pl3[e].artist != "") {
                      cout << "\n\nSong name : " << account[0].pl3[e].songname;
                      cout << "\n\nArtist : " << account[0].pl3[e].artist;
                      cout << "\n\n================================================";
                  }
              }
              cout << "\n\n::::::::::: Press ENTER to add songs :::::::::::";
              uppl3:
              for (l=0; l<50; l++){
              if (account[0].pl3[l].songname == "" && account[0].pl3[l].artist == "") {
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                  cout << "\n\nSong name : ";
                  getline(cin, account[0].pl3[l].songname);
                  cout << "\nArtist : ";
                  getline(cin, account[0].pl3[l].artist);

//                    if (account[0].pl2[l].songname != "" && account[0].pl2[l].artist != "") {
//                        l++;
//                    }
                  cout << "\n================================================";
                  cout << "\nDo you want to add more song? \n(y/n) :";
                  char addsongc;
                  cin >> addsongc;
                  if (addsongc == 'y') {
                      goto uppl3;
                  }
                  else if (addsongc == 'n') {
                      cout << "\n================================================";
                      cout << "\n\nPress ENTER to go back to main menu\n";
                      _getch();
                      goto mainmenu;
                  }
              }
            }
          }
            else if (account[0].pl4[e].plname == pln) {
              //if found in pl4
              cout << "\n================================================";
              cout << "\n\nPlaylist name : " << account[0].pl4[e].plname;
              cout << "\n\nGenre : " << account[0].pl4[e].genre;
              cout << "\n\n================================================";
              for (e = 0; e < 50; e++) {
                  if (account[0].pl4[e].songname != "" && account[0].pl4[e].artist != "") {
                      cout << "\n\nSong name : " << account[0].pl4[e].songname;
                      cout << "\n\nArtist : " << account[0].pl4[e].artist;
                      cout << "\n\n================================================";
                  }
              }
              cout << "\n\n::::::::::: Press ENTER to add songs :::::::::::";
              uppl4:
              for (l=0; l<50; l++){
              if (account[0].pl4[l].songname == "" && account[0].pl4[l].artist == "") {
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                  cout << "\n\nSong name : ";
                  getline(cin, account[0].pl4[l].songname);
                  cout << "\nArtist : ";
                  getline(cin, account[0].pl4[l].artist);

//                    if (account[0].pl2[l].songname != "" && account[0].pl2[l].artist != "") {
//                        l++;
//                    }
                  cout << "\n================================================";
                  cout << "\nDo you want to add more song? \n(y/n) :";
                  char addsongc;
                  cin >> addsongc;
                  if (addsongc == 'y') {
                      goto uppl4;
                  }
                  else if (addsongc == 'n') {
                      cout << "\n================================================";
                      cout << "\n\nPress ENTER to go back to main menu\n";
                      _getch();
                      goto mainmenu;
                  }
              }
            }
          }
            else if (account[0].pl5[e].plname == pln) {
              //if found in pl5
              cout << "\n================================================";
              cout << "\n\nPlaylist name : " << account[0].pl5[e].plname;
              cout << "\n\nGenre : " << account[0].pl5[e].genre;
              cout << "\n\n================================================";
              for (e = 0; e < 50; e++) {
                  if (account[0].pl5[e].songname != "" && account[0].pl5[e].artist != "") {
                      cout << "\n\nSong name : " << account[0].pl5[e].songname;
                      cout << "\n\nArtist : " << account[0].pl5[e].artist;
                      cout << "\n\n================================================";
                  }
              }
              cout << "\n\n::::::::::: Press ENTER to add songs :::::::::::";
              uppl5:
              for (l=0; l<50; l++){
              if (account[0].pl5[l].songname == "" && account[0].pl5[l].artist == "") {
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                  cout << "\n\nSong name : ";
                  getline(cin, account[0].pl5[l].songname);
                  cout << "\nArtist : ";
                  getline(cin, account[0].pl5[l].artist);


                  cout << "\n================================================";
                  cout << "\nDo you want to add more song? \n(y/n) :";
                  char addsongc;
                  cin >> addsongc;
                  if (addsongc == 'y') {
                      goto uppl5;
                  }
                  else if (addsongc == 'n') {
                      cout << "\n================================================";
                      cout << "\n\nPress ENTER to go back to main menu\n";
                      _getch();
                      goto mainmenu;
                  }
              }
            }
          }
            else {
            cout << "\n================================================";
                cout << "\n\nPlaylist not found!";
                cout << "\n\nPress ENTER to go back to main menu";
                _getch();
                goto mainmenu;
            }
        }

    case 4:
        //display all
        system("cls");
        cout << "\n================================================";
        cout << "\n  ::::::::::| DISPLAY ALL PLAYLIST |::::::::::";
        cout << "\n================================================";
        cout << "\n\nAccount name : " << account[0].name;
        cout << "\n\n================================================";
        for (m = 0; m < 50; m++) {
            if (account[0].pl1[m].plname != "" && account[0].pl1[m].genre != "") {
                cout << "\n\nPlaylist 1";
                cout << "\n\nPlaylist name : " << account[0].pl1[m].plname;
                cout << "\n\nGenre : " << account[0].pl1[m].genre;
                cout << "\n\n================================================";
                for (m = 0; m < 50; m++) {
                    if (account[0].pl1[m].songname != "" && account[0].pl1[m].artist != "") {
                        cout << "\n\nSong name : " << account[0].pl1[m].songname;
                        cout << "\n\nArtist : " << account[0].pl1[m].artist;
                        cout << "\n\n------------------------------------------------";
                    }
                }
            }
        }
        for (b = 0; b < 50; b++) {
            if (account[0].pl2[b].plname != "" && account[0].pl2[b].genre != "") {
                cout << "\n\n================================================";
                cout << "\n\nPlaylist 2";
                cout << "\n\nPlaylist name : " << account[0].pl2[b].plname;
                cout << "\n\nGenre : " << account[0].pl2[b].genre;
                cout << "\n\n================================================";
                for (b = 0; b < 50; b++) {
                    if (account[0].pl2[b].songname != "" && account[0].pl2[b].artist != "") {
                        cout << "\n\nSong name : " << account[0].pl2[b].songname;
                        cout << "\n\nArtist : " << account[0].pl2[b].artist;
                        cout << "\n\n------------------------------------------------";
                    }
                }
            }
        }
        for (a = 0; a < 50; a++) {
            if (account[0].pl3[a].plname != "" && account[0].pl3[a].genre != "") {
                cout << "\n\n================================================";
                cout << "\n\nPlaylist 3";
                cout << "\n\nPlaylist name : " << account[0].pl3[a].plname;
                cout << "\n\nGenre : " << account[0].pl3[a].genre;
                cout << "\n\n================================================";
                for (a = 0; a < 50; a++) {
                    if (account[0].pl3[a].songname != "" && account[0].pl3[a].artist != "") {
                        cout << "\n\nSong name : " << account[0].pl3[a].songname;
                        cout << "\n\nArtist : " << account[0].pl3[a].artist;
                        cout << "\n\n------------------------------------------------";
                    }
                }
            }
        }
        for (d = 0; d < 50; d++) {
            if (account[0].pl4[d].plname != "" && account[0].pl4[d].genre != "") {
                cout << "\n\n================================================";
                cout << "\n\nPlaylist 4";
                cout << "\n\nPlaylist name : " << account[0].pl4[d].plname;
                cout << "\n\nGenre : " << account[0].pl4[d].genre;
                cout << "\n\n================================================";
                for (d = 0; d < 50; d++) {
                    if (account[0].pl4[d].songname != "" && account[0].pl4[d].artist != "") {
                        cout << "\n\nSong name : " << account[0].pl4[d].songname;
                        cout << "\n\nArtist : " << account[0].pl4[d].artist;
                        cout << "\n\n------------------------------------------------";
                    }
                }
            }
        }
        for (c = 0; c < 50; c++) {
            if (account[0].pl5[c].plname != "" && account[0].pl5[c].genre != "") {
                cout << "\n\n================================================";
                cout << "\n\nPlaylist 5";
                cout << "\n\nPlaylist name : " << account[0].pl5[c].plname;
                cout << "\n\nGenre : " << account[0].pl5[c].genre;
                cout << "\n\n================================================";
                for (c = 0; c < 50; c++) {
                    if (account[0].pl5[c].songname != "" && account[0].pl5[c].artist != "") {
                        cout << "\n\nSong name : " << account[0].pl5[c].songname;
                        cout << "\n\nArtist : " << account[0].pl5[c].artist;
                        cout << "\n\n------------------------------------------------";
                    }
                }
            }
        }
        cout << "\n\nPress ENTER to go back to main menu ";
        _getch();
        goto mainmenu;
        break;

    case 5:
        //delete a song
        system("cls");
        cout << "\n================================================";
        cout << "\n     ::::::::::| DELETE PLAYLIST |::::::::::";
        cout << "\n================================================";
        cin.ignore();
        cout << "\n\nEnter playlist name : ";
        getline(cin, pln);
        for (e = 0; e < 50; e++) {
            if (account[0].pl1[e].plname == pln) {
                //if found in pl1
                cout << "\n================================================";
                cout << "\n\nPlaylist name : " << account[0].pl1[e].plname;
                cout << "\n\nGenre : " << account[0].pl1[e].genre;
                cout << "\n\n================================================";
                for (e = 0; e < 50; e++) {
                    if (account[0].pl1[e].songname != "" && account[0].pl1[e].artist != "") {
                        cout << "\n\nSong name : " << account[0].pl1[e].songname;
                        cout << "\n\nArtist : " << account[0].pl1[e].artist;
                        cout << "\n\n------------------------------------------------";
                    }
                }
                cout << "\n\n:::::::::: Press ENTER to delete songs :::::::::\n";
                dels1:
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\nEnter song you want to delete: ";
                getline(cin, delsong);

                for (z = 0; z < 50; z++) {
                    if (account[0].pl1[z].songname == delsong) {
                        account[0].pl1[z].songname = account[0].pl1[l + 1].songname;
                        account[0].pl1[z].artist = account[0].pl1[l + 1].artist;
                        found++;
                        e--;
                    }
                }
                if (found == 0) {
                    cout << "\nSong doesn't found!";
                }
                else {
                    cout << "\nSong Deleted Successfully!";
                }
                cout << "\n\n================================================";
            delchoice: cout << "\n\nDo you want to delete another song? \n(y/n): ";
                char delsongc;
                cin >> delsongc;
                if (delsongc == 'y') {
                    goto dels1;
                }
                else if (delsongc == 'n') {
                    cout << "\n================================================";
                    cout << "\n\nPress ENTER to go back to main menu \n";
                    _getch();
                    goto mainmenu;
                }
                else {
                    cout << "\nInvalid choice. Try again\n";
                    _getch();
                    goto delchoice;
                }

            }
            else if (account[0].pl2[e].plname == pln) {
                //if found in pl2
                cout << "\n================================================";
                cout << "\n\nPlaylist name : " << account[0].pl2[e].plname;
                cout << "\n\nGenre : " << account[0].pl2[e].genre;
                cout << "\n\n================================================";
                for (e = 0; e < 50; e++) {
                    if (account[0].pl2[e].songname != "" && account[0].pl2[e].artist != "") {
                        cout << "\n\nSong name : " << account[0].pl2[e].songname;
                        cout << "\n\nArtist : " << account[0].pl2[e].artist;
                        cout << "\n\n------------------------------------------------";
                    }
                }
                cout << "\n\n:::::::::: Press ENTER to delete songs :::::::::\n";
            dels2:
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\nEnter song you want to delete: ";
                getline(cin, delsong);

                for (z = 0; z < 50; z++) {
                    if (account[0].pl2[z].songname == delsong) {
                        account[0].pl2[z].songname = account[0].pl2[l + 1].songname;
                        account[0].pl2[z].artist = account[0].pl2[l + 1].artist;
                        found2++;
                        e--;
                    }
                }
                if (found2 == 0) {
                    cout << "\nSong doesn't found!";
                }
                else {
                    cout << "\nSong Deleted Successfully!";
                }
                cout << "\n\n================================================";
            delchoice2: cout << "\n\nDo you want to delete another song? \n(y/n): ";
                char delsongc;
                cin >> delsongc;
                if (delsongc == 'y') {
                    goto dels2;
                }
                else if (delsongc == 'n') {
                    cout << "\n================================================";
                    cout << "\n\nPress ENTER to go back to main menu\n";
                    _getch();
                    goto mainmenu;
                }
                else {
                    cout << "\nInvalid choice. Try again\n";
                    _getch();
                    goto delchoice2;
                }
            }
            else if (account[0].pl3[e].plname == pln) {
                //if found in pl3
                cout << "\n================================================";
                cout << "\n\nPlaylist name : " << account[0].pl3[e].plname;
                cout << "\n\nGenre : " << account[0].pl3[e].genre;
                cout << "\n\n================================================";
                for (e = 0; e < 50; e++) {
                    if (account[0].pl3[e].songname != "" && account[0].pl3[e].artist != "") {
                        cout << "\n\nSong name : " << account[0].pl3[e].songname;
                        cout << "\n\nArtist : " << account[0].pl3[e].artist;
                        cout << "\n\n================================================";
                    }
                }
                cout << "\n\n:::::::::: Press ENTER to delete songs :::::::::\n";
            dels3:
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nEnter song you want to delete: ";
                getline(cin, delsong);

                for (z = 0; z < 50; z++) {
                    if (account[0].pl3[z].songname == delsong) {
                        account[0].pl3[z].songname = account[0].pl3[l + 1].songname;
                        account[0].pl3[z].artist = account[0].pl3[l + 1].artist;
                        found3++;
                        e--;
                    }
                }
                if (found3 == 0) {
                    cout << "\nSong doesn't found!";
                }
                else {
                    cout << "\nSong Deleted Successfully!";
                }
                cout << "\n\n================================================";
            delchoice3: cout << "\n\nDo you want to delete another song? \n(y/n): ";
                char delsongc;
                cin >> delsongc;
                if (delsongc == 'y') {
                    goto dels3;
                }
                else if (delsongc == 'n') {
                    cout << "\n================================================";
                    cout << "\n\nPress ENTER to go back to main menu\n";
                    _getch();
                    goto mainmenu;
                }
                else {
                    cout << "\nInvalid choice. Try again\n";
                    _getch();
                    goto delchoice3;
                }
            }
            else if (account[0].pl4[e].plname == pln) {
                //if found in pl4
                cout << "\n================================================";
                cout << "\n\nPlaylist name : " << account[0].pl4[e].plname;
                cout << "\n\nGenre : " << account[0].pl4[e].genre;
                cout << "\n\n================================================";
                for (e = 0; e < 50; e++) {
                    if (account[0].pl4[e].songname != "" && account[0].pl4[e].artist != "") {
                        cout << "\n\nSong name : " << account[0].pl4[e].songname;
                        cout << "\n\nArtist : " << account[0].pl4[e].artist;
                        cout << "\n\n================================================";
                    }
                }
                cout << "\n\n:::::::::: Press ENTER to delete songs :::::::::\n";
            dels4:
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nEnter song you want to delete: ";
            getline(cin, delsong);

                for (z = 0; z < 50; z++) {
                    if (account[0].pl4[z].songname == delsong) {
                        account[0].pl4[z].songname = account[0].pl4[l + 1].songname;
                        account[0].pl4[z].artist = account[0].pl4[l + 1].artist;
                        found4++;
                        e--;
                    }
                }
                if (found4 == 0) {
                    cout << "\nSong doesn't found!";
                }
                else {
                    cout << "\nSong Deleted Successfully!";
                }
                cout << "\n\n================================================";
            delchoice4: cout << "\n\nDo you want to delete another song? \n(y/n): ";
                char delsongc;
                cin >> delsongc;
                if (delsongc == 'y') {
                    goto dels4;
                }
                else if (delsongc == 'n') {
                    cout << "\n================================================";
                    cout << "\n\nPress ENTER to go back to main menu\n";
                    _getch();
                    goto mainmenu;
                }
                else {
                    cout << "\nInvalid choice. Try again\n";
                    _getch();
                    goto delchoice4;
                }
            }
            else if (account[0].pl5[e].plname == pln) {
                //if found in pl5
                cout << "\n================================================";
                cout << "\n\nPlaylist name : " << account[0].pl5[e].plname;
                cout << "\n\nGenre : " << account[0].pl5[e].genre;
                cout << "\n\n================================================";
                for (e = 0; e < 50; e++) {
                    if (account[0].pl5[e].songname != "" && account[0].pl5[e].artist != "") {
                        cout << "\n\nSong name : " << account[0].pl5[e].songname;
                        cout << "\n\nArtist : " << account[0].pl5[e].artist;
                        cout << "\n\n================================================";
                    }
                }
                cout << "\n\n:::::::::: Press ENTER to delete songs :::::::::\n";
            dels5:
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nEnter song you want to delete: ";
                getline(cin, delsong);

                for (z = 0; z < 50; z++) {
                    if (account[0].pl5[z].songname == delsong) {
                        account[0].pl5[z].songname = account[0].pl5[l + 1].songname;
                        account[0].pl5[z].artist = account[0].pl5[l + 1].artist;
                        found5++;
                        e--;
                    }
                }
                if (found5 == 0) {
                    cout << "\nSong doesn't found!";
                }
                else {
                    cout << "\nSong Deleted Successfully!";
                }
                cout << "\n\n================================================";
            delchoice5: cout << "\n\nDo you want to delete another song? \n(y/n): ";
                char delsongc;
                cin >> delsongc;
                if (delsongc == 'y') {
                    goto dels5;
                }
                else if (delsongc == 'n') {
                    cout << "\n================================================";
                    cout << "\n\nPress ENTER to go back to main menu\n";
                    _getch();
                    goto mainmenu;
                }
                else {
                    cout << "\nInvalid choice. Try again\n";
                    _getch();
                    goto delchoice5;
                }
            }
            else {
                cout << "\nPlaylist not found!";
                cout << "\n\nPress ENTER to go back to main menu";
                _getch();
                goto mainmenu;
            }
        }
        break;

        case 6:
        exit(0);
        break;

        default:
        cout << "\n\nInvalid choice! Press ENTER to go retry";
        _getch();
        goto mainmenu;
        break;
    }
    return 0;
}
