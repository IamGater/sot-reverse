// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Shroudbreaker_SendNPCToVariables_C::OnBegin (40 bytes)
void BP_Shroudbreaker_SendNPCToVariables_C::OnBegin()
{
    ExecuteUbergraph_BP_Shroudbreaker_SendNPCToVariables();
    return;
}

// Recovered Kismet: BP_Shroudbreaker_SendNPCToVariables_C::ExecuteUbergraph_BP_Shroudbreaker_SendNPCToVariables (249 bytes)
void BP_Shroudbreaker_SendNPCToVariables_C::ExecuteUbergraph_BP_Shroudbreaker_SendNPCToVariables()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(idx_283556, CallFunc_GetVariables_OutStruct);
    auto CallFunc_GetVariables_OutStruct2 = CallFunc_GetVariables_OutStruct2;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct2);
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    auto idx_283556 = CallFunc_GetVariables_OutStruct2;
    return;
}
