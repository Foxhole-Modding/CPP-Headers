#ifndef UE4SS_SDK_BPRainStormMajor_HPP
#define UE4SS_SDK_BPRainStormMajor_HPP

class ABPRainStormMajor_C : public AWeatherEffectsActor
{
    class UAudioComponent* Audio;
    class USphereComponent* EditorOnlySphere;
    class UParticleSystemComponent* ParticleSystem;
    class USceneComponent* DefaultSceneRoot;

};

#endif
