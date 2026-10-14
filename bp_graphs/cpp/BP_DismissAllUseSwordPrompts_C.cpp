// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_DismissAllUseSwordPrompts_C::OnBegin (40 bytes)
void BP_DismissAllUseSwordPrompts_C::OnBegin()
{
    ExecuteUbergraph_BP_DismissAllUseSwordPrompts();
    return;
}

// Recovered Kismet: BP_DismissAllUseSwordPrompts_C::ExecuteUbergraph_BP_DismissAllUseSwordPrompts (176 bytes)
void BP_DismissAllUseSwordPrompts_C::ExecuteUbergraph_BP_DismissAllUseSwordPrompts()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    BP_PromptActor_UseSword_C* idx_282819 = Cast<BP_PromptActor_UseSword_C*>(CallFunc_GetVariables_OutStruct);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_282819);
    if (!K2Node_DynamicCast_bSuccess) goto L_AD;
L_AD:
    return;
}
