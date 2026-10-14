// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Cannon_C::GetDockableInfo (135 bytes)
void BP_Cannon_C::GetDockableInfo()
{
    auto K2Node_MakeStruct_DockableInfo = K2Node_MakeStruct_DockableInfo;
    K2Node_MakeStruct_DockableInfo = K2Node_MakeStruct_DockableInfo;
    K2Node_MakeStruct_DockableInfo = K2Node_MakeStruct_DockableInfo;
    return;
}

// Recovered Kismet: BP_Cannon_C::UserConstructionScript (173 bytes)
void BP_Cannon_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_Cannon_C::ExecuteUbergraph_BP_Cannon (40 bytes)
void BP_Cannon_C::ExecuteUbergraph_BP_Cannon()
{
    ExecuteUbergraph_BP_Cannon();
    return;
L_F:
    auto MuzzleFlashVfxFirstPerson = DefaultMuzzleFlashVfxFirstPerson;
    ACannon::ResetLoadedItemInfoParticles();
    bool CallFunc_SetStaticMesh_ReturnValue = BarrelMeshComponent->SetStaticMesh(K2Node_Event_CannonDesc);
    auto CallFunc_IsValid_ReturnValue4 = KismetSystemLibrary->this->IsValid(K2Node_Event_CannonDesc);
    if (!CallFunc_IsValid_ReturnValue4) goto L_F;
    MuzzleFlashVfxFirstPerson = K2Node_Event_CannonDesc;
    auto CallFunc_IsValid_ReturnValue3 = KismetSystemLibrary->this->IsValid(K2Node_Event_CannonDesc);
    if (!CallFunc_IsValid_ReturnValue3) goto L_211;
    auto MuzzleFlashVfxThirdPerson = K2Node_Event_CannonDesc;
L_211:
    MuzzleFlashVfxThirdPerson = DefaultMuzzleFlashVfxThirdPerson;
    auto CallFunc_IsValid_ReturnValue2 = KismetSystemLibrary->this->IsValid(K2Node_Event_CannonDesc);
    if (!CallFunc_IsValid_ReturnValue2) goto L_2B8;
    auto FireSfx = K2Node_Event_CannonDesc;
L_2B8:
    FireSfx = DefaultFireSfx;
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(K2Node_Event_CannonDesc);
    return;
}
