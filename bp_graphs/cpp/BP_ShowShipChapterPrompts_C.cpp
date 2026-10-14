// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_ShowShipChapterPrompts_C::OnBegin (40 bytes)
void BP_ShowShipChapterPrompts_C::OnBegin()
{
    ExecuteUbergraph_BP_ShowShipChapterPrompts();
    return;
}

// Recovered Kismet: BP_ShowShipChapterPrompts_C::ExecuteUbergraph_BP_ShowShipChapterPrompts (177 bytes)
void BP_ShowShipChapterPrompts_C::ExecuteUbergraph_BP_ShowShipChapterPrompts()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    BP_PromptActor_MaidenVoyage_ShipChapter_C* idx_282836 = Cast<BP_PromptActor_MaidenVoyage_ShipChapter_C*>(CallFunc_GetVariables_OutStruct);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_282836);
    if (!K2Node_DynamicCast_bSuccess) goto L_AE;
L_AE:
    return;
}
