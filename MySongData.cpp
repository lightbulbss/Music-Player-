#include "MySongData.hpp"

// constructor implementation
MySongData::MySongData(std::string fil)
{
    file_path = fil;

    // Seems like I can't declare a FileRef. Having Linker Issues. :(
    // TagLib::FileRef file_ref(fil.c_str());

    /*

	if (!file_ref.isNull() && file_ref.tag() && file_ref.audioProperties())
	{
		TagLib::Tag* tag = file_ref.tag();
		TagLib::AudioProperties* properties = file_ref.audioProperties();

		int seconds = properties->length() % 60;
		int minutes = (properties->length() - seconds) / 60;

		title = tag->title().toCString();
		duration = std::to_string(minutes) + ":" + std::to_string(seconds);
		type = "";
		artist = tag->artist().toCString();
    }
	else
        */
	{
		std::cout << "Failed to create MySongData and retrieve data based on file path\n";
		title = "";
		duration = "";
		type = "";
		artist = "";
		index = 0;
	}
}


// implementation of virtual functions
std::string* MySongData::getSongTitle() { return &title; }

std::string* MySongData::getDuration() { return &duration; }

std::string* MySongData::getPlayType() { return &type; }

std::string* MySongData::getArtist() { return &artist; }

int MySongData::getSongIndex() { return index;  }

std::string* MySongData::getSongFilePath() { return &file_path; }

// setters
void MySongData::setSongIndex(int i) { index = i; }
