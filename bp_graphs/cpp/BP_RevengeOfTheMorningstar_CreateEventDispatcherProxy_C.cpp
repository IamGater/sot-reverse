// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_RevengeOfTheMorningstar_CreateEventDispatcherProxy_C::OnBegin (40 bytes)
void BP_RevengeOfTheMorningstar_CreateEventDispatcherProxy_C::OnBegin()
{
    ExecuteUbergraph_BP_RevengeOfTheMorningstar_CreateEventDispatcherProxy();
    return;
}

// Recovered Kismet: BP_RevengeOfTheMorningstar_CreateEventDispatcherProxy_C::ExecuteUbergraph_BP_RevengeOfTheMorningstar_CreateEventDispatcherProxy (569 bytes)
void BP_RevengeOfTheMorningstar_CreateEventDispatcherProxy_C::ExecuteUbergraph_BP_RevengeOfTheMorningstar_CreateEventDispatcherProxy()
{
    this->SignalComplete();
    auto CallFunc_SpawnActor_ReturnValue = this->SpawnActor(ProxyClass, CallFunc_MakeTransform_ReturnValue, false);
    BP_RevengeOfTheMorningstar_TrinketTrackerProxy_C* idx_284264 = Cast<BP_RevengeOfTheMorningstar_TrinketTrackerProxy_C*>(CallFunc_SpawnActor_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_284264);
    if (!K2Node_DynamicCast_bSuccess) goto L_119;
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct);
L_119:
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass();
    FString CallFunc_GetClassDisplayName_ReturnValue = UKismetSystemLibrary::GetClassDisplayName(CallFunc_GetObjectClass_ReturnValue);
    FString CallFunc_Concat_StrStr_ReturnValue = UKismetStringLibrary::Concat_StrStr(CallFunc_GetClassDisplayName_ReturnValue);
    return;
}
