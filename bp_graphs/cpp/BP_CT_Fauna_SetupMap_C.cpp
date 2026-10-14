// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_CT_Fauna_SetupMap_C::OnBeginCustom (58 bytes)
void BP_CT_Fauna_SetupMap_C::OnBeginCustom()
{
    ExecuteUbergraph_BP_CT_Fauna_SetupMap();
    return;
}

// Recovered Kismet: BP_CT_Fauna_SetupMap_C::ExecuteUbergraph_BP_CT_Fauna_SetupMap (1531 bytes)
void BP_CT_Fauna_SetupMap_C::ExecuteUbergraph_BP_CT_Fauna_SetupMap()
{
    TScriptInterface<Uidx_282477> idx_282496 = TScriptInterface<Uidx_282477>(Temp_object_Variable);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(idx_282496);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_4E1;
    UBlueprintStepBase::GetParticipants(idx_281947);
    ULevelStreaming* UniqueObjectNameForCooking_AsLevel_Streaming2 = Cast<ULevelStreaming*>(idx_282473);
    bool UniqueObjectNameForCooking_bSuccess4 = static_cast<bool>(UniqueObjectNameForCooking_AsLevel_Streaming2);
    if (!UniqueObjectNameForCooking_bSuccess4) goto L_505;
    ALevelScriptActor* CallFunc_GetLevelScriptActor_ReturnValue2 = UniqueObjectNameForCooking_AsLevel_Streaming2->GetLevelScriptActor();
    auto Temp_object_Variable2 = CallFunc_GetLevelScriptActor_ReturnValue2;
    TScriptInterface<Uidx_282477> idx_282497 = TScriptInterface<Uidx_282477>(Temp_object_Variable2);
    bool UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(idx_282497);
    if (!UniqueObjectNameForCooking_bSuccess2) goto L_51D;
    UBlueprintStepBase::GetParticipants(idx_281947);
    auto CallFunc_GetGameState_ReturnValue = this->GetGameState();
    AthenaGameState* idx_282490 = Cast<AthenaGameState*>(CallFunc_GetGameState_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_282490);
    if (!K2Node_DynamicCast_bSuccess) goto L_5F8;
    TScriptInterface<UGameServiceProviderInterface> idx_282472 = TScriptInterface<UGameServiceProviderInterface>(idx_282490);
    FText idx_282471 = UMerchantContractsBlueprintLibrary::GetDateFromTimeLimit(idx_282472);
    auto idx_282492 = idx_282492;
    idx_282492 = idx_282492;
    auto idx_282491 = idx_282491;
    idx_282491 = idx_282491;
    idx_282491 = idx_282491;
    idx_282491 = idx_282491;
    idx_282491 = idx_282491;
    idx_282491 = idx_282491;
    idx_282491 = idx_282491;
    idx_282491 = idx_282491;
    UBlueprintStepBase::SetVariables(idx_282491);
    this->SignalComplete();
L_4E1:
L_505:
    Temp_object_Variable2 = idx_282473;
L_51D:
    auto idx_282473 = this->GetDefinition();
    ULevelStreaming* UniqueObjectNameForCooking_AsLevel_Streaming = Cast<ULevelStreaming*>(idx_282473);
    bool UniqueObjectNameForCooking_bSuccess3 = static_cast<bool>(UniqueObjectNameForCooking_AsLevel_Streaming);
    if (!UniqueObjectNameForCooking_bSuccess3) goto L_5E0;
    ALevelScriptActor* CallFunc_GetLevelScriptActor_ReturnValue = UniqueObjectNameForCooking_AsLevel_Streaming->GetLevelScriptActor();
    auto Temp_object_Variable = CallFunc_GetLevelScriptActor_ReturnValue;
L_5E0:
    Temp_object_Variable = idx_282473;
L_5F8:
    return;
}
