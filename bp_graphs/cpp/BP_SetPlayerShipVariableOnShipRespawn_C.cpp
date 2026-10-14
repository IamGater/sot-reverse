// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_SetPlayerShipVariableOnShipRespawn_C::SetupShip (684 bytes)
void BP_SetPlayerShipVariableOnShipRespawn_C::SetupShip()
{
    TArray<AActor*> CallFunc_GetDamageableParts_ReturnValue = Ship->GetDamageableParts();
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetDamageableParts_ReturnValue);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_1C4;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    Mast* K2Node_DynamicCast_AsMast = Cast<Mast*>(CallFunc_Array_Get_Item);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsMast);
L_1C4:
    AShipInternalWater* idx_283131 = Ship->GetInternalWater();
    AHullDamage* idx_283161 = Ship->GetHullDamage();
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_SetPlayerShipVariableOnShipRespawn_C::OnBegin (40 bytes)
void BP_SetPlayerShipVariableOnShipRespawn_C::OnBegin()
{
    ExecuteUbergraph_BP_SetPlayerShipVariableOnShipRespawn();
    return;
}

// Recovered Kismet: BP_SetPlayerShipVariableOnShipRespawn_C::CustomEvent_0 (40 bytes)
void BP_SetPlayerShipVariableOnShipRespawn_C::CustomEvent_0()
{
    ExecuteUbergraph_BP_SetPlayerShipVariableOnShipRespawn();
    return;
}

// Recovered Kismet: BP_SetPlayerShipVariableOnShipRespawn_C::OnEnd (22 bytes)
void BP_SetPlayerShipVariableOnShipRespawn_C::OnEnd()
{
    ExecuteUbergraph_BP_SetPlayerShipVariableOnShipRespawn();
    return;
}

// Recovered Kismet: BP_SetPlayerShipVariableOnShipRespawn_C::ExecuteUbergraph_BP_SetPlayerShipVariableOnShipRespawn (577 bytes)
void BP_SetPlayerShipVariableOnShipRespawn_C::ExecuteUbergraph_BP_SetPlayerShipVariableOnShipRespawn()
{
    auto CallFunc_GetGameState_ReturnValue = this->GetGameState();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetGameState_ReturnValue);
    TArray<AShip*> CallFunc_GetCrewShips_ReturnValue = UBlueprintStepBase::GetCrewShips();
    bool CallFunc_Array_Contains_ReturnValue = UKismetArrayLibrary::Array_Contains(CallFunc_GetCrewShips_ReturnValue, K2Node_DynamicCast_AsShip);
    if (!CallFunc_Array_Contains_ReturnValue) goto L_23E;
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_GetGameState_ReturnValue2 = this->GetGameState();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue2 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetGameState_ReturnValue2);
    Ship* K2Node_DynamicCast_AsShip = Cast<Ship*>(K2Node_CustomEvent_Event);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsShip);
    if (!K2Node_DynamicCast_bSuccess) goto L_23E;
L_23E:
    return;
}
