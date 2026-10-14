// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_WaitForGHFight_C::OnBegin (40 bytes)
void BP_WaitForGHFight_C::OnBegin()
{
    ExecuteUbergraph_BP_WaitForGHFight();
    return;
}

// Recovered Kismet: BP_WaitForGHFight_C::OnBattleStarted (40 bytes)
void BP_WaitForGHFight_C::OnBattleStarted()
{
    ExecuteUbergraph_BP_WaitForGHFight();
    return;
}

// Recovered Kismet: BP_WaitForGHFight_C::ExecuteUbergraph_BP_WaitForGHFight (671 bytes)
void BP_WaitForGHFight_C::ExecuteUbergraph_BP_WaitForGHFight()
{
    this->SignalComplete();
    UBlueprintStepBase::GetParticipants(CallFunc_GetParticipants_Participants);
    bool CallFunc_Array_Contains_ReturnValue = UKismetArrayLibrary::Array_Contains(CallFunc_GetParticipants_Participants, CallFunc_Array_Get_Item);
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(idx_285129);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct);
    TreasureRoom* UniqueObjectNameForCooking_AsTreasure_Room = Cast<TreasureRoom*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsTreasure_Room);
    return;
}
