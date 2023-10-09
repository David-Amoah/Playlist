#include <iostream>
#include <string>

#include "PlaylistNode.h"

using namespace std;

void PrintMenu(const string& playListTitle) {
    cout << playListTitle << " PLAYLIST MENU" << endl;
    cout << "a - Add song" << endl;
    cout << "d - Remove song" << endl;
    cout << "c - Change position of song" << endl;
    cout << "s - Output songs by specific artist" << endl;
    cout << "t - Output total time of playlist (in seconds)" << endl;
    cout << "o - Output full playlist" << endl;
    cout << "q - Quit" << endl;
}


PlaylistNode* ExecuteMenu(char option, string& playListTitle, PlaylistNode* headNode) {
    cin.ignore();
   if (option == 'a') {
       string songName, uniqueID, artistName;
       int songLength;
       cout << "Add a song" << endl;

       cout << "Enter song's unique ID:" << endl;
       getline(cin,uniqueID);

       cout << "Enter song's name:" << endl;
       getline(cin,songName);

       cout << "Enter artist's name:" << endl;
       getline(cin,artistName);

       cout << "Enter song's length (in seconds):" << endl;
       cin >> songLength;

       PlaylistNode* newPlaylist =  new PlaylistNode(uniqueID,songName,artistName,songLength);

       if (headNode == nullptr) {
           headNode.
       }
       else {
           PlaylistNode* current = headNode;
           while (current->GetNext() != nullptr) {
               current = current -> GetNext();
           }
           current -> InsertAfter(newPlaylist);
       }

       cout << "\"" << songName << "\" added successfully" << endl;
       cout << endl;

       return headNode;
   }
   if (option == 'o') {
       if (headNode == nullptr) {
           cout << "Playlist is empty" << endl;
       }
       else {
           int songPosition = 1;
           PlaylistNode* currentNode = headNode;
           cout << playListTitle << " - OUTPUT FULL PLAYLIST" << endl;
           while (currentNode != nullptr) {
               cout << songPosition << ". " << endl;
               currentNode -> PrintPlaylistNode();
               cout << endl;
               currentNode = currentNode ->GetNext();
               songPosition++;
           }
       }
   }
   if(option == 'q') {
       cout << "Program terminated, you nitwit" << endl;
   }
    return nullptr;
}


int main() {

    string playlistTitle;
    cout << "Enter playlist's title: " << endl;
    getline(cin, playlistTitle);

    PlaylistNode* headNode = nullptr;
    PrintMenu(playlistTitle);

    char choice;
    cout << "Choose an option: ";
    cin >> choice;

    while (choice != 'q') {
        ExecuteMenu(choice,playlistTitle,headNode);
        PrintMenu(playlistTitle);
        cout << "Choose an option: ";
        cin >> choice;
    }



    return 0;



    ///INCOMPLETE
}
