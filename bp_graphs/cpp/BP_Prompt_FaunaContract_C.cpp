// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Prompt_FaunaContract_C::SetDestinationPrompt (886 bytes)
void BP_Prompt_FaunaContract_C::SetDestinationPrompt()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(idx_276320);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_311;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    auto CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_Array_Get_Item;
    auto UniqueObjectNameForCooking_FormatTextArgument = UniqueObjectNameForCooking_FormatTextArgument;
    UniqueObjectNameForCooking_FormatTextArgument = UniqueObjectNameForCooking_FormatTextArgument;
    FText CallFunc_Format_ReturnValue = UKismetTextLibrary::Format(UniqueObjectNameForCooking_Array);
    auto idx_276211 = idx_276211;
    idx_276211 = idx_276211;
    idx_276211 = idx_276211;
    idx_276211 = idx_276211;
    auto idx_276212 = idx_276212;
    UBasePromptCoordinator::SetPromptAs(idx_276212);
L_311:
    UBasePromptCoordinator::SetPromptAs(idx_276325);
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_Prompt_FaunaContract_C::SetChickenStatus (44 bytes)
void BP_Prompt_FaunaContract_C::SetChickenStatus()
{
    auto idx_276321 = idx_276321;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_FaunaContract_C::Evaluate (22 bytes)
void BP_Prompt_FaunaContract_C::Evaluate()
{
    ExecuteUbergraph_BP_Prompt_FaunaContract();
    return;
}

// Recovered Kismet: BP_Prompt_FaunaContract_C::ExecuteUbergraph_BP_Prompt_FaunaContract (619 bytes)
void BP_Prompt_FaunaContract_C::ExecuteUbergraph_BP_Prompt_FaunaContract()
{
    UBasePromptCoordinator::DismissAllPrompts();
    UBasePromptCoordinator::DismissAllPrompts();
    UBasePromptCoordinator::DismissAllPrompts();
    Evaluate();
L_3F:
    UBasePromptCoordinator::SetPromptAs(idx_276331);
    auto K2Node_SwitchEnum_CmpSuccess = idx_276321;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_181;
    K2Node_SwitchEnum_CmpSuccess = idx_276321;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_3F;
    K2Node_SwitchEnum_CmpSuccess = idx_276321;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_1DC;
    K2Node_SwitchEnum_CmpSuccess = idx_276321;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_1EF;
    K2Node_SwitchEnum_CmpSuccess = idx_276321;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_24F;
L_181:
    SetDestinationPrompt();
L_1DC:
    Complete();
L_1EF:
    UBasePromptCoordinator::SetPromptAs(idx_276323);
L_24F:
    UBasePromptCoordinator::SetPromptAs(idx_276322);
    return;
}
