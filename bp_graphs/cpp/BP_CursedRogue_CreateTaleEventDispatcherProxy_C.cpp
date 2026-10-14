// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_CursedRogue_CreateTaleEventDispatcherProxy_C::OnBegin (40 bytes)
void BP_CursedRogue_CreateTaleEventDispatcherProxy_C::OnBegin()
{
    ExecuteUbergraph_BP_CursedRogue_CreateTaleEventDispatcherProxy();
    return;
}

// Recovered Kismet: BP_CursedRogue_CreateTaleEventDispatcherProxy_C::ExecuteUbergraph_BP_CursedRogue_CreateTaleEventDispatcherProxy (210 bytes)
void BP_CursedRogue_CreateTaleEventDispatcherProxy_C::ExecuteUbergraph_BP_CursedRogue_CreateTaleEventDispatcherProxy()
{
    this->GetVariables(idx_227630);
    auto idx_227630 = idx_227630;
    UBlueprintStepBase::SetVariables(idx_227630);
    this->SignalComplete();
    auto idx_230490 = this->SpawnActor(ProxyClass, CallFunc_MakeTransform_ReturnValue, false);
    return;
}
