// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Shipwright_C::UserConstructionScript (3 bytes)
void BP_Shipwright_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_Shipwright_C::ReceiveBeginPlay (22 bytes)
void BP_Shipwright_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_Shipwright();
    return;
}

// Recovered Kismet: BP_Shipwright_C::ReceiveEndPlay (40 bytes)
void BP_Shipwright_C::ReceiveEndPlay()
{
    ExecuteUbergraph_BP_Shipwright();
    return;
}

// Recovered Kismet: BP_Shipwright_C::ExecuteUbergraph_BP_Shipwright (329 bytes)
void BP_Shipwright_C::ExecuteUbergraph_BP_Shipwright()
{
    bool CallFunc_WwiseCreateEmitter_ReturnValue = UWwiseEmitterBlueprintLibrary::WwiseCreateEmitter(CallFunc_WwiseCreateEmitter_Emitter, pool_ai_npc_vocalisation);
    auto WwiseEmitter = CallFunc_WwiseCreateEmitter_Emitter;
    int CallFunc_WwiseEmitterPostEvent_ReturnValue = UWwiseEmitterBlueprintLibrary::WwiseEmitterPostEvent(WwiseEmitter, WwiseShipwrightHummingPlay);
    int CallFunc_WwiseEmitterPostEvent_ReturnValue2 = UWwiseEmitterBlueprintLibrary::WwiseEmitterPostEvent(WwiseEmitter, WwiseShipwrightHummingStop);
    return;
}
