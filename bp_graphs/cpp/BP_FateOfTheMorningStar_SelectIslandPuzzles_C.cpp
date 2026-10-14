// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_FateOfTheMorningStar_SelectIslandPuzzles_C::OnBegin (40 bytes)
void BP_FateOfTheMorningStar_SelectIslandPuzzles_C::OnBegin()
{
    ExecuteUbergraph_BP_FateOfTheMorningStar_SelectIslandPuzzles();
    return;
}

// Recovered Kismet: BP_FateOfTheMorningStar_SelectIslandPuzzles_C::ExecuteUbergraph_BP_FateOfTheMorningStar_SelectIslandPuzzles (346 bytes)
void BP_FateOfTheMorningStar_SelectIslandPuzzles_C::ExecuteUbergraph_BP_FateOfTheMorningStar_SelectIslandPuzzles()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetVariables_OutStruct);
    auto CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    auto CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
    auto CallFunc_GetVariables_OutStruct2 = CallFunc_GetVariables_OutStruct2;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct2);
    return;
}
