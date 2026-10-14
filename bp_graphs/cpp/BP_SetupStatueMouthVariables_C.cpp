// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_SetupStatueMouthVariables_C::OnBegin (40 bytes)
void BP_SetupStatueMouthVariables_C::OnBegin()
{
    ExecuteUbergraph_BP_SetupStatueMouthVariables();
    return;
}

// Recovered Kismet: BP_SetupStatueMouthVariables_C::ExecuteUbergraph_BP_SetupStatueMouthVariables (377 bytes)
void BP_SetupStatueMouthVariables_C::ExecuteUbergraph_BP_SetupStatueMouthVariables()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue2 = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    AActor* UniqueObjectNameForCooking_AsActor2 = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue2);
    bool UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(UniqueObjectNameForCooking_AsActor2);
    auto idx_284064 = idx_284064;
    idx_284064 = idx_284064;
    UBlueprintStepBase::SetVariables(idx_284064);
    return;
}
