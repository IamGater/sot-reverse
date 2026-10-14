// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheAshenDragon_Setup_SideQuest2_C::OnBegin (40 bytes)
void BP_TheAshenDragon_Setup_SideQuest2_C::OnBegin()
{
    ExecuteUbergraph_BP_TheAshenDragon_Setup_SideQuest2();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_Setup_SideQuest2_C::Spawned (40 bytes)
void BP_TheAshenDragon_Setup_SideQuest2_C::Spawned()
{
    ExecuteUbergraph_BP_TheAshenDragon_Setup_SideQuest2();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_Setup_SideQuest2_C::ExecuteUbergraph_BP_TheAshenDragon_Setup_SideQuest2 (360 bytes)
void BP_TheAshenDragon_Setup_SideQuest2_C::ExecuteUbergraph_BP_TheAshenDragon_Setup_SideQuest2()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    auto LocationActor = UniqueObjectNameForCooking_AsActor;
    auto CallFunc_GetTransform_ReturnValue = LocationActor->this->GetTransform();
    UBlueprintStepBase::SpawnPhasedActorAsync(CallFunc_GetVariables_OutStruct, CallFunc_GetTransform_ReturnValue, LocationActor, UniqueObjectNameForCooking_OutputDelegate);
    return;
}
