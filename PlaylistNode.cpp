//
// Created by amoah on 10/3/2023.
//

#include "PlaylistNode.h"
#include <iostream>

using namespace std;

PlaylistNode::PlaylistNode() {
    uniqueID = "";
    songName = "";
    artistName = "";
    songLength = 0;
    nextNodePtr = nullptr;
}

PlaylistNode::PlaylistNode(string uniqueID, string songName, string artistName, int songLength) {
    this -> uniqueID = uniqueID;
    this -> songName = songName;
    this -> artistName = artistName;
    this -> songLength = songLength;
    this -> nextNodePtr = nullptr;
}

string PlaylistNode::GetID() {
    return uniqueID;
}

string PlaylistNode::GetSongName() {
    return songName;
}

string PlaylistNode::GetArtistName() {
    return artistName;
}

int PlaylistNode::GetSongLength() {
    return songLength;
}

PlaylistNode* PlaylistNode::GetNext() {
    return nextNodePtr;
}

void PlaylistNode::InsertAfter(PlaylistNode *nodePtr) {
    PlaylistNode* tempNode = nullptr;
    tempNode = this -> nextNodePtr;
    this -> nextNodePtr = nodePtr;
    nodePtr -> nextNodePtr = tempNode;
}

void PlaylistNode::SetNext(PlaylistNode *nodePtr) {
    this -> nextNodePtr = nodePtr;
}

void PlaylistNode::PrintPlaylistNode() {
    cout << "Unique ID:" << uniqueID << endl;
    cout << "Song Name: " << songName << endl;
    cout << "Artist Name: " << artistName << endl;
    cout << "Song Length (in seconds): " << songLength << endl;
}


