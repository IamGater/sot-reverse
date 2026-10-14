// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_GrantFlintlock_C::OnBeginCustom (33 bytes)
void BP_GrantFlintlock_C::OnBeginCustom()
{
    UBlueprintStepBase::AddItemToCommonToolsService(BP_wpn_flintlock_pistol_MaidenVoyage_smp_01_a_ItemDesc_C);
    this->SignalComplete();
    return;
}

// Recovered Kismet: BP_GrantFlintlock_C::OnBegin (40 bytes)
void BP_GrantFlintlock_C::OnBegin()
{
    ExecuteUbergraph_BP_GrantFlintlock();
    return;
}

// Recovered Kismet: BP_GrantFlintlock_C::ExecuteUbergraph_BP_GrantFlintlock (53 bytes)
void BP_GrantFlintlock_C::ExecuteUbergraph_BP_GrantFlintlock()
{
    this->SignalComplete();
    UBlueprintStepBase::AddItemToCommonToolsService(BP_wpn_flintlock_pistol_MaidenVoyage_smp_01_a_ItemDesc_C);
    return;
}
