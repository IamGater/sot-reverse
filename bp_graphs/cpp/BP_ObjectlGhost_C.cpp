// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_ObjectlGhost_C::StartGlowEffect (568 bytes)
void BP_ObjectlGhost_C::StartGlowEffect()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(DecalMaterials);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    float CallFunc_GetGameTimeInSeconds_ReturnValue = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_ObjectlGhost_C::StartReaction (36 bytes)
void BP_ObjectlGhost_C::StartReaction()
{
    StartGlowEffect();
    return;
}

// Recovered Kismet: BP_ObjectlGhost_C::StopReaction (50 bytes)
void BP_ObjectlGhost_C::StopReaction()
{
    auto CallFunc_StopReaction_ReturnValue = this->StopReaction();
    return;
}

// Recovered Kismet: BP_ObjectlGhost_C::CollectDecalMaterials (333 bytes)
void BP_ObjectlGhost_C::CollectDecalMaterials()
{
    TArray<UMaterialInterface*> CallFunc_GetMaterials_ReturnValue = Static->GetMaterials();
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = Static->CreateDynamicMaterialInstance(ElementIndex, CallFunc_Array_Get_Item);
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(DecalMaterials, CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    return;
}

// Recovered Kismet: BP_ObjectlGhost_C::UserConstructionScript (3 bytes)
void BP_ObjectlGhost_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_ObjectlGhost_C::ReceiveBeginPlay (22 bytes)
void BP_ObjectlGhost_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_ObjectlGhost();
    return;
}

// Recovered Kismet: BP_ObjectlGhost_C::ExecuteUbergraph_BP_ObjectlGhost (37 bytes)
void BP_ObjectlGhost_C::ExecuteUbergraph_BP_ObjectlGhost()
{
    CollectDecalMaterials();
    return;
}
