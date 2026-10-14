// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_SetUpShipIntoTutorialState_C::SetupShip (684 bytes)
void BP_SetUpShipIntoTutorialState_C::SetupShip()
{
    TArray<AActor*> CallFunc_GetDamageableParts_ReturnValue = Ship->GetDamageableParts();
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetDamageableParts_ReturnValue);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_1C4;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    Mast* K2Node_DynamicCast_AsMast = Cast<Mast*>(CallFunc_Array_Get_Item);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsMast);
L_1C4:
    AShipInternalWater* idx_229159 = Ship->GetInternalWater();
    AHullDamage* idx_229158 = Ship->GetHullDamage();
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_SetUpShipIntoTutorialState_C::OnBegin (40 bytes)
void BP_SetUpShipIntoTutorialState_C::OnBegin()
{
    ExecuteUbergraph_BP_SetUpShipIntoTutorialState();
    return;
}

// Recovered Kismet: BP_SetUpShipIntoTutorialState_C::CustomEvent_0 (40 bytes)
void BP_SetUpShipIntoTutorialState_C::CustomEvent_0()
{
    ExecuteUbergraph_BP_SetUpShipIntoTutorialState();
    return;
}

// Recovered Kismet: BP_SetUpShipIntoTutorialState_C::OnEnd (22 bytes)
void BP_SetUpShipIntoTutorialState_C::OnEnd()
{
    ExecuteUbergraph_BP_SetUpShipIntoTutorialState();
    return;
}

// Recovered Kismet: BP_SetUpShipIntoTutorialState_C::ExecuteUbergraph_BP_SetUpShipIntoTutorialState (1307 bytes)
void BP_SetUpShipIntoTutorialState_C::ExecuteUbergraph_BP_SetUpShipIntoTutorialState()
{
L_A:
    auto CallFunc_GetGameState_ReturnValue = this->GetGameState();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetGameState_ReturnValue);
    TArray<AShip*> idx_229156 = UBlueprintStepBase::GetCrewShips();
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(idx_229156);
    auto CallFunc_Greater_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    if (!CallFunc_Greater_IntInt_ReturnValue) goto L_A;
    this->GetVariables(idx_227630);
    auto idx_227630 = idx_227630;
    UBlueprintStepBase::SetVariables(idx_227630);
    SetupShip(CallFunc_Array_Get_Item);
    this->SignalComplete();
    TArray<AShip*> idx_229157 = UBlueprintStepBase::GetCrewShips();
    bool CallFunc_Array_Contains_ReturnValue = UKismetArrayLibrary::Array_Contains(idx_229157, K2Node_DynamicCast_AsShip);
    if (!CallFunc_Array_Contains_ReturnValue) goto L_518;
    this->GetVariables(idx_227631);
    auto idx_227631 = idx_227631;
    UBlueprintStepBase::SetVariables(idx_227631);
    SetupShip(K2Node_DynamicCast_AsShip);
    auto CallFunc_GetGameState_ReturnValue2 = this->GetGameState();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue2 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetGameState_ReturnValue2);
    this->SignalComplete();
    Ship* K2Node_DynamicCast_AsShip = Cast<Ship*>(K2Node_CustomEvent_Event);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsShip);
    if (!K2Node_DynamicCast_bSuccess) goto L_518;
    bool CallFunc_IsHandleRegistered_ReturnValue = UObjectMessagingFunctions::IsHandleRegistered(idx_229163);
    if (!CallFunc_IsHandleRegistered_ReturnValue) goto L_518;
    auto CallFunc_GetGameState_ReturnValue3 = this->GetGameState();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue3 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetGameState_ReturnValue3);
L_518:
    return;
}
