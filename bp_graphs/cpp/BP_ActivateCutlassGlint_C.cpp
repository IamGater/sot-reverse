// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_ActivateCutlassGlint_C::OnBegin (40 bytes)
void BP_ActivateCutlassGlint_C::OnBegin()
{
    ExecuteUbergraph_BP_ActivateCutlassGlint();
    return;
}

// Recovered Kismet: BP_ActivateCutlassGlint_C::ExecuteUbergraph_BP_ActivateCutlassGlint (251 bytes)
void BP_ActivateCutlassGlint_C::ExecuteUbergraph_BP_ActivateCutlassGlint()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(CallFunc_GetVariables_OutStruct);
    if (!CallFunc_IsValid_ReturnValue) goto L_F8;
    TScriptInterface<UActivateGlint_C> idx_282714 = TScriptInterface<UActivateGlint_C>(CallFunc_GetVariables_OutStruct);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(idx_282714);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_E4;
L_E4:
    this->SignalComplete();
L_F8:
    return;
}
