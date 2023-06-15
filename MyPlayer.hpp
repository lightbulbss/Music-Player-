#include "IPlayer.hpp"
#include "MySongData.hpp"
#include <string>
#include <list>

class MyPlayer : public IPlayer
{
private: 
	std::list <MySongData> song_list;

public:
	MyPlayer();
    int playSong(int index);
    int stopSong();
	// ISongData* getSongDetails(int index);
	int addSongToList(std::string song_path);

	std::list <MySongData> getSongList();

};
