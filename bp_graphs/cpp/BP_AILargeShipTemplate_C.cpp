// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_AILargeShipTemplate_C::SetShipSkeleton (238 bytes)
void BP_AILargeShipTemplate_C::SetShipSkeleton()
{
    USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue = Hull->K2_GetRootComponent();
    ChildActorComponent* K2Node_DynamicCast_AsChild_Actor_Component = Cast<ChildActorComponent*>(CallFunc_K2_GetRootComponent_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsChild_Actor_Component);
    BP_shp_skeleton_01_a_C* K2Node_DynamicCast_AsBP_Shp_Skeleton_01_A = Cast<BP_shp_skeleton_01_a_C*>(K2Node_DynamicCast_AsChild_Actor_Component);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsBP_Shp_Skeleton_01_A);
    auto ShipSkeleton = K2Node_DynamicCast_AsBP_Shp_Skeleton_01_A;
    return;
}

// Recovered Kismet: BP_AILargeShipTemplate_C::OnRep_SailData (137 bytes)
void BP_AILargeShipTemplate_C::OnRep_SailData()
{
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(ShipSkeleton);
    if (!CallFunc_IsValid_ReturnValue) goto L_73;
L_73:
    SetShipSkeleton();
    return;
}

// Recovered Kismet: BP_AILargeShipTemplate_C::UserConstructionScript (3 bytes)
void BP_AILargeShipTemplate_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_AILargeShipTemplate_C::UserConstructionScript (3 bytes)
void BP_AILargeShipTemplate_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_AILargeShipTemplate_C::OnShipSurface_Client (22 bytes)
void BP_AILargeShipTemplate_C::OnShipSurface_Client()
{
    ExecuteUbergraph_BP_AILargeShipTemplate();
    return;
}

// Recovered Kismet: BP_AILargeShipTemplate_C::OnShipSurface (22 bytes)
void BP_AILargeShipTemplate_C::OnShipSurface()
{
    ExecuteUbergraph_BP_AILargeShipTemplate();
    return;
}

// Recovered Kismet: BP_AILargeShipTemplate_C::OnShipDive_Client (22 bytes)
void BP_AILargeShipTemplate_C::OnShipDive_Client()
{
    ExecuteUbergraph_BP_AILargeShipTemplate();
    return;
}

// Recovered Kismet: BP_AILargeShipTemplate_C::OnShipDive (22 bytes)
void BP_AILargeShipTemplate_C::OnShipDive()
{
    ExecuteUbergraph_BP_AILargeShipTemplate();
    return;
}

// Recovered Kismet: BP_AILargeShipTemplate_C::ReceiveBeginPlay (22 bytes)
void BP_AILargeShipTemplate_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_AILargeShipTemplate();
    return;
}

// Recovered Kismet: BP_AILargeShipTemplate_C::SetCursedCrewCustomisationProperties (40 bytes)
void BP_AILargeShipTemplate_C::SetCursedCrewCustomisationProperties()
{
    ExecuteUbergraph_BP_AILargeShipTemplate();
    return;
}

// Recovered Kismet: BP_AILargeShipTemplate_C::ExecuteUbergraph_BP_AILargeShipTemplate (389 bytes)
void BP_AILargeShipTemplate_C::ExecuteUbergraph_BP_AILargeShipTemplate()
{
    SetShipSkeleton();
    OnRep_SailData();
    auto CallFunc_FlushNetDormancy_ReturnValue = this->FlushNetDormancy();
    auto SailData = K2Node_Event_SailData;
    int CallFunc_WwiseEmitterComponentPostEvent_ReturnValue = UWwiseEmitterBlueprintLibrary::WwiseEmitterComponentPostEvent(audio_skeletonship_emerge_submerge, Play_sfx_boat_skeletonship_emerge);
    OnShipSurface_Client();
    int CallFunc_WwiseEmitterComponentPostEvent_ReturnValue2 = UWwiseEmitterBlueprintLibrary::WwiseEmitterComponentPostEvent(audio_skeletonship_emerge_submerge, Play_sfx_boat_skeletonship_submerge);
    OnShipDive_Client();
    return;
}
