// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_CheckGoldInHoldEntitlement2_C::OnBegin (40 bytes)
void BP_CheckGoldInHoldEntitlement2_C::OnBegin()
{
    ExecuteUbergraph_BP_CheckGoldInHoldEntitlement2();
    return;
}

// Recovered Kismet: BP_CheckGoldInHoldEntitlement2_C::ExecuteUbergraph_BP_CheckGoldInHoldEntitlement2 (532 bytes)
void BP_CheckGoldInHoldEntitlement2_C::ExecuteUbergraph_BP_CheckGoldInHoldEntitlement2()
{
L_A:
    this->SignalComplete();
    UBlueprintStepBase::GetParticipants(CallFunc_GetParticipants_Participants);
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character = Cast<AthenaPlayerCharacter*>(CallFunc_Array_Get_Item);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character);
    if (!K2Node_DynamicCast_bSuccess) goto L_211;
    AController* CallFunc_GetController_ReturnValue = K2Node_DynamicCast_AsAthena_Player_Character->GetController();
    AthenaPlayerController* K2Node_DynamicCast_AsAthena_Player_Controller = Cast<AthenaPlayerController*>(CallFunc_GetController_ReturnValue);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Controller);
    if (!K2Node_DynamicCast_bSuccess2) goto L_211;
    TScriptInterface<UPlayerEntitlementViewInterface> idx_282795 = TScriptInterface<UPlayerEntitlementViewInterface>(K2Node_DynamicCast_AsAthena_Player_Controller);
    TArray<UClass*> idx_282796 = UPlayerEntitlementBlueprintFunctionLibrary::GetEntitlements(idx_282795, TaleRankDesc);
    bool CallFunc_Array_Contains_ReturnValue = UKismetArrayLibrary::Array_Contains(idx_282796, idx_282799);
    if (!CallFunc_Array_Contains_ReturnValue) goto L_A;
L_211:
    return;
}
