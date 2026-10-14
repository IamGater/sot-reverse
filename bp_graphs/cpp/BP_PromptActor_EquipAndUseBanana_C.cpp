// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PromptActor_EquipAndUseBanana_C::UpdatePromptVisibility (118 bytes)
void BP_PromptActor_EquipAndUseBanana_C::UpdatePromptVisibility()
{
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(BananaPrompt);
    if (!CallFunc_IsValid_ReturnValue) goto L_73;
L_73:
    return;
}

// Recovered Kismet: BP_PromptActor_EquipAndUseBanana_C::OnRep_DisplayPrompts (17 bytes)
void BP_PromptActor_EquipAndUseBanana_C::OnRep_DisplayPrompts()
{
    UpdatePromptVisibility();
    return;
}

// Recovered Kismet: BP_PromptActor_EquipAndUseBanana_C::SetDisplayPrompts (56 bytes)
void BP_PromptActor_EquipAndUseBanana_C::SetDisplayPrompts()
{
    auto CallFunc_FlushNetDormancy_ReturnValue = this->FlushNetDormancy();
    auto DisplayPrompts = InDisplayPrompts;
    OnRep_DisplayPrompts();
    return;
}

// Recovered Kismet: BP_PromptActor_EquipAndUseBanana_C::UserConstructionScript (13 bytes)
void BP_PromptActor_EquipAndUseBanana_C::UserConstructionScript()
{
    this->UserConstructionScript();
    return;
}

// Recovered Kismet: BP_PromptActor_EquipAndUseBanana_C::ReceiveBeginPlay (22 bytes)
void BP_PromptActor_EquipAndUseBanana_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_PromptActor_EquipAndUseBanana();
    return;
}

// Recovered Kismet: BP_PromptActor_EquipAndUseBanana_C::ReceiveEndPlay (40 bytes)
void BP_PromptActor_EquipAndUseBanana_C::ReceiveEndPlay()
{
    ExecuteUbergraph_BP_PromptActor_EquipAndUseBanana();
    return;
}

// Recovered Kismet: BP_PromptActor_EquipAndUseBanana_C::OnBananaUsed (40 bytes)
void BP_PromptActor_EquipAndUseBanana_C::OnBananaUsed()
{
    ExecuteUbergraph_BP_PromptActor_EquipAndUseBanana();
    return;
}

// Recovered Kismet: BP_PromptActor_EquipAndUseBanana_C::ExecuteUbergraph_BP_PromptActor_EquipAndUseBanana (891 bytes)
void BP_PromptActor_EquipAndUseBanana_C::ExecuteUbergraph_BP_PromptActor_EquipAndUseBanana()
{
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_B5;
    GetAthenaPlayerController(CallFunc_GetAthenaPlayerController_AthenaPlayerController3);
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue2 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetAthenaPlayerController_AthenaPlayerController3);
L_B5:
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(BananaPrompt);
    if (!CallFunc_IsValid_ReturnValue) goto L_378;
    this->ReceiveBeginPlay();
    bool CallFunc_HasAuthority_ReturnValue2 = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue2) goto L_1E8;
    GetAthenaPlayerController(CallFunc_GetAthenaPlayerController_AthenaPlayerController2);
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetAthenaPlayerController_AthenaPlayerController2);
L_1E8:
    UObject* CallFunc_CreateObject_ReturnValue = UObjectUtilities::CreateObject(BP_Prompt_EquipAndUseBanana_C);
    BP_Prompt_EquipAndUseBanana_C* K2Node_DynamicCast_AsBP_Prompt_Equip_and_Use_Banana = Cast<BP_Prompt_EquipAndUseBanana_C*>(CallFunc_CreateObject_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsBP_Prompt_Equip_and_Use_Banana);
    if (!K2Node_DynamicCast_bSuccess) goto L_378;
    K2Node_DynamicCast_AsBP_Prompt_Equip_and_Use_Banana = K2Node_DynamicCast_AsBP_Prompt_Equip_and_Use_Banana;
    auto BananaPrompt = K2Node_DynamicCast_AsBP_Prompt_Equip_and_Use_Banana;
    GetAthenaPlayerController(CallFunc_GetAthenaPlayerController_AthenaPlayerController);
    auto CallFunc_Greater_FloatFloat_ReturnValue = K2Node_CustomEvent_Event;
    if (!CallFunc_Greater_FloatFloat_ReturnValue) goto L_378;
L_378:
    return;
}

// Recovered Kismet: BP_PromptActor_EquipAndUseBanana_C::UserConstructionScript (3 bytes)
void BP_PromptActor_EquipAndUseBanana_C::UserConstructionScript()
{
    return;
}
