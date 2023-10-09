//
// Created by amoah on 10/3/2023.
//

#ifndef PLAYLISTNODE_PLAYLISTNODE_H
#define PLAYLISTNODE_PLAYLISTNODE_H

#include <string>

using std::string;


class PlaylistNode {
public:
    PlaylistNode();
    PlaylistNode(string uniqueID, string songName, string artistName, int songLength);
    string GetID();
    string GetSongName();
    string GetArtistName();
    int GetSongLength();
    PlaylistNode* GetNext();
    void InsertAfter(PlaylistNode* nodePtr);
    void SetNext(PlaylistNode* nodePtr);
    void PrintPlaylistNode();

private:
    string uniqueID;
    string songName;
    string artistName;
    int songLength;
    PlaylistNode* nextNodePtr;

};


#endif //PLAYLISTNODE_PLAYLISTNODE_H
