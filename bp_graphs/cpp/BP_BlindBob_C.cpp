// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_BlindBob_C::UserConstructionScript (3 bytes)
void BP_BlindBob_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_BlindBob_C::PlayCheer (22 bytes)
void BP_BlindBob_C::PlayCheer()
{
    ExecuteUbergraph_BP_BlindBob();
    return;
}

// Recovered Kismet: BP_BlindBob_C::ExecuteUbergraph_BP_BlindBob (212 bytes)
void BP_BlindBob_C::ExecuteUbergraph_BP_BlindBob()
{
    SkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component = Cast<SkeletalMeshComponent*>(Mesh);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsSkeletal_Mesh_Component);
    if (!K2Node_DynamicCast_bSuccess) goto L_D1;
    auto CallFunc_GetAnimInstance_ReturnValue = K2Node_DynamicCast_AsSkeletal_Mesh_Component->GetAnimInstance();
    float idx_256267 = CallFunc_GetAnimInstance_ReturnValue->Montage_Play(idx_256270);
L_D1:
    return;
}
