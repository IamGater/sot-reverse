// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_MaidenVoyage_Automation_WaterOutOfShip_C::OnBegin (40 bytes)
void BP_MaidenVoyage_Automation_WaterOutOfShip_C::OnBegin()
{
    idx:286116();
    return;
}

// Recovered Kismet: BP_MaidenVoyage_Automation_WaterOutOfShip_C::fn_idx_286116 (302 bytes)
void BP_MaidenVoyage_Automation_WaterOutOfShip_C::fn_idx_286116()
{
    TArray<AShip*> CallFunc_GetCrewShips_ReturnValue = UBlueprintStepBase::GetCrewShips();
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetCrewShips_ReturnValue);
    auto CallFunc_Greater_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    if (!CallFunc_Greater_IntInt_ReturnValue) goto L_12B;
    AShipInternalWater* CallFunc_GetInternalWater_ReturnValue = CallFunc_Array_Get_Item->GetInternalWater();
    this->SignalComplete();
L_12B:
    return;
}
