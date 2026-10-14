// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TallTales_WaitForEventDispatchFromProxy_C::GetStepName (132 bytes)
void BP_TallTales_WaitForEventDispatchFromProxy_C::GetStepName()
{
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass();
    FString CallFunc_GetClassDisplayName_ReturnValue = UKismetSystemLibrary::GetClassDisplayName(CallFunc_GetObjectClass_ReturnValue);
    return;
}

// Recovered Kismet: BP_TallTales_WaitForEventDispatchFromProxy_C::OnBegin (40 bytes)
void BP_TallTales_WaitForEventDispatchFromProxy_C::OnBegin()
{
    ExecuteUbergraph_BP_TallTales_WaitForEventDispatchFromProxy();
    return;
}

// Recovered Kismet: BP_TallTales_WaitForEventDispatchFromProxy_C::Broadcast Received (22 bytes)
void BP_TallTales_WaitForEventDispatchFromProxy_C::Broadcast Received()
{
    ExecuteUbergraph_BP_TallTales_WaitForEventDispatchFromProxy();
    return;
}

// Recovered Kismet: BP_TallTales_WaitForEventDispatchFromProxy_C::ExecuteUbergraph_BP_TallTales_WaitForEventDispatchFromProxy (599 bytes)
void BP_TallTales_WaitForEventDispatchFromProxy_C::ExecuteUbergraph_BP_TallTales_WaitForEventDispatchFromProxy()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    BP_TaleEventDispatcherProxy_C* K2Node_DynamicCast_AsBP_Tale_Event_Dispatcher_Proxy = Cast<BP_TaleEventDispatcherProxy_C*>(CallFunc_GetVariables_OutStruct);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsBP_Tale_Event_Dispatcher_Proxy);
    if (!K2Node_DynamicCast_bSuccess) goto L_C9;
L_C9:
    GetStepName(CallFunc_GetStepName_Name);
    FString CallFunc_GetDisplayName_ReturnValue = UKismetSystemLibrary::GetDisplayName(K2Node_DynamicCast_AsBP_Tale_Event_Dispatcher_Proxy);
    FString CallFunc_Concat_StrStr_ReturnValue = UKismetStringLibrary::Concat_StrStr(CallFunc_GetStepName_Name);
    FString CallFunc_Concat_StrStr_ReturnValue2 = UKismetStringLibrary::Concat_StrStr(CallFunc_GetDisplayName_ReturnValue, CallFunc_Concat_StrStr_ReturnValue);
    FString CallFunc_Concat_StrStr_ReturnValue3 = UKismetStringLibrary::Concat_StrStr(CallFunc_Concat_StrStr_ReturnValue2);
    return;
}
