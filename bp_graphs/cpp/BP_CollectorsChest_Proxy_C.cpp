// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_CollectorsChest_Proxy_C::OnRep_HideWaterOcclusionVolume (78 bytes)
void BP_CollectorsChest_Proxy_C::OnRep_HideWaterOcclusionVolume()
{
    auto CallFunc_Not_PreBool_ReturnValue = HideWaterOcclusionVolume;
    return;
}

// Recovered Kismet: BP_CollectorsChest_Proxy_C::IsAttachedToShip (123 bytes)
void BP_CollectorsChest_Proxy_C::IsAttachedToShip()
{
    USceneComponent* CallFunc_GetAttachParent_ReturnValue = BaseComponent->GetAttachParent();
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(CallFunc_GetAttachParent_ReturnValue);
    return;
}

// Recovered Kismet: BP_CollectorsChest_Proxy_C::GetClosestInteractionPoint (165 bytes)
void BP_CollectorsChest_Proxy_C::GetClosestInteractionPoint()
{
    FVector CallFunc_GetBoxWorldOrigin_ReturnValue = Interactable->GetBoxWorldOrigin();
    float CallFunc_GetBoxSphereRadius_ReturnValue = Interactable->GetBoxSphereRadius();
    return;
}

// Recovered Kismet: BP_CollectorsChest_Proxy_C::UserConstructionScript (13 bytes)
void BP_CollectorsChest_Proxy_C::UserConstructionScript()
{
    this->UserConstructionScript();
    return;
}

// Recovered Kismet: BP_CollectorsChest_Proxy_C::ReceiveBeginPlay (22 bytes)
void BP_CollectorsChest_Proxy_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_CollectorsChest_Proxy();
    return;
}

// Recovered Kismet: BP_CollectorsChest_Proxy_C::ReceiveEndPlay (40 bytes)
void BP_CollectorsChest_Proxy_C::ReceiveEndPlay()
{
    ExecuteUbergraph_BP_CollectorsChest_Proxy();
    return;
}

// Recovered Kismet: BP_CollectorsChest_Proxy_C::ItemDropped (40 bytes)
void BP_CollectorsChest_Proxy_C::ItemDropped()
{
    ExecuteUbergraph_BP_CollectorsChest_Proxy();
    return;
}

// Recovered Kismet: BP_CollectorsChest_Proxy_C::ExecuteUbergraph_BP_CollectorsChest_Proxy (727 bytes)
void BP_CollectorsChest_Proxy_C::ExecuteUbergraph_BP_CollectorsChest_Proxy()
{
    OnRep_HideWaterOcclusionVolume();
    auto CallFunc_IsAttachedToShip_ReturnValue = IsAttachedToShip();
    auto HideWaterOcclusionVolume = CallFunc_IsAttachedToShip_ReturnValue;
    auto CallFunc_FlushNetDormancy_ReturnValue = this->FlushNetDormancy();
    TScriptInterface<UObjectMessagingDispatcherInterface> CallFunc_GetObjectMessagingDispatcher_ObjectMessagingDispatcher_CastInput = TScriptInterface<UObjectMessagingDispatcherInterface>(nullptr);
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcher_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcher(CallFunc_GetObjectMessagingDispatcher_ObjectMessagingDispatcher_CastInput);
    bool CallFunc_IsDedicatedServer_ReturnValue2 = UKismetSystemLibrary::IsDedicatedServer();
    if (!CallFunc_IsDedicatedServer_ReturnValue2) goto L_144;
L_144:
    FVector CallFunc_K2_GetActorLocation_ReturnValue2 = AActor::K2_GetActorLocation();
    TScriptInterface<UObjectMessagingDispatcherInterface> CallFunc_GetObjectMessagingDispatcher_ObjectMessagingDispatcher2_CastInput = TScriptInterface<UObjectMessagingDispatcherInterface>(nullptr);
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcher_ReturnValue2 = UObjectMessagingFunctions::GetObjectMessagingDispatcher(CallFunc_GetObjectMessagingDispatcher_ObjectMessagingDispatcher2_CastInput);
    bool CallFunc_IsDedicatedServer_ReturnValue = UKismetSystemLibrary::IsDedicatedServer();
    if (!CallFunc_IsDedicatedServer_ReturnValue) goto L_26D;
L_26D:
    FVector CallFunc_K2_GetActorLocation_ReturnValue = AActor::K2_GetActorLocation();
    return;
}
