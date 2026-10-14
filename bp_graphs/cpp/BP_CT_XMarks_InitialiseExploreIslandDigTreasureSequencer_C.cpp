// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_CT_XMarks_InitialiseExploreIslandDigTreasureSequencer_C::OnBeginCustom (402 bytes)
void BP_CT_XMarks_InitialiseExploreIslandDigTreasureSequencer_C::OnBeginCustom()
{
    AActor* CallFunc_SpawnPhasedActor_ReturnValue = UBlueprintStepBase::SpawnPhasedActor(idx_282343, CallFunc_MakeTransform_ReturnValue);
    BP_PromptSequencer_ExploreIsland_DigTreasure_C* idx_282342 = Cast<BP_PromptSequencer_ExploreIsland_DigTreasure_C*>(CallFunc_SpawnPhasedActor_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_282342);
    if (!K2Node_DynamicCast_bSuccess) goto L_18F;
    auto CallFunc_FlushNetDormancy_ReturnValue = idx_282342->this->FlushNetDormancy();
    idx_282342 = idx_282342;
    auto CallFunc_FlushNetDormancy_ReturnValue2 = idx_282342->this->FlushNetDormancy();
    idx_282342 = idx_282342;
L_18F:
    return;
}
