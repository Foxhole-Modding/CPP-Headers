#ifndef UE4SS_SDK_MediaCompositing_HPP
#define UE4SS_SDK_MediaCompositing_HPP

class UMovieSceneMediaSection : public UMovieSceneSection
{
    class UMediaSource* MediaSource;
    bool bLooping;
    FFrameNumber StartFrameOffset;
    class UMediaTexture* MediaTexture;
    class UMediaSoundComponent* MediaSoundComponent;
    bool bUseExternalMediaPlayer;
    class UMediaPlayer* ExternalMediaPlayer;

};

class UMovieSceneMediaTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> MediaSections;

};

struct FMovieSceneMediaSectionParams
{
    class UMediaSoundComponent* MediaSoundComponent;
    class UMediaSource* MediaSource;
    class UMediaTexture* MediaTexture;
    class UMediaPlayer* MediaPlayer;
    FFrameNumber SectionStartFrame;
    FFrameNumber SectionEndFrame;
    bool bLooping;
    FFrameNumber StartFrameOffset;

};

struct FMovieSceneMediaSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneMediaSectionParams Params;

};

#endif
