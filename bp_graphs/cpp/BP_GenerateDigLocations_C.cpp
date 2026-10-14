// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_GenerateDigLocations_C::fn_idx_286033 (242 bytes)
void BP_GenerateDigLocations_C::fn_idx_286033()
{
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(Param);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    auto idx_286030 = idx_286030;
    idx_286030 = idx_286030;
    idx_286030 = idx_286030;
    UTaleQuestParallelForeachStep::ToContext(idx_286030);
    return;
}

// Recovered Kismet: BP_GenerateDigLocations_C::ForIndex (40 bytes)
void BP_GenerateDigLocations_C::ForIndex()
{
    idx:286028();
    return;
}

// Recovered Kismet: BP_GenerateDigLocations_C::fn_idx_286028 (133 bytes)
void BP_GenerateDigLocations_C::fn_idx_286028()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    idx:286033(CallFunc_Array_Get_Item);
    return;
}
