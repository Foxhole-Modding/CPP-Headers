#ifndef UE4SS_SDK_BPFortAmmoRoomT3_HPP
#define UE4SS_SDK_BPFortAmmoRoomT3_HPP

class ABPFortAmmoRoomT3_C : public AAmmoRoom
{
    class UInstancedStaticMeshComponent* InstancedStaticMesh;
    class UItemGroupRenderComponent* ItemGroupRender;
    class UBoxComponent* BuildSiteWorkVolume;
    class UTemplateComponent* FortCommonT2T3ModsMinimal;
    class UTemplateComponent* FortCommonDefenseMods;
    class UBPFortUnderModSlot_C* UnderModSlot;
    class UBPFortWallModSlotMinimal_C* BackModSlot;
    class UBPFortWallModSlotMinimal_C* RightModSlot;
    class UBPFortWallModSlotMinimal_C* FrontModSlot;
    class UTemplateComponent* FortCommon;
    class UStaticMeshComponent* AmmoRoom;
    class UParticleSystemComponent* ParticleSystem;
    class UParticleSystemComponent* Light;
    class UStaticMeshComponent* DirtCornerFrontLeft;
    class UStaticMeshComponent* DirtCornerBackLeft;
    class UStaticMeshComponent* DirtCornerBackRight;
    class UStaticMeshComponent* DirtCornerFrontRight;
    class UStaticMeshComponent* DirtRight;
    class UStaticMeshComponent* DirtBack;
    class UStaticMeshComponent* DirtLeft;
    class UStaticMeshComponent* DirtFront;
    class UStaticMeshComponent* Roof;
    class UStaticMeshComponent* CornerFrontRight;
    class UStaticMeshComponent* CornerFrontLeft;
    class UStaticMeshComponent* CornerBackLeft;
    class UStaticMeshComponent* Floor;
    class UStaticMeshComponent* SideLeft;
    class UStaticMeshComponent* CornerBackRight;

    void UpdateAmmoInstanceMesh(int32 AmmoCount);
};

#endif
