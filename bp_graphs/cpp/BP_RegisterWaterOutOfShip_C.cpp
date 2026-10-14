// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_RegisterWaterOutOfShip_C::OnBegin (40 bytes)
void BP_RegisterWaterOutOfShip_C::OnBegin()
{
    ExecuteUbergraph_BP_RegisterWaterOutOfShip();
    return;
}

// Recovered Kismet: BP_RegisterWaterOutOfShip_C::OnPlayerScoopWater (40 bytes)
void BP_RegisterWaterOutOfShip_C::OnPlayerScoopWater()
{
    ExecuteUbergraph_BP_RegisterWaterOutOfShip();
    return;
}

// Recovered Kismet: BP_RegisterWaterOutOfShip_C::OnShipSunk (40 bytes)
void BP_RegisterWaterOutOfShip_C::OnShipSunk()
{
    ExecuteUbergraph_BP_RegisterWaterOutOfShip();
    return;
}

// Recovered Kismet: BP_RegisterWaterOutOfShip_C::OnEnd (22 bytes)
void BP_RegisterWaterOutOfShip_C::OnEnd()
{
    ExecuteUbergraph_BP_RegisterWaterOutOfShip();
    return;
}

// Recovered Kismet: BP_RegisterWaterOutOfShip_C::ExecuteUbergraph_BP_RegisterWaterOutOfShip (1284 bytes)
void BP_RegisterWaterOutOfShip_C::ExecuteUbergraph_BP_RegisterWaterOutOfShip()
{
    auto CallFunc_GetGameState_ReturnValue = this->GetGameState();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetGameState_ReturnValue);
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    if (!CallFunc_GetVariables_OutStruct) goto L_C9;
    this->SignalComplete();
L_C9:
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(CallFunc_GetVariables_OutStruct);
    if (!CallFunc_IsValid_ReturnValue) goto L_1BC;
    AShipInternalWater* idx_283131 = CallFunc_GetVariables_OutStruct->GetInternalWater();
    float idx_283132 = idx_283131->GetWaterAmount();
    auto CallFunc_NearlyEqual_FloatFloat_ReturnValue = idx_283132;
    if (!CallFunc_NearlyEqual_FloatFloat_ReturnValue) goto L_219;
    this->SignalComplete();
L_1BC:
L_219:
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue2 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetVariables_OutStruct);
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    if (!CallFunc_GetVariables_OutStruct2) goto L_2E6;
    this->SignalComplete();
L_2E6:
    auto CallFunc_GetGameState_ReturnValue2 = this->GetGameState();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue3 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetGameState_ReturnValue2);
    this->SignalComplete();
    auto CallFunc_NearlyEqual_FloatFloat_ReturnValue2 = K2Node_CustomEvent_Event2;
    if (!CallFunc_NearlyEqual_FloatFloat_ReturnValue2) goto L_501;
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct3);
    auto CallFunc_IsValid_ReturnValue2 = KismetSystemLibrary->this->IsValid(CallFunc_GetVariables_OutStruct3);
    if (!CallFunc_IsValid_ReturnValue2) goto L_501;
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue4 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetVariables_OutStruct3);
    bool CallFunc_IsHandleRegistered_ReturnValue = UObjectMessagingFunctions::IsHandleRegistered(Handle_ShipSunk);
    if (!CallFunc_IsHandleRegistered_ReturnValue) goto L_501;
L_501:
    return;
}
