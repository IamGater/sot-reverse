// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_AISmallShipTemplate_C::SetShipSkeleton (252 bytes)
void BP_AISmallShipTemplate_C::SetShipSkeleton()
{
    USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue = Hull->K2_GetRootComponent();
    ChildActorComponent* idx_277144 = Cast<ChildActorComponent*>(CallFunc_K2_GetRootComponent_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_277144);
    BP_AISmallShip_StandardHull_Art_C* idx_277276 = Cast<BP_AISmallShip_StandardHull_Art_C*>(idx_277144);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(idx_277276);
    if (!K2Node_DynamicCast_bSuccess2) goto L_F9;
    auto idx_277157 = idx_277276;
L_F9:
    return;
}

// Recovered Kismet: BP_AISmallShipTemplate_C::OnRep_SailData (137 bytes)
void BP_AISmallShipTemplate_C::OnRep_SailData()
{
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(idx_277157);
    if (!CallFunc_IsValid_ReturnValue) goto L_73;
L_73:
    SetShipSkeleton();
    return;
}

// Recovered Kismet: BP_AISmallShipTemplate_C::UserConstructionScript (3 bytes)
void BP_AISmallShipTemplate_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_AISmallShipTemplate_C::OnShipSurface_Client (22 bytes)
void BP_AISmallShipTemplate_C::OnShipSurface_Client()
{
    ExecuteUbergraph_BP_AISmallShipTemplate();
    return;
}

// Recovered Kismet: BP_AISmallShipTemplate_C::OnShipSurface (22 bytes)
void BP_AISmallShipTemplate_C::OnShipSurface()
{
    ExecuteUbergraph_BP_AISmallShipTemplate();
    return;
}

// Recovered Kismet: BP_AISmallShipTemplate_C::OnShipDive_Client (22 bytes)
void BP_AISmallShipTemplate_C::OnShipDive_Client()
{
    ExecuteUbergraph_BP_AISmallShipTemplate();
    return;
}

// Recovered Kismet: BP_AISmallShipTemplate_C::OnShipDive (22 bytes)
void BP_AISmallShipTemplate_C::OnShipDive()
{
    ExecuteUbergraph_BP_AISmallShipTemplate();
    return;
}

// Recovered Kismet: BP_AISmallShipTemplate_C::ReceiveBeginPlay (22 bytes)
void BP_AISmallShipTemplate_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_AISmallShipTemplate();
    return;
}

// Recovered Kismet: BP_AISmallShipTemplate_C::SetCursedCrewCustomisationProperties (40 bytes)
void BP_AISmallShipTemplate_C::SetCursedCrewCustomisationProperties()
{
    ExecuteUbergraph_BP_AISmallShipTemplate();
    return;
}

// Recovered Kismet: BP_AISmallShipTemplate_C::ExecuteUbergraph_BP_AISmallShipTemplate (369 bytes)
void BP_AISmallShipTemplate_C::ExecuteUbergraph_BP_AISmallShipTemplate()
{
    auto CallFunc_FlushNetDormancy_ReturnValue = this->FlushNetDormancy();
    auto SailData = idx_277145;
    OnRep_SailData();
    int CallFunc_WwiseEmitterComponentPostEvent_ReturnValue = UWwiseEmitterBlueprintLibrary::WwiseEmitterComponentPostEvent(idx_277130, idx_277277);
    OnShipSurface_Client();
    int CallFunc_WwiseEmitterComponentPostEvent_ReturnValue2 = UWwiseEmitterBlueprintLibrary::WwiseEmitterComponentPostEvent(idx_277130, idx_277278);
    OnShipDive_Client();
    SetShipSkeleton();
    return;
}
