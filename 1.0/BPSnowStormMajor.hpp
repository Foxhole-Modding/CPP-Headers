#ifndef UE4SS_SDK_BPSnowStormMajor_HPP
#define UE4SS_SDK_BPSnowStormMajor_HPP

class ABPSnowStormMajor_C : public AWeatherEffectsActor
{
    class UAudioComponent* Audio;
    class USphereComponent* EditorOnlySphere;
    class UParticleSystemComponent* ParticleSystem;
    class USceneComponent* DefaultSceneRoot;

};

#endif
