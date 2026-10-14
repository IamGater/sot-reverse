// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_VotableTaleProposal_TT_ArtTrickster_C::PlayShowTokenAnimation (360 bytes)
void BP_VotableTaleProposal_TT_ArtTrickster_C::PlayShowTokenAnimation()
{
    UMaterialInterface* CallFunc_GetMaterial_ReturnValue = Token->GetMaterial();
    float CallFunc_GetGameTimeInSeconds_ReturnValue = UKismetSystemLibrary::GetGameTimeInSeconds();
    MaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic = Cast<MaterialInstanceDynamic*>(CallFunc_GetMaterial_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsMaterial_Instance_Dynamic);
    auto UniqueObjectNameForCooking_LinearColor = UniqueObjectNameForCooking_LinearColor;
    UniqueObjectNameForCooking_LinearColor = UniqueObjectNameForCooking_LinearColor;
    UniqueObjectNameForCooking_LinearColor = UniqueObjectNameForCooking_LinearColor;
    UniqueObjectNameForCooking_LinearColor = UniqueObjectNameForCooking_LinearColor;
    return;
    VotableWithSessionComponent* K2Node_DynamicCast_AsVotable_with_Session_Component = Cast<VotableWithSessionComponent*>(VotableObject);
    K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsVotable_with_Session_Component);
    if (!K2Node_DynamicCast_bSuccess) goto L_8C;
    bool CallFunc_IsSessionLocked_ReturnValue = K2Node_DynamicCast_AsVotable_with_Session_Component->IsSessionLocked();
    auto Result = CallFunc_IsSessionLocked_ReturnValue;
L_8C:
    return;
}

// Recovered Kismet: BP_VotableTaleProposal_TT_ArtTrickster_C::UserConstructionScript (786 bytes)
void BP_VotableTaleProposal_TT_ArtTrickster_C::UserConstructionScript()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(K2Node_MakeArray_Array);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    bool CallFunc_SetStaticMesh_ReturnValue = CallFunc_Array_Get_Item->SetStaticMesh(Token);
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_Array_Get_Item->CreateDynamicMaterialInstance(Token);
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_VotableTaleProposal_TT_ArtTrickster_C::ReceiveBeginPlay (22 bytes)
void BP_VotableTaleProposal_TT_ArtTrickster_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_VotableTaleProposal_TT_ArtTrickster();
    return;
}

// Recovered Kismet: BP_VotableTaleProposal_TT_ArtTrickster_C::OnVoteAdded (40 bytes)
void BP_VotableTaleProposal_TT_ArtTrickster_C::OnVoteAdded()
{
    ExecuteUbergraph_BP_VotableTaleProposal_TT_ArtTrickster();
    return;
}

// Recovered Kismet: BP_VotableTaleProposal_TT_ArtTrickster_C::OnVoteRemoved (40 bytes)
void BP_VotableTaleProposal_TT_ArtTrickster_C::OnVoteRemoved()
{
    ExecuteUbergraph_BP_VotableTaleProposal_TT_ArtTrickster();
    return;
}

// Recovered Kismet: BP_VotableTaleProposal_TT_ArtTrickster_C::ExecuteUbergraph_BP_VotableTaleProposal_TT_ArtTrickster (2120 bytes)
void BP_VotableTaleProposal_TT_ArtTrickster_C::ExecuteUbergraph_BP_VotableTaleProposal_TT_ArtTrickster()
{
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    int CallFunc_Array_Length_ReturnValue3 = UKismetArrayLibrary::Array_Length(Tokens);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    TScriptInterface<UVoterInterface> CallFunc_GetVoter_ReturnValue = AVotableObjectView::GetVoter(Temp_int_Array_Index_Variable);
    UObject* CallFunc_Conv_InterfaceToObject_ReturnValue = UKismetSystemLibrary::Conv_InterfaceToObject(CallFunc_GetVoter_ReturnValue);
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(CallFunc_Conv_InterfaceToObject_ReturnValue);
    CallFunc_GetVoter_ReturnValue = AVotableObjectView::GetVoter(Temp_int_Array_Index_Variable);
    CallFunc_Conv_InterfaceToObject_ReturnValue = UKismetSystemLibrary::Conv_InterfaceToObject(CallFunc_GetVoter_ReturnValue);
    CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(CallFunc_Conv_InterfaceToObject_ReturnValue);
    PlayShowTokenAnimation(CallFunc_Array_Get_Item3);
L_2BB:
    auto Tokens = K2Node_MakeArray_Array;
    Is Session Locked(CallFunc_Is_Session_Locked_IsLocked);
    if (!CallFunc_Is_Session_Locked_IsLocked) goto L_2BB;
    auto CallFunc_Add_IntInt_ReturnValue2 = VoteCount;
    auto VoteCount = CallFunc_Add_IntInt_ReturnValue2;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(Tokens);
    auto CallFunc_Subtract_IntInt_ReturnValue = VoteCount;
    auto CallFunc_Less_IntInt_ReturnValue2 = CallFunc_Subtract_IntInt_ReturnValue;
    auto CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
    auto CallFunc_BooleanAND_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
    CallFunc_Subtract_IntInt_ReturnValue = VoteCount;
    CallFunc_Subtract_IntInt_ReturnValue = VoteCount;
    PlayShowTokenAnimation(CallFunc_Array_Get_Item);
    auto K2Node_MakeStruct_WwiseEmitterCreationParams = K2Node_MakeStruct_WwiseEmitterCreationParams;
    K2Node_MakeStruct_WwiseEmitterCreationParams = K2Node_MakeStruct_WwiseEmitterCreationParams;
    K2Node_MakeStruct_WwiseEmitterCreationParams = K2Node_MakeStruct_WwiseEmitterCreationParams;
    K2Node_MakeStruct_WwiseEmitterCreationParams = K2Node_MakeStruct_WwiseEmitterCreationParams;
    K2Node_MakeStruct_WwiseEmitterCreationParams = K2Node_MakeStruct_WwiseEmitterCreationParams;
    CallFunc_Subtract_IntInt_ReturnValue = VoteCount;
    auto CallFunc_Subtract_IntInt_ReturnValue2 = VoteCount;
    VoteCount = CallFunc_Subtract_IntInt_ReturnValue2;
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(Tokens);
    auto CallFunc_Less_IntInt_ReturnValue3 = VoteCount;
    auto CallFunc_GreaterEqual_IntInt_ReturnValue2 = VoteCount;
    auto CallFunc_BooleanAND_ReturnValue2 = CallFunc_GreaterEqual_IntInt_ReturnValue2;
    return;
}
