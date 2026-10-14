// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_RT_CreateShipMapMarkerActor_C::OnBeginCustom (89 bytes)
void BP_RT_CreateShipMapMarkerActor_C::OnBeginCustom()
{
    auto CallFunc_MakeTransform_ReturnValue = idx_276420;
    SpawnMapMarker(CallFunc_MakeTransform_ReturnValue);
    return;
}

// Recovered Kismet: BP_RT_CreateShipMapMarkerActor_C::SpawnMapMarker (40 bytes)
void BP_RT_CreateShipMapMarkerActor_C::SpawnMapMarker()
{
    ExecuteUbergraph_BP_RT_CreateShipMapMarkerActor();
    return;
}

// Recovered Kismet: BP_RT_CreateShipMapMarkerActor_C::OnSpawnComplete (40 bytes)
void BP_RT_CreateShipMapMarkerActor_C::OnSpawnComplete()
{
    ExecuteUbergraph_BP_RT_CreateShipMapMarkerActor();
    return;
}

// Recovered Kismet: BP_RT_CreateShipMapMarkerActor_C::ExecuteUbergraph_BP_RT_CreateShipMapMarkerActor (329 bytes)
void BP_RT_CreateShipMapMarkerActor_C::ExecuteUbergraph_BP_RT_CreateShipMapMarkerActor()
{
    this->SignalComplete();
    UBlueprintStepBase::SpawnActorAsync(idx_276419, idx_276418, false, UniqueObjectNameForCooking_OutputDelegate);
    this->GetVariables(idx_276397);
    auto idx_276409 = idx_276409;
    idx_276409 = idx_276409;
    idx_276409 = idx_276409;
    idx_276409 = idx_276409;
    idx_276409 = idx_276409;
    UBlueprintStepBase::SetVariables(idx_276409);
    return;
}
