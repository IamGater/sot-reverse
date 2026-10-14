// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_SpawnMeg1OnShipTransform_C::OnBeginCustom (598 bytes)
void BP_SpawnMeg1OnShipTransform_C::OnBeginCustom()
{
    TArray<AShip*> CallFunc_GetCrewShips_ReturnValue = UBlueprintStepBase::GetCrewShips();
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetCrewShips_ReturnValue);
    auto CallFunc_Greater_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    if (!CallFunc_Greater_IntInt_ReturnValue) goto L_253;
    auto CallFunc_GetTransform_ReturnValue = CallFunc_Array_Get_Item->this->GetTransform();
    auto CallFunc_MakeRotator_ReturnValue = CallFunc_BreakRotator_Roll;
    auto CallFunc_MakeVector_ReturnValue = CallFunc_BreakVector_X;
    auto CallFunc_MakeTransform_ReturnValue = CallFunc_MakeVector_ReturnValue;
    auto idx_282892 = this->SpawnActor(idx_283235, CallFunc_MakeTransform_ReturnValue, true);
    this->SignalComplete();
L_253:
    return;
}

// Recovered Kismet: BP_SpawnMeg1OnShipTransform_C::OnBegin (40 bytes)
void BP_SpawnMeg1OnShipTransform_C::OnBegin()
{
    ExecuteUbergraph_BP_SpawnMeg1OnShipTransform();
    return;
}

// Recovered Kismet: BP_SpawnMeg1OnShipTransform_C::ExecuteUbergraph_BP_SpawnMeg1OnShipTransform (13 bytes)
void BP_SpawnMeg1OnShipTransform_C::ExecuteUbergraph_BP_SpawnMeg1OnShipTransform()
{
    return;
}
