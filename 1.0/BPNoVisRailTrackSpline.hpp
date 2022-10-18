#ifndef UE4SS_SDK_BPNoVisRailTrackSpline_HPP
#define UE4SS_SDK_BPNoVisRailTrackSpline_HPP

class ABPNoVisRailTrackSpline_C : public ABPRailTrackSpline_C
{
    class UArrowComponent* RailStartArrowVis1;
    class UArrowComponent* RailStartArrowVis;
    class UStaticMeshComponent* RailEndVis;
    class UStaticMeshComponent* RailStartVis;

};

#endif
