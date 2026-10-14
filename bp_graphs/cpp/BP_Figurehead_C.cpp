// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Figurehead_C::UserConstructionScript (3 bytes)
void BP_Figurehead_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_Figurehead_C::OnPartMeshLoaded (40 bytes)
void BP_Figurehead_C::OnPartMeshLoaded()
{
    ExecuteUbergraph_BP_Figurehead();
    return;
}

// Recovered Kismet: BP_Figurehead_C::OnPartDescLoaded (40 bytes)
void BP_Figurehead_C::OnPartDescLoaded()
{
    ExecuteUbergraph_BP_Figurehead();
    return;
}

// Recovered Kismet: BP_Figurehead_C::ExecuteUbergraph_BP_Figurehead (289 bytes)
void BP_Figurehead_C::ExecuteUbergraph_BP_Figurehead()
{
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(K2Node_Event_Mesh);
    if (!CallFunc_IsValid_ReturnValue) goto L_11E;
    bool CallFunc_SetStaticMesh_ReturnValue = Figurehead->SetStaticMesh(K2Node_Event_Mesh);
    auto CallFunc_IsValid_ReturnValue2 = KismetSystemLibrary->this->IsValid(K2Node_Event_Desc);
    if (!CallFunc_IsValid_ReturnValue2) goto L_11E;
    bool CallFunc_SetStaticMesh_ReturnValue2 = Figurehead->SetStaticMesh(K2Node_Event_Desc);
L_11E:
    return;
}
