// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_OpenChasmDoor_C::OnBegin (40 bytes)
void BP_OpenChasmDoor_C::OnBegin()
{
    ExecuteUbergraph_BP_OpenChasmDoor();
    return;
}

// Recovered Kismet: BP_OpenChasmDoor_C::ExecuteUbergraph_BP_OpenChasmDoor (424 bytes)
void BP_OpenChasmDoor_C::ExecuteUbergraph_BP_OpenChasmDoor()
{
    this->SignalComplete();
    TScriptInterface<UMechanismTriggerInterface> idx_230578 = TScriptInterface<UMechanismTriggerInterface>(Temp_object_Variable);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(idx_230578);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_9D;
    bool idx_230573 = idx_230578->ActivateTrigger();
L_9D:
    idx_230573 = false;
    this->GetVariables(idx_227630);
    UObject* idx_228861 = idx_227630->GetInterfaceImplementer(MechanismTriggerInterface);
    ULevelStreaming* idx_228876 = Cast<ULevelStreaming*>(idx_228861);
    bool UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(idx_228876);
    if (!UniqueObjectNameForCooking_bSuccess2) goto L_18D;
    ALevelScriptActor* idx_228862 = idx_228876->GetLevelScriptActor();
    auto Temp_object_Variable = idx_228862;
L_18D:
    Temp_object_Variable = idx_228861;
    return;
}
