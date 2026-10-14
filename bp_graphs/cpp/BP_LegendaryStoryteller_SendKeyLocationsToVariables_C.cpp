// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_LegendaryStoryteller_SendKeyLocationsToVariables_C::OnBegin (40 bytes)
void BP_LegendaryStoryteller_SendKeyLocationsToVariables_C::OnBegin()
{
    ExecuteUbergraph_BP_LegendaryStoryteller_SendKeyLocationsToVariables();
    return;
}

// Recovered Kismet: BP_LegendaryStoryteller_SendKeyLocationsToVariables_C::ExecuteUbergraph_BP_LegendaryStoryteller_SendKeyLocationsToVariables (575 bytes)
void BP_LegendaryStoryteller_SendKeyLocationsToVariables_C::ExecuteUbergraph_BP_LegendaryStoryteller_SendKeyLocationsToVariables()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct);
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    auto CallFunc_GetVariables_OutStruct2 = CallFunc_GetVariables_OutStruct2;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct2);
    this->GetVariables(CallFunc_GetVariables_OutStruct3);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetVariables_OutStruct3);
    auto CallFunc_LessEqual_IntInt_ReturnValue2 = CallFunc_Array_Length_ReturnValue;
    if (!CallFunc_LessEqual_IntInt_ReturnValue2) goto L_1BE;
L_1BE:
    CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetVariables_OutStruct3);
    auto CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    if (!CallFunc_LessEqual_IntInt_ReturnValue) goto L_23C;
L_23C:
    return;
}
