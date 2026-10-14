// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_RevengeOfTheMorningstar_SetGraymarrowCustomAnimationData_C::OnBegin (40 bytes)
void BP_RevengeOfTheMorningstar_SetGraymarrowCustomAnimationData_C::OnBegin()
{
    ExecuteUbergraph_BP_RevengeOfTheMorningstar_SetGraymarrowCustomAnimationData();
    return;
}

// Recovered Kismet: BP_RevengeOfTheMorningstar_SetGraymarrowCustomAnimationData_C::ExecuteUbergraph_BP_RevengeOfTheMorningstar_SetGraymarrowCustomAnimationData (216 bytes)
void BP_RevengeOfTheMorningstar_SetGraymarrowCustomAnimationData_C::ExecuteUbergraph_BP_RevengeOfTheMorningstar_SetGraymarrowCustomAnimationData()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    TArray<UActorComponent*> CallFunc_GetComponentsByClass_ReturnValue = CallFunc_GetVariables_OutStruct->GetComponentsByClass(CustomAnimationHandlerComponent);
    return;
}
