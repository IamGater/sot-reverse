// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TallTales_CreateEventDispatcherProxy_C::OnBegin (40 bytes)
void BP_TallTales_CreateEventDispatcherProxy_C::OnBegin()
{
    ExecuteUbergraph_BP_TallTales_CreateEventDispatcherProxy();
    return;
}

// Recovered Kismet: BP_TallTales_CreateEventDispatcherProxy_C::ExecuteUbergraph_BP_TallTales_CreateEventDispatcherProxy (210 bytes)
void BP_TallTales_CreateEventDispatcherProxy_C::ExecuteUbergraph_BP_TallTales_CreateEventDispatcherProxy()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct);
    this->SignalComplete();
    auto CallFunc_SpawnActor_ReturnValue = this->SpawnActor(ProxyClass, CallFunc_MakeTransform_ReturnValue, false);
    return;
}
