// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_WaitForSkeletonDamageBroadcast_C::OnBegin (40 bytes)
void BP_WaitForSkeletonDamageBroadcast_C::OnBegin()
{
    ExecuteUbergraph_BP_WaitForSkeletonDamageBroadcast();
    return;
}

// Recovered Kismet: BP_WaitForSkeletonDamageBroadcast_C::SkeletonDamaged (22 bytes)
void BP_WaitForSkeletonDamageBroadcast_C::SkeletonDamaged()
{
    ExecuteUbergraph_BP_WaitForSkeletonDamageBroadcast();
    return;
}

// Recovered Kismet: BP_WaitForSkeletonDamageBroadcast_C::ExecuteUbergraph_BP_WaitForSkeletonDamageBroadcast (199 bytes)
void BP_WaitForSkeletonDamageBroadcast_C::ExecuteUbergraph_BP_WaitForSkeletonDamageBroadcast()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    BP_MaidenVoyage_SkeletonTree_C* idx_283350 = Cast<BP_MaidenVoyage_SkeletonTree_C*>(CallFunc_GetVariables_OutStruct);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_283350);
    if (!K2Node_DynamicCast_bSuccess) goto L_C4;
L_C4:
    return;
}
