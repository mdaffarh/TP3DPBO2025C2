#include <bits/stdc++.h>

using namespace std;

// kelas voice recording
class VoiceRecording
{
private:
    // atribut-atribut private
    string speaker;
    int duration;

public:
    // konstruktor kosong
    VoiceRecording()
    {
    }

    // konstruktor dengan parameter untuk mengisi atribut
    VoiceRecording(string speaker, int duration)
    {
        this->speaker = speaker;
        this->duration = duration;
    }

    // setter speaker
    void setSpeaker(string speaker)
    {
        this->speaker = speaker;
    }

    // getter speaker
    string getSpeaker()
    {
        return speaker;
    }

    // setter duration
    void setDuration(int duration)
    {
        this->duration = duration;
    }

    // getter duration
    int getDuration()
    {
        return duration;
    }

    ~VoiceRecording()
    {
    }
};