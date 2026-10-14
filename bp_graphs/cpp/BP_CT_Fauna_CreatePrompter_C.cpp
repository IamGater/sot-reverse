// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_CT_Fauna_CreatePrompter_C::OnBeginCustom (281 bytes)
void BP_CT_Fauna_CreatePrompter_C::OnBeginCustom()
{
    AActor* CallFunc_SpawnPhasedActor_ReturnValue = UBlueprintStepBase::SpawnPhasedActor(idx_282302, CallFunc_MakeTransform_ReturnValue);
    BP_PromptSequencer_FaunaContract_C* idx_282465 = Cast<BP_PromptSequencer_FaunaContract_C*>(CallFunc_SpawnPhasedActor_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_282465);
    if (!K2Node_DynamicCast_bSuccess) goto L_10B;
L_10B:
    return;
}

// Recovered Kismet: BP_CT_Fauna_CreatePrompter_C::ExecuteUbergraph_BP_CT_Fauna_CreatePrompter (13 bytes)
void BP_CT_Fauna_CreatePrompter_C::ExecuteUbergraph_BP_CT_Fauna_CreatePrompter()
{
    return;
}
