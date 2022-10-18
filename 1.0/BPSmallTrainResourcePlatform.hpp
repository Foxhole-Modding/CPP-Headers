#ifndef UE4SS_SDK_BPSmallTrainResourcePlatform_HPP
#define UE4SS_SDK_BPSmallTrainResourcePlatform_HPP

class ABPSmallTrainResourcePlatform_C : public ARailVehicleResourcePlatform
{
    class UInstancedStaticMeshComponent* InstancedStaticMesh;
    class UItemGroupRenderComponent* ItemGroupRender;
    class UCameraComponent* Camera;
    class UVehicleSeatComponent* PassengerSeat0;
    class UVehicleExitComponent* DriverExit;
    class UVehicleTriggerComponent* DriverTrigger;

};

#endif
