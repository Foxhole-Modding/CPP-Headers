#ifndef UE4SS_SDK_BPSnowStormModerate_HPP
#define UE4SS_SDK_BPSnowStormModerate_HPP

class ABPSnowStormModerate_C : public AWeatherEffectsActor
{
    class UAudioComponent* Audio;
    class USphereComponent* EditorOnlySphere;
    class UParticleSystemComponent* ParticleSystem;
    class USceneComponent* DefaultSceneRoot;

};

#endif
