// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_SetSkellyShipAttackTarget_C::SetSkellyShipAttackTarget (193 bytes)
void BP_SetSkellyShipAttackTarget_C::SetSkellyShipAttackTarget()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    BP_MaidenVoyage_SkellyShip_C* idx_283177 = Cast<BP_MaidenVoyage_SkellyShip_C*>(CallFunc_GetVariables_OutStruct);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_283177);
    if (!K2Node_DynamicCast_bSuccess) goto L_BE;
    auto CallFunc_FlushNetDormancy_ReturnValue = idx_283177->this->FlushNetDormancy();
    idx_283177 = idx_283177;
L_BE:
    return;
}

// Recovered Kismet: BP_SetSkellyShipAttackTarget_C::OnBegin (40 bytes)
void BP_SetSkellyShipAttackTarget_C::OnBegin()
{
    ExecuteUbergraph_BP_SetSkellyShipAttackTarget();
    return;
}

// Recovered Kismet: BP_SetSkellyShipAttackTarget_C::CustomEvent_0 (40 bytes)
void BP_SetSkellyShipAttackTarget_C::CustomEvent_0()
{
    ExecuteUbergraph_BP_SetSkellyShipAttackTarget();
    return;
}

// Recovered Kismet: BP_SetSkellyShipAttackTarget_C::ExecuteUbergraph_BP_SetSkellyShipAttackTarget (916 bytes)
void BP_SetSkellyShipAttackTarget_C::ExecuteUbergraph_BP_SetSkellyShipAttackTarget()
{
    TArray<AShip*> CallFunc_GetCrewShips_ReturnValue = UBlueprintStepBase::GetCrewShips();
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetCrewShips_ReturnValue);
    auto CallFunc_Greater_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    if (!CallFunc_Greater_IntInt_ReturnValue) goto L_EE;
    SetSkellyShipAttackTarget(CallFunc_Array_Get_Item);
    this->SignalComplete();
L_EE:
    auto CallFunc_GetGameState_ReturnValue = this->GetGameState();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetGameState_ReturnValue);
    TArray<AShip*> idx_282789 = UBlueprintStepBase::GetCrewShips();
    bool CallFunc_Array_Contains_ReturnValue = UKismetArrayLibrary::Array_Contains(idx_282789, K2Node_DynamicCast_AsShip);
    if (!CallFunc_Array_Contains_ReturnValue) goto L_391;
    SetSkellyShipAttackTarget(K2Node_DynamicCast_AsShip);
    auto CallFunc_GetGameState_ReturnValue2 = this->GetGameState();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue2 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetGameState_ReturnValue2);
    this->SignalComplete();
    Ship* K2Node_DynamicCast_AsShip = Cast<Ship*>(K2Node_CustomEvent_Event);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsShip);
    if (!K2Node_DynamicCast_bSuccess) goto L_391;
L_391:
    return;
}
