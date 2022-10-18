#ifndef UE4SS_SDK_BPFireRocketLauncherDummyProjectile_HPP
#define UE4SS_SDK_BPFireRocketLauncherDummyProjectile_HPP

class ABPFireRocketLauncherDummyProjectile_C : public ARocketLauncherProjectileDummy
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* Audio;
    class UParticleSystemComponent* RocketMultiProjectile;
    class USkeletalMeshComponent* SkeletalMesh1;
    class USceneComponent* Scene;
    FBPFireRocketLauncherDummyProjectile_CNewEventDispatcher_0 NewEventDispatcher_0;
    void NewEventDispatcher_0();

    void BPBeginLaunch();
    void NewEventDispatcher_0_Event();
    void ReceiveDestroyed();
    void ExecuteUbergraph_BPFireRocketLauncherDummyProjectile(int32 EntryPoint);
    void NewEventDispatcher_0__DelegateSignature();
};

#endif
