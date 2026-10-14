// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Prototype_LanternOfSouls_ItemInfo_C::fn_idx_285756 (30 bytes)
void BP_Prototype_LanternOfSouls_ItemInfo_C::fn_idx_285756()
{
    return;
}

// Recovered Kismet: BP_Prototype_LanternOfSouls_ItemInfo_C::fn_idx_285755 (30 bytes)
void BP_Prototype_LanternOfSouls_ItemInfo_C::fn_idx_285755()
{
    return;
}

// Recovered Kismet: BP_Prototype_LanternOfSouls_ItemInfo_C::fn_idx_285762 (246 bytes)
void BP_Prototype_LanternOfSouls_ItemInfo_C::fn_idx_285762()
{
    auto CallFunc_Add_FloatFloat_ReturnValue = idx_285753;
    auto CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
    if (!CallFunc_Greater_FloatFloat_ReturnValue) goto L_96;
    auto CallFunc_FlushNetDormancy_ReturnValue2 = this->FlushNetDormancy();
    auto idx_285753 = MaxCharge;
L_96:
    auto CallFunc_FlushNetDormancy_ReturnValue = this->FlushNetDormancy();
    CallFunc_Add_FloatFloat_ReturnValue = idx_285753;
    idx_285753 = CallFunc_Add_FloatFloat_ReturnValue;
    return;
}

// Recovered Kismet: BP_Prototype_LanternOfSouls_ItemInfo_C::UserConstructionScript (3 bytes)
void BP_Prototype_LanternOfSouls_ItemInfo_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_Prototype_LanternOfSouls_ItemInfo_C::fn_idx_285757 (40 bytes)
void BP_Prototype_LanternOfSouls_ItemInfo_C::fn_idx_285757()
{
    idx:285769();
    return;
}

// Recovered Kismet: BP_Prototype_LanternOfSouls_ItemInfo_C::ReceiveBeginPlay (22 bytes)
void BP_Prototype_LanternOfSouls_ItemInfo_C::ReceiveBeginPlay()
{
    idx:285769();
    return;
}

// Recovered Kismet: BP_Prototype_LanternOfSouls_ItemInfo_C::fn_idx_285771 (40 bytes)
void BP_Prototype_LanternOfSouls_ItemInfo_C::fn_idx_285771()
{
    idx:285769();
    return;
}

// Recovered Kismet: BP_Prototype_LanternOfSouls_ItemInfo_C::ReceiveEndPlay (40 bytes)
void BP_Prototype_LanternOfSouls_ItemInfo_C::ReceiveEndPlay()
{
    idx:285769();
    return;
}

// Recovered Kismet: BP_Prototype_LanternOfSouls_ItemInfo_C::fn_idx_285769 (1050 bytes)
void BP_Prototype_LanternOfSouls_ItemInfo_C::fn_idx_285769()
{
    auto CallFunc_FlushNetDormancy_ReturnValue = this->FlushNetDormancy();
    auto idx_285753 = idx_285770;
    idx_285753 = MaxCharge;
    auto CallFunc_FlushNetDormancy_ReturnValue2 = this->FlushNetDormancy();
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_9E;
L_9E:
    auto CallFunc_GetGameState_ReturnValue = GameplayStatics->this->GetGameState();
    TScriptInterface<UGameServiceProviderInterface> UniqueObjectNameForCooking_AsGame_Service_Provider_Interface = TScriptInterface<UGameServiceProviderInterface>(CallFunc_GetGameState_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsGame_Service_Provider_Interface);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_258;
    auto CallFunc_GetService_ReturnValue = UniqueObjectNameForCooking_AsGame_Service_Provider_Interface->GetService(AIManagerServiceInterface);
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetService_ReturnValue);
L_258:
    auto CallFunc_GetOwner_ReturnValue = this->this->GetOwner();
    auto CallFunc_EqualEqual_ObjectObject_ReturnValue = K2Node_CustomEvent_Event;
    if (!CallFunc_EqualEqual_ObjectObject_ReturnValue) goto L_417;
    idx:285762(idx_285767);
    auto CallFunc_GetGameState_ReturnValue2 = GameplayStatics->this->GetGameState();
    TScriptInterface<UGameServiceProviderInterface> idx_285772 = TScriptInterface<UGameServiceProviderInterface>(CallFunc_GetGameState_ReturnValue2);
    bool UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(idx_285772);
    if (!UniqueObjectNameForCooking_bSuccess2) goto L_407;
    auto CallFunc_GetService_ReturnValue2 = idx_285772->GetService(AIManagerServiceInterface);
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue2 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetService_ReturnValue2);
L_407:
L_417:
    return;
}
