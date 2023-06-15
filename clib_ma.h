#ifdef __cplusplus
extern "C" {
#endif

#include "miniaudio.h"
#include <stdbool.h>


static ma_engine* engine;
void play_song(char* song_file);
void stop_song();
void* getEnginePtr();



#ifdef __cplusplus
}
#endif
