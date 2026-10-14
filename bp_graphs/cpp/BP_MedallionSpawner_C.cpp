// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_MedallionSpawner_C::UserConstructionScript (3 bytes)
void BP_MedallionSpawner_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_MedallionSpawner_C::ReceiveBeginPlay (22 bytes)
void BP_MedallionSpawner_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_MedallionSpawner();
    return;
}

// Recovered Kismet: BP_MedallionSpawner_C::BndEvt__Linked Vault_K2Node_ComponentBoundEvent_18_VaultEventOccurredDelegate__DelegateSignature (22 bytes)
void BP_MedallionSpawner_C::BndEvt__Linked Vault_K2Node_ComponentBoundEvent_18_VaultEventOccurredDelegate__DelegateSignature()
{
    ExecuteUbergraph_BP_MedallionSpawner();
    return;
}

// Recovered Kismet: BP_MedallionSpawner_C::ExecuteUbergraph_BP_MedallionSpawner (417 bytes)
void BP_MedallionSpawner_C::ExecuteUbergraph_BP_MedallionSpawner()
{
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(idx_280987);
    FTransform idx_280983 = idx_280987->GetPlinthItemSpawnTransform();
    auto CallFunc_ComposeTransforms_ReturnValue = CallFunc_MakeTransform_ReturnValue;
    AActor* idx_280984 = UItemFactoryFunctions::SpawnProxyItem(idx_280988, CallFunc_ComposeTransforms_ReturnValue);
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    return;
}
