#ifndef MYSONGDATA_HEADER
#define MYSONGDATA_HEADER

#define TAGLIB_STATIC
#include <taglib.h>
#include <fileref.h>
#include <tag.h>
#include <tpropertymap.h>

#include <string>
#include <iostream>
#include "ISongData.hpp"


class MySongData : public ISongData
{
private:
	std::string title;
	std::string duration;
	std::string type;
	std::string artist;
	int index;
	std::string file_path;

public:
	// constructors
	MySongData(std::string fil);
		
	// implementation of virtual functions
	std::string* getSongTitle();
	std::string* getDuration();
	std::string* getPlayType();
	std::string* getArtist();
	int getSongIndex();							// This is the unique song id
	std::string* getSongFilePath();

	void setSongIndex(int i);

};



#endif // endif for MYSONGDATA_HEADER
