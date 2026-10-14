// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_WaitForGHBeat_C::OnBegin (40 bytes)
void BP_WaitForGHBeat_C::OnBegin()
{
    ExecuteUbergraph_BP_WaitForGHBeat();
    return;
}

// Recovered Kismet: BP_WaitForGHBeat_C::OnBattleBeaten (22 bytes)
void BP_WaitForGHBeat_C::OnBattleBeaten()
{
    ExecuteUbergraph_BP_WaitForGHBeat();
    return;
}

// Recovered Kismet: BP_WaitForGHBeat_C::ExecuteUbergraph_BP_WaitForGHBeat (236 bytes)
void BP_WaitForGHBeat_C::ExecuteUbergraph_BP_WaitForGHBeat()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct);
    TreasureRoom* UniqueObjectNameForCooking_AsTreasure_Room = Cast<TreasureRoom*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsTreasure_Room);
    return;
}
