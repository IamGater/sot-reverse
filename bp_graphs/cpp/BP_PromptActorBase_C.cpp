// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PromptActorBase_C::UninitializePrompt (302 bytes)
void BP_PromptActorBase_C::UninitializePrompt()
{
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(PromptCoordinator);
    if (!CallFunc_IsValid_ReturnValue) goto L_12B;
    bool CallFunc_Array_Contains_ReturnValue = UKismetArrayLibrary::Array_Contains(PromptCoordinators, PromptCoordinator);
    if (!CallFunc_Array_Contains_ReturnValue) goto L_12B;
    bool CallFunc_Array_RemoveItem_ReturnValue = UKismetArrayLibrary::Array_RemoveItem(PromptCoordinators, PromptCoordinator);
L_12B:
    return;
}

// Recovered Kismet: BP_PromptActorBase_C::UninitializeAllPrompts (694 bytes)
void BP_PromptActorBase_C::UninitializeAllPrompts()
{
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(PromptCoordinators);
    auto CallFunc_Greater_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue2;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(PromptCoordinators);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_23F;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
L_23F:
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_PromptActorBase_C::CheckAllPromptsComplete (497 bytes)
void BP_PromptActorBase_C::CheckAllPromptsComplete()
{
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(PromptCoordinators);
    auto CallFunc_Greater_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue2;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(PromptCoordinators);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_189;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Array_Get_Item) goto L_1E3;
L_189:
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
L_1E3:
    return;
}

// Recovered Kismet: BP_PromptActorBase_C::Complete (33 bytes)
void BP_PromptActorBase_C::Complete()
{
    bool IsCompleted = true;
    return;
}

// Recovered Kismet: BP_PromptActorBase_C::GetMyClass (65 bytes)
void BP_PromptActorBase_C::GetMyClass()
{
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass();
    return;
}

// Recovered Kismet: BP_PromptActorBase_C::GetAthenaPlayerController (802 bytes)
void BP_PromptActorBase_C::GetAthenaPlayerController()
{
    auto CallFunc_GetPlayerController_ReturnValue = GameplayStatics->this->GetPlayerController();
    AthenaPlayerController* K2Node_DynamicCast_AsAthena_Player_Controller = Cast<AthenaPlayerController*>(CallFunc_GetPlayerController_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Controller);
    if (!K2Node_DynamicCast_bSuccess) goto L_97;
L_97:
    GetMyClass(CallFunc_GetMyClass_Class);
    auto UniqueObjectNameForCooking_FormatTextArgument = UniqueObjectNameForCooking_FormatTextArgument;
    UniqueObjectNameForCooking_FormatTextArgument = UniqueObjectNameForCooking_FormatTextArgument;
    FString CallFunc_GetClassDisplayName_ReturnValue = UKismetSystemLibrary::GetClassDisplayName(CallFunc_GetMyClass_Class);
    FText CallFunc_Conv_StringToText_ReturnValue = UKismetTextLibrary::Conv_StringToText(CallFunc_GetClassDisplayName_ReturnValue);
    auto UniqueObjectNameForCooking_FormatTextArgument2 = UniqueObjectNameForCooking_FormatTextArgument2;
    UniqueObjectNameForCooking_FormatTextArgument2 = UniqueObjectNameForCooking_FormatTextArgument2;
    FText CallFunc_Format_ReturnValue = UKismetTextLibrary::Format(UniqueObjectNameForCooking_Array);
    FString CallFunc_Conv_TextToString_ReturnValue = UKismetTextLibrary::Conv_TextToString(CallFunc_Format_ReturnValue);
    return;
}

// Recovered Kismet: BP_PromptActorBase_C::UserConstructionScript (3 bytes)
void BP_PromptActorBase_C::UserConstructionScript()
{
    return;
    ExecuteUbergraph_BP_PromptActorBase();
    return;
    ExecuteUbergraph_BP_PromptActorBase();
    return;
}

// Recovered Kismet: BP_PromptActorBase_C::ReceiveEndPlay (40 bytes)
void BP_PromptActorBase_C::ReceiveEndPlay()
{
    ExecuteUbergraph_BP_PromptActorBase();
    return;
}

// Recovered Kismet: BP_PromptActorBase_C::ExecuteUbergraph_BP_PromptActorBase (337 bytes)
void BP_PromptActorBase_C::ExecuteUbergraph_BP_PromptActorBase()
{
    UninitializeAllPrompts();
    CheckAllPromptsComplete(CallFunc_CheckAllPromptsComplete_AllCompleted);
    if (!CallFunc_CheckAllPromptsComplete_AllCompleted) goto L_14E;
    Complete();
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(PromptCoordinators, K2Node_CustomEvent_Prompt_Coordinator);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(PromptCoordinators);
    auto CallFunc_Greater_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    if (!CallFunc_Greater_IntInt_ReturnValue) goto L_14E;
L_14E:
    return;
}

// Recovered Kismet: BP_PromptActorBase_C::OnComplete__DelegateSignature (3 bytes)
void BP_PromptActorBase_C::OnComplete__DelegateSignature()
{
    return;
}
