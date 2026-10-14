// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_SpawnItemOnCaptainsTable_Chalice_C::OnBeginCustom (482 bytes)
void BP_SpawnItemOnCaptainsTable_Chalice_C::OnBeginCustom()
{
    TArray<AShip*> CallFunc_GetCrewShips_ReturnValue = UBlueprintStepBase::GetCrewShips();
    FVector CallFunc_GetShipLocatorPositionChecked_ReturnValue = CallFunc_Array_Get_Item->GetShipLocatorPositionChecked(ShipLocation);
    auto CallFunc_Add_VectorVector_ReturnValue = CallFunc_GetShipLocatorPositionChecked_ReturnValue;
    auto CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
    AActor* CallFunc_SpawnPhasedItem_ReturnValue = UBlueprintStepBase::SpawnPhasedItem(idx_285029, CallFunc_Conv_VectorToTransform_ReturnValue, true, true);
    return;
}
