#pragma once
#include <string>

class ISongData {


public:
	// Those functions that are not required for 4-25 will be commented out

	virtual std::string* getSongTitle() = 0;

	virtual std::string* getDuration() = 0;

	virtual std::string* getPlayType() = 0;

	virtual std::string* getArtist() = 0;

	virtual int getSongIndex() = 0; // This is the unique song id

	virtual std::string* getSongFilePath() = 0;

};