#include "clib_ma.h"

#define MINIAUDIO_IMPLEMENTATION
#include "miniaudio.h"
#include <stdio.h>



void play_song(char* song_file)
{

    ma_result result;
    char* song_name = strrchr(song_file, '\\');
    if (song_name == NULL) {
        song_name = song_file;
    }
    else {
        song_name++;
    }
    printf("Playing Song: %s\n", song_name);

    result = ma_engine_init(NULL, &engine);

    if (result != MA_SUCCESS)
        printf("Failed to initialize audio engine.\n");

    result = ma_engine_play_sound(&engine, song_file, NULL);

    if (result != MA_SUCCESS)
        printf("Failed to play sound.\n");

}

void stop_song()
{
    ma_engine_stop(&engine);
    ma_engine_uninit(&engine);

}


void* getEnginePtr()
{
    return engine;
}
