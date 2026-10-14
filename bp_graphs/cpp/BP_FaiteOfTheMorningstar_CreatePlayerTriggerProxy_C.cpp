// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_FaiteOfTheMorningstar_CreatePlayerTriggerProxy_C::OnBegin (40 bytes)
void BP_FaiteOfTheMorningstar_CreatePlayerTriggerProxy_C::OnBegin()
{
    ExecuteUbergraph_BP_FaiteOfTheMorningstar_CreatePlayerTriggerProxy();
    return;
}

// Recovered Kismet: BP_FaiteOfTheMorningstar_CreatePlayerTriggerProxy_C::ExecuteUbergraph_BP_FaiteOfTheMorningstar_CreatePlayerTriggerProxy (308 bytes)
void BP_FaiteOfTheMorningstar_CreatePlayerTriggerProxy_C::ExecuteUbergraph_BP_FaiteOfTheMorningstar_CreatePlayerTriggerProxy()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_GetTransform_ReturnValue = CallFunc_GetVariables_OutStruct->this->GetTransform();
    AActor* CallFunc_SpawnPhasedActor_ReturnValue = UBlueprintStepBase::SpawnPhasedActor(ProxyClass, CallFunc_GetTransform_ReturnValue);
    BP_FateOfTheMorningstar_QuestParicipantTriggerVolume_C* idx_284632 = Cast<BP_FateOfTheMorningstar_QuestParicipantTriggerVolume_C*>(CallFunc_SpawnPhasedActor_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_284632);
    if (!K2Node_DynamicCast_bSuccess) goto L_131;
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    auto CallFunc_GetVariables_OutStruct2 = CallFunc_GetVariables_OutStruct2;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct2);
    this->SignalComplete();
L_131:
    return;
}
