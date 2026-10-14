// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_SpawnItemOnCaptainsTable_FlameSkull_C::OnBeginCustom (472 bytes)
void BP_SpawnItemOnCaptainsTable_FlameSkull_C::OnBeginCustom()
{
    TArray<AShip*> idx_281448 = UBlueprintStepBase::GetCrewShips();
    FVector idx_281449 = CallFunc_Array_Get_Item->GetShipLocatorPositionChecked(idx_281452);
    auto CallFunc_Add_VectorVector_ReturnValue = idx_281449;
    auto CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
    AActor* idx_281450 = UBlueprintStepBase::SpawnPhasedItem(skull, CallFunc_Conv_VectorToTransform_ReturnValue, true, true);
    return;
}
