#pragma once

#include <string>


class IPlayer {

    virtual int playSong(int index) = 0;

    virtual int stopSong() = 0;

    //virtual ISongData* getSongDetails(int index) = 0; // For 4-25, this method is not required for turn in but required later

    virtual int addSongToList(std::string song_path) = 0; // add a song to the list along with a unique id (based on ISongData)


};

