// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheAshenDragon_CreatePlayerEnteredIslandDirectlyTriggerProxy_C::OnBegin (40 bytes)
void BP_TheAshenDragon_CreatePlayerEnteredIslandDirectlyTriggerProxy_C::OnBegin()
{
    ExecuteUbergraph_BP_TheAshenDragon_CreatePlayerEnteredIslandDirectlyTriggerProxy();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_CreatePlayerEnteredIslandDirectlyTriggerProxy_C::ExecuteUbergraph_BP_TheAshenDragon_CreatePlayerEnteredIslandDirectlyTriggerProxy (390 bytes)
void BP_TheAshenDragon_CreatePlayerEnteredIslandDirectlyTriggerProxy_C::ExecuteUbergraph_BP_TheAshenDragon_CreatePlayerEnteredIslandDirectlyTriggerProxy()
{
L_A:
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_GetTransform_ReturnValue = CallFunc_GetVariables_OutStruct->this->GetTransform();
    AActor* idx_281491 = UBlueprintStepBase::SpawnPhasedActor(ProxyClass, CallFunc_GetTransform_ReturnValue);
    BP_TheAshenDragon_EnterIslandDirectlyTriggerVolume_C* idx_281511 = Cast<BP_TheAshenDragon_EnterIslandDirectlyTriggerVolume_C*>(idx_281491);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_281511);
    if (!K2Node_DynamicCast_bSuccess) goto L_A;
    this->GetVariables(idx_281459);
    auto idx_281459 = idx_281459;
    UBlueprintStepBase::SetVariables(idx_281459);
    this->SignalComplete();
    return;
}
