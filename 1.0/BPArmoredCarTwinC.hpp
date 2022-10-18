#ifndef UE4SS_SDK_BPArmoredCarTwinC_HPP
#define UE4SS_SDK_BPArmoredCarTwinC_HPP

class ABPArmoredCarTwinC_C : public ABPArmoredCarBaseC_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPayloadStaticMeshComponent* PayloadStaticMesh1;
    class UPayloadStaticMeshComponent* PayloadStaticMesh0;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPArmoredCarTwinC(int32 EntryPoint);
};

#endif
