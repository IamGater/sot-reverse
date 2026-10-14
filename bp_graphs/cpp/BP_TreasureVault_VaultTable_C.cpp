// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TreasureVault_VaultTable_C::PopulateCurrentMaterial (172 bytes)
void BP_TreasureVault_VaultTable_C::PopulateCurrentMaterial()
{
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(PuzzleVault);
    if (!CallFunc_IsValid_ReturnValue) goto L_A9;
L_A9:
    return;
}

// Recovered Kismet: BP_TreasureVault_VaultTable_C::PopulateTextureVisibility (113 bytes)
void BP_TreasureVault_VaultTable_C::PopulateTextureVisibility()
{
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(PuzzleVault);
    if (!CallFunc_IsValid_ReturnValue) goto L_6E;
L_6E:
    return;
}

// Recovered Kismet: BP_TreasureVault_VaultTable_C::OnRep_PuzzleVault (70 bytes)
void BP_TreasureVault_VaultTable_C::OnRep_PuzzleVault()
{
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_27;
L_27:
    PopulateTextureVisibility();
    PopulateCurrentMaterial();
    return;
}

// Recovered Kismet: BP_TreasureVault_VaultTable_C::OnRep_TextureVisibility (56 bytes)
void BP_TreasureVault_VaultTable_C::OnRep_TextureVisibility()
{
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_27;
L_27:
    PopulateTextureVisibility();
    return;
}

// Recovered Kismet: BP_TreasureVault_VaultTable_C::OnRep_MaterialElementIndex (56 bytes)
void BP_TreasureVault_VaultTable_C::OnRep_MaterialElementIndex()
{
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_27;
L_27:
    PopulateCurrentMaterial();
    return;
}

// Recovered Kismet: BP_TreasureVault_VaultTable_C::InitialiseVariables (117 bytes)
void BP_TreasureVault_VaultTable_C::InitialiseVariables()
{
    auto CallFunc_FlushNetDormancy_ReturnValue2 = this->FlushNetDormancy();
    auto PuzzleVault = Puzzle;
    OnRep_PuzzleVault();
    auto CallFunc_FlushNetDormancy_ReturnValue = this->FlushNetDormancy();
    Initialise on Server();
    return;
}

// Recovered Kismet: BP_TreasureVault_VaultTable_C::IncrementVaultTableMaterial (225 bytes)
void BP_TreasureVault_VaultTable_C::IncrementVaultTableMaterial()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(Materials);
    auto CallFunc_Add_IntInt_ReturnValue2 = MaterialElementIndex;
    auto CallFunc_Greater_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    if (!CallFunc_Greater_IntInt_ReturnValue) goto L_DE;
    auto CallFunc_Add_IntInt_ReturnValue = MaterialElementIndex;
    auto MaterialElementIndex = CallFunc_Add_IntInt_ReturnValue;
L_DE:
    return;
}

// Recovered Kismet: BP_TreasureVault_VaultTable_C::GetObjectDisplayName (92 bytes)
void BP_TreasureVault_VaultTable_C::GetObjectDisplayName()
{
    return;
}

// Recovered Kismet: BP_TreasureVault_VaultTable_C::GetClosestInteractionPoint (111 bytes)
void BP_TreasureVault_VaultTable_C::GetClosestInteractionPoint()
{
    FVector CallFunc_GetBoxWorldOrigin_ReturnValue = Interactable->GetBoxWorldOrigin();
    return;
}

// Recovered Kismet: BP_TreasureVault_VaultTable_C::UserConstructionScript (3 bytes)
void BP_TreasureVault_VaultTable_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_TreasureVault_VaultTable_C::ReceiveBeginPlay (22 bytes)
void BP_TreasureVault_VaultTable_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_TreasureVault_VaultTable();
    return;
}

// Recovered Kismet: BP_TreasureVault_VaultTable_C::ReceiveDestroyed (22 bytes)
void BP_TreasureVault_VaultTable_C::ReceiveDestroyed()
{
    ExecuteUbergraph_BP_TreasureVault_VaultTable();
    return;
    ExecuteUbergraph_BP_TreasureVault_VaultTable();
    return;
    ExecuteUbergraph_BP_TreasureVault_VaultTable();
    return;
}

// Recovered Kismet: BP_TreasureVault_VaultTable_C::BndEvt__Lock_K2Node_ComponentBoundEvent_19_OnIndividualLockOpenedDelegate__DelegateSignature (22 bytes)
void BP_TreasureVault_VaultTable_C::BndEvt__Lock_K2Node_ComponentBoundEvent_19_OnIndividualLockOpenedDelegate__DelegateSignature()
{
    ExecuteUbergraph_BP_TreasureVault_VaultTable();
    return;
}

// Recovered Kismet: BP_TreasureVault_VaultTable_C::BndEvt__Lock_K2Node_ComponentBoundEvent_57_OnLockOpenedDelegate__DelegateSignature (22 bytes)
void BP_TreasureVault_VaultTable_C::BndEvt__Lock_K2Node_ComponentBoundEvent_57_OnLockOpenedDelegate__DelegateSignature()
{
    ExecuteUbergraph_BP_TreasureVault_VaultTable();
    return;
    ExecuteUbergraph_BP_TreasureVault_VaultTable();
    return;
}

// Recovered Kismet: BP_TreasureVault_VaultTable_C::InitBPVariables (58 bytes)
void BP_TreasureVault_VaultTable_C::InitBPVariables()
{
    ExecuteUbergraph_BP_TreasureVault_VaultTable();
    return;
}

// Recovered Kismet: BP_TreasureVault_VaultTable_C::ExecuteUbergraph_BP_TreasureVault_VaultTable (1186 bytes)
void BP_TreasureVault_VaultTable_C::ExecuteUbergraph_BP_TreasureVault_VaultTable()
{
    OnRep_TextureVisibility();
    auto CallFunc_FlushNetDormancy_ReturnValue3 = this->FlushNetDormancy();
    OnRep_MaterialElementIndex();
    auto CallFunc_FlushNetDormancy_ReturnValue4 = this->FlushNetDormancy();
    bool IsInitialised = true;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(ParticleSystems);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    auto CallFunc_FlushNetDormancy_ReturnValue = this->FlushNetDormancy();
    bool TextureVisibility = true;
    OnRep_TextureVisibility();
    auto CallFunc_FlushNetDormancy_ReturnValue2 = this->FlushNetDormancy();
    TextureVisibility = false;
    TScriptInterface<UInteractableInterface> CallFunc_Initialise_InInteractableInterface_CastInput = TScriptInterface<UInteractableInterface>(nullptr);
    auto ParticleSystems = K2Node_MakeArray_Array;
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(PuzzleVault);
    auto CallFunc_Add_IntInt_ReturnValue2 = VFXIndex;
    auto VFXIndex = CallFunc_Add_IntInt_ReturnValue2;
    Multicast Play VFX();
    IncrementVaultTableMaterial();
    Multicast Play All VFX();
    BP_PuzzleVault_C* K2Node_DynamicCast_AsBP_Puzzle_Vault = Cast<BP_PuzzleVault_C*>(K2Node_Event_PuzzleVault);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsBP_Puzzle_Vault);
    InitialiseVariables(K2Node_DynamicCast_AsBP_Puzzle_Vault, K2Node_Event_TableMaterials);
    return;
}

// Recovered Kismet: BP_TreasureVault_VaultTable_C::KeyReceived__DelegateSignature (3 bytes)
void BP_TreasureVault_VaultTable_C::KeyReceived__DelegateSignature()
{
    return;
}
