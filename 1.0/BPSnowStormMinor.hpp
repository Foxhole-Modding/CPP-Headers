#ifndef UE4SS_SDK_BPSnowStormMinor_HPP
#define UE4SS_SDK_BPSnowStormMinor_HPP

class ABPSnowStormMinor_C : public AWeatherEffectsActor
{
    class UAudioComponent* Audio;
    class USphereComponent* EditorOnlySphere;
    class UParticleSystemComponent* ParticleSystem;
    class USceneComponent* DefaultSceneRoot;

};

#endif
