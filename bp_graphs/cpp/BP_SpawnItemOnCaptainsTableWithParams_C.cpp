// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_SpawnItemOnCaptainsTableWithParams_C::OnBeginCustom (424 bytes)
void BP_SpawnItemOnCaptainsTableWithParams_C::OnBeginCustom()
{
    TArray<AShip*> CallFunc_GetCrewShips_ReturnValue = UBlueprintStepBase::GetCrewShips();
    FVector CallFunc_GetShipLocatorPositionChecked_ReturnValue = CallFunc_Array_Get_Item->GetShipLocatorPositionChecked(idx_282637);
    auto CallFunc_Add_VectorVector_ReturnValue = CallFunc_GetShipLocatorPositionChecked_ReturnValue;
    auto CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
    AActor* CallFunc_SpawnPhasedItem_ReturnValue = UBlueprintStepBase::SpawnPhasedItem(SpawnItem, CallFunc_Conv_VectorToTransform_ReturnValue, Tracked, Critical, idx_282636);
    return;
}
