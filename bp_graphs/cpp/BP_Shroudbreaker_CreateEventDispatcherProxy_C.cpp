// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Shroudbreaker_CreateEventDispatcherProxy_C::OnBegin (40 bytes)
void BP_Shroudbreaker_CreateEventDispatcherProxy_C::OnBegin()
{
    ExecuteUbergraph_BP_Shroudbreaker_CreateEventDispatcherProxy();
    return;
}

// Recovered Kismet: BP_Shroudbreaker_CreateEventDispatcherProxy_C::ExecuteUbergraph_BP_Shroudbreaker_CreateEventDispatcherProxy (416 bytes)
void BP_Shroudbreaker_CreateEventDispatcherProxy_C::ExecuteUbergraph_BP_Shroudbreaker_CreateEventDispatcherProxy()
{
    this->SignalComplete();
    AActor* CallFunc_SpawnPhasedActor_ReturnValue = UBlueprintStepBase::SpawnPhasedActor(Class, CallFunc_MakeTransform_ReturnValue);
    BP_TaleEventDispatcherProxy_C* idx_283436 = Cast<BP_TaleEventDispatcherProxy_C*>(CallFunc_SpawnPhasedActor_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_283436);
    if (!K2Node_DynamicCast_bSuccess) goto L_126;
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct);
L_126:
    return;
}
