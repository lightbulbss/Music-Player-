#include "MyPlayer.hpp"
#include <list>
#include <string>
extern "C" {
#include "clib_ma.h"	
}
#include <iostream>

MyPlayer::MyPlayer()
{
	// emtpy default constructor
}

int MyPlayer::playSong(int index)
{
	std::string path = "unknown path";

	for (auto& i : song_list) {				// loop through list to find index
		if (i.getSongIndex() == index)
			path = *i.getSongFilePath();	// set song path based on index found
	}

	if (path == "unknown path")				// if no path found based on index
	{
		std::cout << "playSong ERROR:Path could not be found" << std::endl;
		return -1;
	}

	char* path_char = new char[path.length() + 1];

	strcpy_s(path_char, path.length() + 1, path.c_str());

	play_song(path_char);
	return 0;
}
int MyPlayer::stopSong()
{
	stop_song();
	return 0;
}
int MyPlayer::addSongToList(std::string song_path)
{
	// use song_path to retrieve metadata of song and put into song_data 
	// probably call getSongDetails

	MySongData song_data(song_path);
	song_data.setSongIndex(song_list.size());
	song_list.push_back(song_data);

	return 0;
}


std::list <MySongData> MyPlayer::getSongList() { return song_list; }
