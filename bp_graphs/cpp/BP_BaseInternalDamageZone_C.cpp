// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_BaseInternalDamageZone_C::OnRepairMounted (356 bytes)
void BP_BaseInternalDamageZone_C::OnRepairMounted()
{
    bool CallFunc_IsServer_ReturnValue = UKismetSystemLibrary::IsServer();
    if (!CallFunc_IsServer_ReturnValue) goto L_3E;
L_39:
L_3E:
    bool CallFunc_WwiseEmitterIsValid_ReturnValue = UWwiseEmitterBlueprintLibrary::WwiseEmitterIsValid(RepairEmitter);
    if (!CallFunc_WwiseEmitterIsValid_ReturnValue) goto L_E4;
    int CallFunc_WwiseEmitterPostEvent_ReturnValue = UWwiseEmitterBlueprintLibrary::WwiseEmitterPostEvent(RepairEmitter, Start);
L_E4:
    bool CallFunc_WwiseCreateEmitter_ReturnValue = UWwiseEmitterBlueprintLibrary::WwiseCreateEmitter(CallFunc_WwiseCreateEmitter_Emitter);
    if (!CallFunc_WwiseCreateEmitter_ReturnValue) goto L_39;
    auto RepairEmitter = CallFunc_WwiseCreateEmitter_Emitter;
    return;
}

// Recovered Kismet: BP_BaseInternalDamageZone_C::GetRepairMountLocation (72 bytes)
void BP_BaseInternalDamageZone_C::GetRepairMountLocation()
{
    return;
}

// Recovered Kismet: BP_BaseInternalDamageZone_C::ShouldDrawTooltipInWorldSpace (99 bytes)
void BP_BaseInternalDamageZone_C::ShouldDrawTooltipInWorldSpace()
{
    FVector CallFunc_K2_GetComponentLocation_ReturnValue = RepairWood->K2_GetComponentLocation();
    return;
}

// Recovered Kismet: BP_BaseInternalDamageZone_C::UserConstructionScript (13 bytes)
void BP_BaseInternalDamageZone_C::UserConstructionScript()
{
    this->UserConstructionScript();
    return;
}

// Recovered Kismet: BP_BaseInternalDamageZone_C::ReceiveEndPlay (40 bytes)
void BP_BaseInternalDamageZone_C::ReceiveEndPlay()
{
    ExecuteUbergraph_BP_BaseInternalDamageZone();
    return;
}

// Recovered Kismet: BP_BaseInternalDamageZone_C::ExecuteUbergraph_BP_BaseInternalDamageZone (145 bytes)
void BP_BaseInternalDamageZone_C::ExecuteUbergraph_BP_BaseInternalDamageZone()
{
    bool CallFunc_WwiseEmitterStop_ReturnValue = UWwiseEmitterBlueprintLibrary::WwiseEmitterStop(RepairEmitter);
    bool CallFunc_WwiseEmitterStop_ReturnValue2 = UWwiseEmitterBlueprintLibrary::WwiseEmitterStop(WaterLeakEmitter);
    return;
}
