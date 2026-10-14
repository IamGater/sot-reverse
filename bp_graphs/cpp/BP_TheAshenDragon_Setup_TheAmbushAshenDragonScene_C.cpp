// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheAshenDragon_Setup_TheAmbushAshenDragonScene_C::OnBegin (40 bytes)
void BP_TheAshenDragon_Setup_TheAmbushAshenDragonScene_C::OnBegin()
{
    ExecuteUbergraph_BP_TheAshenDragon_Setup_TheAmbushAshenDragonScene();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_Setup_TheAmbushAshenDragonScene_C::Spawned (40 bytes)
void BP_TheAshenDragon_Setup_TheAmbushAshenDragonScene_C::Spawned()
{
    ExecuteUbergraph_BP_TheAshenDragon_Setup_TheAmbushAshenDragonScene();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_Setup_TheAmbushAshenDragonScene_C::ExecuteUbergraph_BP_TheAshenDragon_Setup_TheAmbushAshenDragonScene (510 bytes)
void BP_TheAshenDragon_Setup_TheAmbushAshenDragonScene_C::ExecuteUbergraph_BP_TheAshenDragon_Setup_TheAmbushAshenDragonScene()
{
    this->GetVariables(idx_281863);
    auto idx_281863 = idx_281863;
    UBlueprintStepBase::SetVariables(idx_281863);
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    auto CallFunc_GetVariables_OutStruct2 = CallFunc_GetVariables_OutStruct2;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct2);
    this->GetVariables(idx_281862);
    auto CallFunc_GetTransform_ReturnValue = idx_281862->this->GetTransform();
    UBlueprintStepBase::SpawnPhasedActorAsync(CallFunc_GetVariables_OutStruct, CallFunc_GetTransform_ReturnValue, idx_281862, UniqueObjectNameForCooking_OutputDelegate);
    return;
}
