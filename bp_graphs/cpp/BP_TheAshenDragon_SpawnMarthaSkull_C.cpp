// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheAshenDragon_SpawnMarthaSkull_C::OnBegin (40 bytes)
void BP_TheAshenDragon_SpawnMarthaSkull_C::OnBegin()
{
    ExecuteUbergraph_BP_TheAshenDragon_SpawnMarthaSkull();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_SpawnMarthaSkull_C::ExecuteUbergraph_BP_TheAshenDragon_SpawnMarthaSkull (426 bytes)
void BP_TheAshenDragon_SpawnMarthaSkull_C::ExecuteUbergraph_BP_TheAshenDragon_SpawnMarthaSkull()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    auto LocationActor = UniqueObjectNameForCooking_AsActor;
    auto CallFunc_GetTransform_ReturnValue = LocationActor->this->GetTransform();
    AActor* CallFunc_SpawnPhasedItem_ReturnValue = UBlueprintStepBase::SpawnPhasedItem(idx_281937, CallFunc_GetTransform_ReturnValue, true, true);
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    auto CallFunc_GetVariables_OutStruct2 = CallFunc_GetVariables_OutStruct2;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct2);
    this->SignalComplete();
    return;
}
