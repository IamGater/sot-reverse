// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Prompt_RecurringPromptWithExclusionZones_C::OnPlayerExitedExclusionZoneFunc (28 bytes)
void BP_Prompt_RecurringPromptWithExclusionZones_C::OnPlayerExitedExclusionZoneFunc()
{
    bool State_CanShowPrompt = true;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_RecurringPromptWithExclusionZones_C::OnPlayerEnteredExclusionZoneFunc (28 bytes)
void BP_Prompt_RecurringPromptWithExclusionZones_C::OnPlayerEnteredExclusionZoneFunc()
{
    bool State_CanShowPrompt = false;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_RecurringPromptWithExclusionZones_C::PostInitialize (22 bytes)
void BP_Prompt_RecurringPromptWithExclusionZones_C::PostInitialize()
{
    ExecuteUbergraph_BP_Prompt_RecurringPromptWithExclusionZones();
    return;
}

// Recovered Kismet: BP_Prompt_RecurringPromptWithExclusionZones_C::Evaluate (22 bytes)
void BP_Prompt_RecurringPromptWithExclusionZones_C::Evaluate()
{
    ExecuteUbergraph_BP_Prompt_RecurringPromptWithExclusionZones();
    return;
}

// Recovered Kismet: BP_Prompt_RecurringPromptWithExclusionZones_C::UninitializeImplementable (22 bytes)
void BP_Prompt_RecurringPromptWithExclusionZones_C::UninitializeImplementable()
{
    ExecuteUbergraph_BP_Prompt_RecurringPromptWithExclusionZones();
    return;
}

// Recovered Kismet: BP_Prompt_RecurringPromptWithExclusionZones_C::OnPlayerExitedExclusionZone (22 bytes)
void BP_Prompt_RecurringPromptWithExclusionZones_C::OnPlayerExitedExclusionZone()
{
    ExecuteUbergraph_BP_Prompt_RecurringPromptWithExclusionZones();
    return;
}

// Recovered Kismet: BP_Prompt_RecurringPromptWithExclusionZones_C::OnPlayerEnteredExclusionZone (22 bytes)
void BP_Prompt_RecurringPromptWithExclusionZones_C::OnPlayerEnteredExclusionZone()
{
    ExecuteUbergraph_BP_Prompt_RecurringPromptWithExclusionZones();
    return;
}

// Recovered Kismet: BP_Prompt_RecurringPromptWithExclusionZones_C::ExecuteUbergraph_BP_Prompt_RecurringPromptWithExclusionZones (1423 bytes)
void BP_Prompt_RecurringPromptWithExclusionZones_C::ExecuteUbergraph_BP_Prompt_RecurringPromptWithExclusionZones()
{
    bool State_ShowPrompt = false;
    Evaluate();
L_79:
    State_ShowPrompt = true;
    Evaluate();
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(ExclusionOverlapActors);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_1E5;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
L_1E5:
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(ExclusionPoints);
    auto CallFunc_Less_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    if (!CallFunc_Less_IntInt_ReturnValue2) goto L_79;
    auto Temp_int_Array_Index_Variable2 = Temp_int_Loop_Counter_Variable2;
    AOverlapTriggerActor* CallFunc_CreateOverlapTriggerActor_ReturnValue = AOverlapTriggerActor::CreateOverlapTriggerActor(CallFunc_Array_Get_Item, ExclusionRadius);
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(ExclusionOverlapActors, CallFunc_CreateOverlapTriggerActor_ReturnValue);
    auto CallFunc_GetPlayerController_ReturnValue = GameplayStatics->this->GetPlayerController();
    APawn* CallFunc_K2_GetPawn_ReturnValue = CallFunc_GetPlayerController_ReturnValue->K2_GetPawn();
    auto CallFunc_Add_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Loop_Counter_Variable2 = CallFunc_Add_IntInt_ReturnValue2;
    auto CallFunc_Not_PreBool_ReturnValue = State_CanShowPrompt;
    if (!CallFunc_Not_PreBool_ReturnValue) goto L_516;
    UBasePromptCoordinator::DismissAllPrompts();
L_516:
    if (!State_ShowPrompt) goto L_538;
    UBasePromptCoordinator::SetPromptAs(Prompt);
L_538:
    UBasePromptCoordinator::DismissAllPrompts();
    OnPlayerExitedExclusionZoneFunc();
    OnPlayerEnteredExclusionZoneFunc();
    return;
}
