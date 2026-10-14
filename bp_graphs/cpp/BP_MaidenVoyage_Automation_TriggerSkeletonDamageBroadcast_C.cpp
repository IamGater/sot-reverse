// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_MaidenVoyage_Automation_TriggerSkeletonDamageBroadcast_C::OnBegin (40 bytes)
void BP_MaidenVoyage_Automation_TriggerSkeletonDamageBroadcast_C::OnBegin()
{
    idx:286111();
    return;
}

// Recovered Kismet: BP_MaidenVoyage_Automation_TriggerSkeletonDamageBroadcast_C::fn_idx_286111 (1262 bytes)
void BP_MaidenVoyage_Automation_TriggerSkeletonDamageBroadcast_C::fn_idx_286111()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    BP_MaidenVoyage_SkeletonTree_C* K2Node_DynamicCast_AsBP_Maiden_Voyage_Skeleton_Tree = Cast<BP_MaidenVoyage_SkeletonTree_C*>(CallFunc_GetVariables_OutStruct);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsBP_Maiden_Voyage_Skeleton_Tree);
    if (!K2Node_DynamicCast_bSuccess) goto L_4EB;
    auto idx_286112 = idx_286112;
    idx_286112 = idx_286112;
    idx_286112 = idx_286112;
    idx_286112 = idx_286112;
    idx_286112 = idx_286112;
    idx_286112 = idx_286112;
    idx_286112 = idx_286112;
    idx_286112 = idx_286112;
    idx_286112 = idx_286112;
    idx_286112 = idx_286112;
    auto idx_286107 = K2Node_DynamicCast_AsBP_Maiden_Voyage_Skeleton_Tree->this->OnDamageableImpact(idx_286112);
    idx_286112 = idx_286112;
    idx_286112 = idx_286112;
    idx_286112 = idx_286112;
    idx_286112 = idx_286112;
    idx_286112 = idx_286112;
    idx_286112 = idx_286112;
    idx_286112 = idx_286112;
    idx_286112 = idx_286112;
    idx_286112 = idx_286112;
    idx_286112 = idx_286112;
    auto idx_286109 = K2Node_DynamicCast_AsBP_Maiden_Voyage_Skeleton_Tree->this->OnDamageableImpact(idx_286112);
    idx_286112 = idx_286112;
    idx_286112 = idx_286112;
    idx_286112 = idx_286112;
    idx_286112 = idx_286112;
    idx_286112 = idx_286112;
    idx_286112 = idx_286112;
    idx_286112 = idx_286112;
    idx_286112 = idx_286112;
    idx_286112 = idx_286112;
    idx_286112 = idx_286112;
    auto idx_286108 = K2Node_DynamicCast_AsBP_Maiden_Voyage_Skeleton_Tree->this->OnDamageableImpact(idx_286112);
    this->SignalComplete();
L_4EB:
    return;
}
