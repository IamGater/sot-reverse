// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_MaidenVoyage_MoveShipSpawnPoint_C::OnBeginCustom (125 bytes)
void BP_MaidenVoyage_MoveShipSpawnPoint_C::OnBeginCustom()
{
    auto CallFunc_GetTransform_ReturnValue = NewLocation->this->GetTransform();
    bool idx_283059 = idx_283062->K2_SetActorTransform(CallFunc_GetTransform_ReturnValue, false, idx_283060, false);
    this->SignalComplete();
    return;
}
