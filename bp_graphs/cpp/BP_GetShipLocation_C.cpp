// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_GetShipLocation_C::OnBeginCustom (163 bytes)
void BP_GetShipLocation_C::OnBeginCustom()
{
    TArray<AShip*> CallFunc_GetCrewShips_ReturnValue = UBlueprintStepBase::GetCrewShips();
    FVector CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_Array_Get_Item->K2_GetActorLocation();
    return;
}
