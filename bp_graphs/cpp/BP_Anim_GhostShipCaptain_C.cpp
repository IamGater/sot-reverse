// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Anim_GhostShipCaptain_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_GhostShipCaptain_AnimGraphNode_HIKLookAt_559E08FE4278B4C88466CCBBB6544058 (22 bytes)
void BP_Anim_GhostShipCaptain_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_GhostShipCaptain_AnimGraphNode_HIKLookAt_559E08FE4278B4C88466CCBBB6544058()
{
    ExecuteUbergraph_BP_Anim_GhostShipCaptain();
    return;
}

// Recovered Kismet: BP_Anim_GhostShipCaptain_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_GhostShipCaptain_AnimGraphNode_BlendListByBool_CA8E748947CB37638D1D77AF82F41 (22 bytes)
void BP_Anim_GhostShipCaptain_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_GhostShipCaptain_AnimGraphNode_BlendListByBool_CA8E748947CB37638D1D77AF82F41()
{
    ExecuteUbergraph_BP_Anim_GhostShipCaptain();
    return;
}

// Recovered Kismet: BP_Anim_GhostShipCaptain_C::BlueprintUpdateAnimation (40 bytes)
void BP_Anim_GhostShipCaptain_C::BlueprintUpdateAnimation()
{
    ExecuteUbergraph_BP_Anim_GhostShipCaptain();
    return;
}

// Recovered Kismet: BP_Anim_GhostShipCaptain_C::ExecuteUbergraph_BP_Anim_GhostShipCaptain (784 bytes)
void BP_Anim_GhostShipCaptain_C::ExecuteUbergraph_BP_Anim_GhostShipCaptain()
{
    ACharacter* CallFunc_GetPlayerCharacter_ReturnValue2 = UGameplayStatics::GetPlayerCharacter();
    FTransform CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue2->GetSocketTransform();
    auto AnimGraphNode_HIKLookAt_559E08FE4278B4C88466CCBBB6544058 = AnimGraphNode_HIKLookAt_559E08FE4278B4C88466CCBBB6544058;
L_EC:
    auto CallFunc_Greater_FloatFloat_ReturnValue = IKAlpha;
    if (!CallFunc_Greater_FloatFloat_ReturnValue) goto L_30D;
    auto CallFunc_Greater_FloatFloat_ReturnValue2 = IKAlpha;
    if (!CallFunc_Greater_FloatFloat_ReturnValue2) goto L_30D;
    auto CallFunc_Subtract_FloatFloat_ReturnValue = IKAlpha;
    auto CallFunc_FClamp_ReturnValue2 = CallFunc_Subtract_FloatFloat_ReturnValue;
    auto IKAlpha = CallFunc_FClamp_ReturnValue2;
    ACharacter* CallFunc_GetPlayerCharacter_ReturnValue = UGameplayStatics::GetPlayerCharacter();
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(CallFunc_GetPlayerCharacter_ReturnValue);
    auto AnimGraphNode_BlendListByBool_CA8E748947CB37638D1D77AF82F419EB = AnimGraphNode_BlendListByBool_CA8E748947CB37638D1D77AF82F419EB;
    if (!Active) goto L_EC;
    auto CallFunc_Less_FloatFloat_ReturnValue = IKAlpha;
    if (!CallFunc_Less_FloatFloat_ReturnValue) goto L_30D;
    auto CallFunc_Add_FloatFloat_ReturnValue = IKAlpha;
    auto CallFunc_FClamp_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
    IKAlpha = CallFunc_FClamp_ReturnValue;
L_30D:
    return;
}
