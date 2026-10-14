// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_HoldOntoTreasureRoom_C::FailTaleOnTimeout (111 bytes)
void BP_HoldOntoTreasureRoom_C::FailTaleOnTimeout()
{
    FText CallFunc_Conv_StringToText_ReturnValue = UKismetTextLibrary::Conv_StringToText();
    UBlueprintStepBase::FailTale(CallFunc_Conv_StringToText_ReturnValue);
    return;
}

// Recovered Kismet: BP_HoldOntoTreasureRoom_C::GetTreasureRoom (166 bytes)
void BP_HoldOntoTreasureRoom_C::GetTreasureRoom()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct);
    TreasureRoom* idx_285057 = Cast<TreasureRoom*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(idx_285057);
    return;
}

// Recovered Kismet: BP_HoldOntoTreasureRoom_C::OnBegin (40 bytes)
void BP_HoldOntoTreasureRoom_C::OnBegin()
{
    ExecuteUbergraph_BP_HoldOntoTreasureRoom();
    return;
}

// Recovered Kismet: BP_HoldOntoTreasureRoom_C::OnEnd (22 bytes)
void BP_HoldOntoTreasureRoom_C::OnEnd()
{
    ExecuteUbergraph_BP_HoldOntoTreasureRoom();
    return;
}

// Recovered Kismet: BP_HoldOntoTreasureRoom_C::FailTreasureRoomEvent (22 bytes)
void BP_HoldOntoTreasureRoom_C::FailTreasureRoomEvent()
{
    ExecuteUbergraph_BP_HoldOntoTreasureRoom();
    return;
}

// Recovered Kismet: BP_HoldOntoTreasureRoom_C::ExecuteUbergraph_BP_HoldOntoTreasureRoom (285 bytes)
void BP_HoldOntoTreasureRoom_C::ExecuteUbergraph_BP_HoldOntoTreasureRoom()
{
    FailTaleOnTimeout();
    GetTreasureRoom(idx_285047);
    GetTreasureRoom(idx_285048);
    return;
}
