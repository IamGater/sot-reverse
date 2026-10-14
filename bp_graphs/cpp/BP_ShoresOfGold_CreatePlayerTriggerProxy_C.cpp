// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_ShoresOfGold_CreatePlayerTriggerProxy_C::OnBegin (40 bytes)
void BP_ShoresOfGold_CreatePlayerTriggerProxy_C::OnBegin()
{
    ExecuteUbergraph_BP_ShoresOfGold_CreatePlayerTriggerProxy();
    return;
}

// Recovered Kismet: BP_ShoresOfGold_CreatePlayerTriggerProxy_C::ExecuteUbergraph_BP_ShoresOfGold_CreatePlayerTriggerProxy (390 bytes)
void BP_ShoresOfGold_CreatePlayerTriggerProxy_C::ExecuteUbergraph_BP_ShoresOfGold_CreatePlayerTriggerProxy()
{
L_A:
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_GetTransform_ReturnValue = CallFunc_GetVariables_OutStruct->this->GetTransform();
    AActor* CallFunc_SpawnPhasedActor_ReturnValue = UBlueprintStepBase::SpawnPhasedActor(ProxyClass, CallFunc_GetTransform_ReturnValue);
    BP_ShoresOfGold_QuestParticipantTriggerVolume_C* idx_285096 = Cast<BP_ShoresOfGold_QuestParticipantTriggerVolume_C*>(CallFunc_SpawnPhasedActor_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_285096);
    if (!K2Node_DynamicCast_bSuccess) goto L_A;
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    auto CallFunc_GetVariables_OutStruct2 = CallFunc_GetVariables_OutStruct2;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct2);
    this->SignalComplete();
    return;
}
