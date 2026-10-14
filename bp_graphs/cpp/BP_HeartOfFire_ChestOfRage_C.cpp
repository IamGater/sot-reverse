// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_HeartOfFire_ChestOfRage_C::UserConstructionScript (13 bytes)
void BP_HeartOfFire_ChestOfRage_C::UserConstructionScript()
{
    this->UserConstructionScript();
    return;
}

// Recovered Kismet: BP_HeartOfFire_ChestOfRage_C::ReceiveBeginPlay (22 bytes)
void BP_HeartOfFire_ChestOfRage_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_HeartOfFire_ChestOfRage();
    return;
}

// Recovered Kismet: BP_HeartOfFire_ChestOfRage_C::ReceiveTick (40 bytes)
void BP_HeartOfFire_ChestOfRage_C::ReceiveTick()
{
    ExecuteUbergraph_BP_HeartOfFire_ChestOfRage();
    return;
}

// Recovered Kismet: BP_HeartOfFire_ChestOfRage_C::ChestofRageCutsceneHandler (112 bytes)
void BP_HeartOfFire_ChestOfRage_C::ChestofRageCutsceneHandler()
{
    ExecuteUbergraph_BP_HeartOfFire_ChestOfRage();
    return;
}

// Recovered Kismet: BP_HeartOfFire_ChestOfRage_C::ExecuteUbergraph_BP_HeartOfFire_ChestOfRage (740 bytes)
void BP_HeartOfFire_ChestOfRage_C::ExecuteUbergraph_BP_HeartOfFire_ChestOfRage()
{
    this->ReceiveBeginPlay();
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = SkeletalMesh->CreateDynamicMaterialInstance();
    auto dynamic_material = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    auto CallFunc_GetAnimInstance_ReturnValue = SkeletalMesh->GetAnimInstance();
    BP_HeartOfFire_ChestOfRage_Anim_C* K2Node_DynamicCast_AsBP_Heart_Of_Fire_Chest_Of_Rage_Anim = Cast<BP_HeartOfFire_ChestOfRage_Anim_C*>(CallFunc_GetAnimInstance_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsBP_Heart_Of_Fire_Chest_Of_Rage_Anim);
    if (!K2Node_DynamicCast_bSuccess) goto L_2E1;
    auto vfx_HoF_ChestofRage_01 = vfx_HoF_ChestofRage_01;
    auto vfx_HoF_Pendragon_Ritual_SwordtoChestBuildup_01 = vfx_HoF_Pendragon_Ritual_SwordtoChestBuildup_01;
    auto vfx_HoF_ChestofRage_Dissolve_01 = vfx_HoF_ChestofRage_Dissolve_01;
L_2E1:
    return;
}
