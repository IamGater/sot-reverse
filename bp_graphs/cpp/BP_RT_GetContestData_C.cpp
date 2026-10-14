// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_RT_GetContestData_C::OnBeginCustom (270 bytes)
void BP_RT_GetContestData_C::OnBeginCustom()
{
    auto CallFunc_GetService_ReturnValue = this->GetService(idx_276431);
    ContestTaleQuestService* idx_276433 = Cast<ContestTaleQuestService*>(CallFunc_GetService_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_276433);
    if (!K2Node_DynamicCast_bSuccess) goto L_E4;
    TArray<FContestIslandArchetype> idx_276430 = idx_276433->GetContestVoyageData();
    auto idx_276428 = idx_276430;
L_E4:
    idx_276428 = K2Node_MakeArray_Array;
    return;
}
