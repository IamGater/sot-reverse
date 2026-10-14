// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_GrantShovel_C::OnBeginCustom (41 bytes)
void BP_GrantShovel_C::OnBeginCustom()
{
    UBlueprintStepBase::AddItemToCommonToolsService(BP_tls_shovel_MaidenVoyage_smp_01_a_ItemDesc_C, CollectingPlayer);
    this->SignalComplete();
    return;
}

// Recovered Kismet: BP_GrantShovel_C::OnBegin (40 bytes)
void BP_GrantShovel_C::OnBegin()
{
    ExecuteUbergraph_BP_GrantShovel();
    return;
}

// Recovered Kismet: BP_GrantShovel_C::ExecuteUbergraph_BP_GrantShovel (53 bytes)
void BP_GrantShovel_C::ExecuteUbergraph_BP_GrantShovel()
{
    this->SignalComplete();
    UBlueprintStepBase::AddItemToCommonToolsService(BP_tls_shovel_MaidenVoyage_smp_01_a_ItemDesc_C);
    return;
}
