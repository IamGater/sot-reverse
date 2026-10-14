// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PromptActor_PromptWhilstInRangeOfTargets_C::UserConstructionScript (13 bytes)
void BP_PromptActor_PromptWhilstInRangeOfTargets_C::UserConstructionScript()
{
    this->UserConstructionScript();
    return;
}

// Recovered Kismet: BP_PromptActor_PromptWhilstInRangeOfTargets_C::ReceiveBeginPlay (22 bytes)
void BP_PromptActor_PromptWhilstInRangeOfTargets_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_PromptActor_PromptWhilstInRangeOfTargets();
    return;
}

// Recovered Kismet: BP_PromptActor_PromptWhilstInRangeOfTargets_C::Start All (22 bytes)
void BP_PromptActor_PromptWhilstInRangeOfTargets_C::Start All()
{
    ExecuteUbergraph_BP_PromptActor_PromptWhilstInRangeOfTargets();
    return;
}

// Recovered Kismet: BP_PromptActor_PromptWhilstInRangeOfTargets_C::ExecuteUbergraph_BP_PromptActor_PromptWhilstInRangeOfTargets (1202 bytes)
void BP_PromptActor_PromptWhilstInRangeOfTargets_C::ExecuteUbergraph_BP_PromptActor_PromptWhilstInRangeOfTargets()
{
    GetAthenaPlayerController(CallFunc_GetAthenaPlayerController_AthenaPlayerController);
    auto CallFunc_Add_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Loop_Counter_Variable2 = CallFunc_Add_IntInt_ReturnValue2;
    int CallFunc_Array_Length_ReturnValue3 = UKismetArrayLibrary::Array_Length(PromptCoordinators);
    auto CallFunc_Less_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Array_Index_Variable2 = Temp_int_Loop_Counter_Variable2;
    UObject* CallFunc_CreateObject_ReturnValue = UObjectUtilities::CreateObject(idx_275927);
    idx_275927* idx_275931 = Cast<idx_275927*>(CallFunc_CreateObject_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_275931);
    idx_275931 = idx_275931;
    idx_275931 = idx_275931;
    idx_275931 = idx_275931;
    Add Prompt Coordinator(idx_275931);
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(Targets);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_3A1;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
L_3A1:
    Start All();
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_40B;
L_40B:
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(Targets);
    auto CallFunc_Greater_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue2;
    return;
}
