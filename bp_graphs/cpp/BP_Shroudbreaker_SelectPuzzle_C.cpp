// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Shroudbreaker_SelectPuzzle_C::OnBegin (40 bytes)
void BP_Shroudbreaker_SelectPuzzle_C::OnBegin()
{
    ExecuteUbergraph_BP_Shroudbreaker_SelectPuzzle();
    return;
}

// Recovered Kismet: BP_Shroudbreaker_SelectPuzzle_C::ExecuteUbergraph_BP_Shroudbreaker_SelectPuzzle (346 bytes)
void BP_Shroudbreaker_SelectPuzzle_C::ExecuteUbergraph_BP_Shroudbreaker_SelectPuzzle()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetVariables_OutStruct2);
    auto CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    auto CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
    auto CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct);
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    return;
}
