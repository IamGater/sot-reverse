// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Prompt_ReadNote_C::OnPlayerFinishedInteractingWithNPCDialogFunc (204 bytes)
void BP_Prompt_ReadNote_C::OnPlayerFinishedInteractingWithNPCDialogFunc()
{
    ItemProxy* idx_275996 = Cast<ItemProxy*>(nullptr);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_275996);
    if (!K2Node_DynamicCast_bSuccess) goto L_BB;
    auto idx_275991 = idx_275996->this->GetItemInfo();
    auto CallFunc_EqualEqual_ObjectObject_ReturnValue = idx_275991;
    auto idx_275993 = CallFunc_EqualEqual_ObjectObject_ReturnValue;
L_BB:
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_ReadNote_C::Evaluate (22 bytes)
void BP_Prompt_ReadNote_C::Evaluate()
{
    ExecuteUbergraph_BP_Prompt_ReadNote();
    return;
}

// Recovered Kismet: BP_Prompt_ReadNote_C::OnPlayerFinishedInteractingWithNPCDialog (40 bytes)
void BP_Prompt_ReadNote_C::OnPlayerFinishedInteractingWithNPCDialog()
{
    ExecuteUbergraph_BP_Prompt_ReadNote();
    return;
}

// Recovered Kismet: BP_Prompt_ReadNote_C::RegisterCharacterEvents_Implementable (40 bytes)
void BP_Prompt_ReadNote_C::RegisterCharacterEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_ReadNote();
    return;
}

// Recovered Kismet: BP_Prompt_ReadNote_C::UnregisterCharacterEvents_Implementable (40 bytes)
void BP_Prompt_ReadNote_C::UnregisterCharacterEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_ReadNote();
    return;
}

// Recovered Kismet: BP_Prompt_ReadNote_C::ExecuteUbergraph_BP_Prompt_ReadNote (265 bytes)
void BP_Prompt_ReadNote_C::ExecuteUbergraph_BP_Prompt_ReadNote()
{
    if (!idx_275993) goto L_6C;
    UBasePromptCoordinator::DismissAllPrompts();
    Complete();
L_6C:
    UBasePromptCoordinator::SetPromptAs(idx_275999);
    OnPlayerFinishedInteractingWithNPCDialogFunc(K2Node_CustomEvent_Event);
    return;
}
