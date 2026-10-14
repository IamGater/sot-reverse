// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_ActivateReturnToShipVolume_C::ActivateReturnToShipVolume (45 bytes)
void BP_ActivateReturnToShipVolume_C::ActivateReturnToShipVolume()
{
    USphereComponent* idx_282788 = Ship->AddAndConfigureReturnToShipBoundingSphere();
    return;
}

// Recovered Kismet: BP_ActivateReturnToShipVolume_C::OnBegin (40 bytes)
void BP_ActivateReturnToShipVolume_C::OnBegin()
{
    ExecuteUbergraph_BP_ActivateReturnToShipVolume();
    return;
}

// Recovered Kismet: BP_ActivateReturnToShipVolume_C::CustomEvent_0 (40 bytes)
void BP_ActivateReturnToShipVolume_C::CustomEvent_0()
{
    ExecuteUbergraph_BP_ActivateReturnToShipVolume();
    return;
}

// Recovered Kismet: BP_ActivateReturnToShipVolume_C::ExecuteUbergraph_BP_ActivateReturnToShipVolume (767 bytes)
void BP_ActivateReturnToShipVolume_C::ExecuteUbergraph_BP_ActivateReturnToShipVolume()
{
    TArray<AShip*> idx_282789 = UBlueprintStepBase::GetCrewShips();
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(idx_282789);
    auto CallFunc_Greater_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    if (!CallFunc_Greater_IntInt_ReturnValue) goto L_E4;
    ActivateReturnToShipVolume(CallFunc_Array_Get_Item);
L_E4:
    auto CallFunc_GetGameState_ReturnValue = this->GetGameState();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetGameState_ReturnValue);
    TArray<AShip*> CallFunc_GetCrewShips_ReturnValue = UBlueprintStepBase::GetCrewShips();
    bool CallFunc_Array_Contains_ReturnValue = UKismetArrayLibrary::Array_Contains(CallFunc_GetCrewShips_ReturnValue, K2Node_DynamicCast_AsShip);
    if (!CallFunc_Array_Contains_ReturnValue) goto L_2FC;
    ActivateReturnToShipVolume(K2Node_DynamicCast_AsShip);
    Ship* K2Node_DynamicCast_AsShip = Cast<Ship*>(K2Node_CustomEvent_Event);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsShip);
    if (!K2Node_DynamicCast_bSuccess) goto L_2FC;
L_2FC:
    return;
}
