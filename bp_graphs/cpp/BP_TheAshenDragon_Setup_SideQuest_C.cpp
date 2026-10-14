// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheAshenDragon_Setup_SideQuest_C::OnBegin (40 bytes)
void BP_TheAshenDragon_Setup_SideQuest_C::OnBegin()
{
    ExecuteUbergraph_BP_TheAshenDragon_Setup_SideQuest();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_Setup_SideQuest_C::Spawned (40 bytes)
void BP_TheAshenDragon_Setup_SideQuest_C::Spawned()
{
    ExecuteUbergraph_BP_TheAshenDragon_Setup_SideQuest();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_Setup_SideQuest_C::ExecuteUbergraph_BP_TheAshenDragon_Setup_SideQuest (360 bytes)
void BP_TheAshenDragon_Setup_SideQuest_C::ExecuteUbergraph_BP_TheAshenDragon_Setup_SideQuest()
{
    this->SignalComplete();
    this->GetVariables(idx_227630);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(idx_227630);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    auto idx_227770 = UniqueObjectNameForCooking_AsActor;
    auto CallFunc_GetTransform_ReturnValue = idx_227770->this->GetTransform();
    UBlueprintStepBase::SpawnPhasedActorAsync(idx_227630, CallFunc_GetTransform_ReturnValue, idx_227770, UniqueObjectNameForCooking_OutputDelegate);
    return;
}
