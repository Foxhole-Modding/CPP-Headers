#ifndef UE4SS_SDK_UdpMessaging_HPP
#define UE4SS_SDK_UdpMessaging_HPP

class UUdpMessagingSettings : public UObject
{
    bool EnableTransport;
    bool bAutoRepair;
    FString UnicastEndpoint;
    FString MulticastEndpoint;
    uint8 MulticastTimeToLive;
    TArray<FString> StaticEndpoints;
    bool EnableTunnel;
    FString TunnelUnicastEndpoint;
    FString TunnelMulticastEndpoint;
    TArray<FString> RemoteTunnelEndpoints;

};

struct FUdpMockMessage
{
    TArray<uint8> Data;

};

#endif
