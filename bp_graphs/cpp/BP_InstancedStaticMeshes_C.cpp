// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_InstancedStaticMeshes_C::UserConstructionScript (913 bytes)
void BP_InstancedStaticMeshes_C::UserConstructionScript()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(Instances);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(CallFunc_Array_Get_Item);
    auto CallFunc_Greater_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue2;
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(CallFunc_Array_Get_Item);
    auto CallFunc_BooleanAND_ReturnValue = CallFunc_IsValid_ReturnValue;
    UActorComponent* CallFunc_AddComponent_ReturnValue = AActor::AddComponent(false, Temp_struct_Variable);
    bool CallFunc_SetStaticMesh_ReturnValue = CallFunc_AddComponent_ReturnValue->SetStaticMesh(CallFunc_Array_Get_Item);
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}
