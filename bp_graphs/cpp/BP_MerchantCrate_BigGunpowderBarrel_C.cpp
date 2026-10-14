// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_MerchantCrate_BigGunpowderBarrel_C::UserConstructionScript (3 bytes)
void BP_MerchantCrate_BigGunpowderBarrel_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_MerchantCrate_BigGunpowderBarrel_C::ReceiveBeginPlay (22 bytes)
void BP_MerchantCrate_BigGunpowderBarrel_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_MerchantCrate_BigGunpowderBarrel();
    return;
}

// Recovered Kismet: BP_MerchantCrate_BigGunpowderBarrel_C::ExecuteUbergraph_BP_MerchantCrate_BigGunpowderBarrel (262 bytes)
void BP_MerchantCrate_BigGunpowderBarrel_C::ExecuteUbergraph_BP_MerchantCrate_BigGunpowderBarrel()
{
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(Fuse);
    if (!CallFunc_IsValid_ReturnValue) goto L_103;
    StaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component = Cast<StaticMeshComponent*>(FirstPersonMesh);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsStatic_Mesh_Component);
L_103:
    return;
}
