// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PromptActor_MaidenVoyage_UseShipCannon_C::OnRep_DisplayPrompts (124 bytes)
void BP_PromptActor_MaidenVoyage_UseShipCannon_C::OnRep_DisplayPrompts()
{
    bool NewLocalVar = false;
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(idx_275893);
    if (!CallFunc_IsValid_ReturnValue) goto L_79;
L_79:
    return;
}

// Recovered Kismet: BP_PromptActor_MaidenVoyage_UseShipCannon_C::SetDisplayPrompts (56 bytes)
void BP_PromptActor_MaidenVoyage_UseShipCannon_C::SetDisplayPrompts()
{
    auto CallFunc_FlushNetDormancy_ReturnValue = this->FlushNetDormancy();
    auto DisplayPrompts = InDisplayPrompts;
    OnRep_DisplayPrompts();
    return;
}

// Recovered Kismet: BP_PromptActor_MaidenVoyage_UseShipCannon_C::UserConstructionScript (3 bytes)
void BP_PromptActor_MaidenVoyage_UseShipCannon_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_PromptActor_MaidenVoyage_UseShipCannon_C::ReceiveEndPlay (40 bytes)
void BP_PromptActor_MaidenVoyage_UseShipCannon_C::ReceiveEndPlay()
{
    ExecuteUbergraph_BP_PromptActor_MaidenVoyage_UseShipCannon();
    return;
}

// Recovered Kismet: BP_PromptActor_MaidenVoyage_UseShipCannon_C::ReceiveBeginPlay (22 bytes)
void BP_PromptActor_MaidenVoyage_UseShipCannon_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_PromptActor_MaidenVoyage_UseShipCannon();
    return;
}

// Recovered Kismet: BP_PromptActor_MaidenVoyage_UseShipCannon_C::ExecuteUbergraph_BP_PromptActor_MaidenVoyage_UseShipCannon (417 bytes)
void BP_PromptActor_MaidenVoyage_UseShipCannon_C::ExecuteUbergraph_BP_PromptActor_MaidenVoyage_UseShipCannon()
{
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_31;
L_31:
    UObject* CallFunc_CreateObject_ReturnValue = UObjectUtilities::CreateObject(idx_275888);
    idx_275888* idx_275892 = Cast<idx_275888*>(CallFunc_CreateObject_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_275892);
    if (!K2Node_DynamicCast_bSuccess) goto L_19E;
    auto idx_275893 = idx_275892;
    GetAthenaPlayerController(CallFunc_GetAthenaPlayerController_AthenaPlayerController);
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(idx_275893);
    if (!CallFunc_IsValid_ReturnValue) goto L_19E;
L_19E:
    return;
}
