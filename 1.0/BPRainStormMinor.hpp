#ifndef UE4SS_SDK_BPRainStormMinor_HPP
#define UE4SS_SDK_BPRainStormMinor_HPP

class ABPRainStormMinor_C : public AWeatherEffectsActor
{
    class UAudioComponent* Audio;
    class USphereComponent* EditorOnlySphere;
    class UParticleSystemComponent* ParticleSystem;
    class USceneComponent* DefaultSceneRoot;

};

#endif
