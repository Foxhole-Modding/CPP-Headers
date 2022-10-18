#ifndef UE4SS_SDK_BPRainStormModerate_HPP
#define UE4SS_SDK_BPRainStormModerate_HPP

class ABPRainStormModerate_C : public AWeatherEffectsActor
{
    class UAudioComponent* Audio;
    class USphereComponent* EditorOnlySphere;
    class UParticleSystemComponent* ParticleSystem;
    class USceneComponent* DefaultSceneRoot;

};

#endif
