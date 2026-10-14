// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheAshenDragon_CreatePlayer3rdTriggerProxy_C::OnBegin (40 bytes)
void BP_TheAshenDragon_CreatePlayer3rdTriggerProxy_C::OnBegin()
{
    ExecuteUbergraph_BP_TheAshenDragon_CreatePlayer3rdTriggerProxy();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_CreatePlayer3rdTriggerProxy_C::ExecuteUbergraph_BP_TheAshenDragon_CreatePlayer3rdTriggerProxy (390 bytes)
void BP_TheAshenDragon_CreatePlayer3rdTriggerProxy_C::ExecuteUbergraph_BP_TheAshenDragon_CreatePlayer3rdTriggerProxy()
{
L_A:
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_GetTransform_ReturnValue = CallFunc_GetVariables_OutStruct->this->GetTransform();
    AActor* idx_281491 = UBlueprintStepBase::SpawnPhasedActor(ProxyClass, CallFunc_GetTransform_ReturnValue);
    BP_TheAshenDragon_QuestParicipantTriggerVolume_C* idx_281494 = Cast<BP_TheAshenDragon_QuestParicipantTriggerVolume_C*>(idx_281491);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_281494);
    if (!K2Node_DynamicCast_bSuccess) goto L_A;
    this->GetVariables(idx_281459);
    auto idx_281459 = idx_281459;
    UBlueprintStepBase::SetVariables(idx_281459);
    this->SignalComplete();
    return;
}
