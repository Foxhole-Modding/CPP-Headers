#ifndef UE4SS_SDK_WaterExplosion_HPP
#define UE4SS_SDK_WaterExplosion_HPP

class AWaterExplosion_C : public AWarExplosionEffect
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_WaterExplosion(int32 EntryPoint);
};

#endif
