// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_CT_Fauna_WaitForChickenToDie_C::OnBeginCustom (58 bytes)
void BP_CT_Fauna_WaitForChickenToDie_C::OnBeginCustom()
{
    ExecuteUbergraph_BP_CT_Fauna_WaitForChickenToDie();
    return;
}

// Recovered Kismet: BP_CT_Fauna_WaitForChickenToDie_C::CustomEvent_0 (40 bytes)
void BP_CT_Fauna_WaitForChickenToDie_C::CustomEvent_0()
{
    ExecuteUbergraph_BP_CT_Fauna_WaitForChickenToDie();
    return;
}

// Recovered Kismet: BP_CT_Fauna_WaitForChickenToDie_C::OnEnd (22 bytes)
void BP_CT_Fauna_WaitForChickenToDie_C::OnEnd()
{
    ExecuteUbergraph_BP_CT_Fauna_WaitForChickenToDie();
    return;
}

// Recovered Kismet: BP_CT_Fauna_WaitForChickenToDie_C::ExecuteUbergraph_BP_CT_Fauna_WaitForChickenToDie (557 bytes)
void BP_CT_Fauna_WaitForChickenToDie_C::ExecuteUbergraph_BP_CT_Fauna_WaitForChickenToDie()
{
    AICreatureCharacter* idx_282509 = Cast<AICreatureCharacter*>(idx_282507);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(idx_282509);
    if (!K2Node_DynamicCast_bSuccess2) goto L_22A;
    AController* idx_282504 = idx_282509->GetController();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(idx_282504);
    this->SignalComplete();
    BP_PromptSequencer_FaunaContract_C* idx_282465 = Cast<BP_PromptSequencer_FaunaContract_C*>(idx_282508);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_282465);
    if (!K2Node_DynamicCast_bSuccess) goto L_22A;
    auto CallFunc_FlushNetDormancy_ReturnValue = idx_282465->this->FlushNetDormancy();
    idx_282465 = idx_282465;
L_22A:
    return;
}
